#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.Build;
using UnityEngine;
using System.IO;
using System.Linq;

public class PackageSymbolPostprocessor : AssetPostprocessor
{
    private const string SYMBOL = "MangoMango_IAP";
    private const string PACKAGE_PATH = "Assets/IAP";

    static void OnPostprocessAllAssets(
        string[] importedAssets,
        string[] deletedAssets,
        string[] movedAssets,
        string[] movedFromAssetPaths)
    {
        bool wasDeleted = deletedAssets.Any(path => path.StartsWith(PACKAGE_PATH));
        bool wasImported = importedAssets.Any(path => path.StartsWith(PACKAGE_PATH));

        if (wasDeleted || wasImported)
        {
            EditorApplication.delayCall += CheckAndUpdateSymbol;
        }
    }

    private static void CheckAndUpdateSymbol()
    {
        var buildTarget = NamedBuildTarget.FromBuildTargetGroup(EditorUserBuildSettings.selectedBuildTargetGroup);
        string defines = PlayerSettings.GetScriptingDefineSymbols(buildTarget);
        bool hasSymbol = defines.Split(';').Contains(SYMBOL);
        bool packageExists = Directory.Exists(PACKAGE_PATH);

        if (packageExists && !hasSymbol)
        {
            string newDefines = string.IsNullOrEmpty(defines) ? SYMBOL : $"{defines};{SYMBOL}";
            PlayerSettings.SetScriptingDefineSymbols(buildTarget, newDefines);
            Debug.Log($"Added symbol: {SYMBOL}");
        }
        else if (!packageExists && hasSymbol)
        {
            string newDefines = string.Join(";", defines.Split(';').Where(d => d != SYMBOL));
            PlayerSettings.SetScriptingDefineSymbols(buildTarget, newDefines);
            Debug.Log($"Removed symbol: {SYMBOL} because package folder was not found.");
        }
    }
}
#endif

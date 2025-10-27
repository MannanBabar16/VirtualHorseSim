# Applovin Ad Manager

This package provides easy integration of Applovin ads and remote configuration into your Unity project.

## How to Use

1. **Add Required Prefabs to Splash Screen**
   - Drag and drop the following prefabs into your splash screen scene:
     - `Assets/Applovin Ad Manager/Prefabs/Applovin Ad Manager.prefab`
     - `Assets/Applovin Ad Manager/Prefabs/Remote Config Manager.prefab`

2. **(Optional) Enable Time Based Ads**
   - If you want to use time-based ads, also add:
     - `Assets/Applovin Ad Manager/Prefabs/Time Based Ad.prefab`

3. **Integrate IAP (In-App Purchases)**
   - Import the Unity IAP package from the Unity Package Manager.
   - After importing, if the IAP code is not activated, add the scripting define symbol `MangoMango_IAP` in **Project Settings > Player > Other Settings**.

## Notes
- This package can be use for both on Android and iOS. 
- Make sure the prefabs are present in the initial scene to ensure proper initialization.
- Configure ad and remote config settings as needed in the Unity Inspector or via your remote config service.
- For IAP, ensure the scripting define symbol is set if you encounter issues with IAP code activation.

---
For more details, refer to the code comments or contact the package maintainer.

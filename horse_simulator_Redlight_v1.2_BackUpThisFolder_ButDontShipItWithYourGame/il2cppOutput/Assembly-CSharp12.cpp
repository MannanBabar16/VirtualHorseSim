#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<MalbersAnimations.Controller.MAnimal>
struct Action_1_tC973F0AB71E0D272BD78A19DFAFC20E9570ABE3B;
// System.Action`2<System.Int32,System.Boolean>
struct Action_2_t9CCF9E751EBE923D11BC558BD78BB0B1709C733D;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Action`2<System.Int32,System.Single>
struct Action_2_t28390B369564138BA256B9D0831BFEC2F9FF1006;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<MalbersAnimations.IMDamager>
struct List_1_t87500F7636858C795C7D6FDB658513CA3E250FE6;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<MalbersAnimations.Controller.MAnimal>
struct List_1_t9A03E63888D540FC2AA707399D84AB5792C59BBA;
// System.Collections.Generic.List`1<MalbersAnimations.Controller.MPivots>
struct List_1_t326A896FB25A3AB6D807E8B81F0A6999DAD0DE5A;
// System.Collections.Generic.List`1<MalbersAnimations.Controller.MSpeedSet>
struct List_1_tC9D30204753EF29A3D6E05DDF3430E7EC1BD7934;
// System.Collections.Generic.List`1<MalbersAnimations.Utilities.MesssageItem>
struct List_1_t23A94D616FB4351B1B48F723E9E23E9EEC25DE59;
// System.Collections.Generic.List`1<MalbersAnimations.Controller.Mode>
struct List_1_t0742ED66EE6E8A854CCFD2B651BAB25EE4EB114C;
// System.Collections.Generic.List`1<MalbersAnimations.ModeID>
struct List_1_tB8FF0E706AB24A80FD86FE03E9CB9E7A9C452F58;
// System.Collections.Generic.List`1<MalbersAnimations.Controller.OnEnterExitSpeed>
struct List_1_tEA982D0CD812867C79A3DA91D4B3987DBAFB537C;
// System.Collections.Generic.List`1<MalbersAnimations.Controller.OnEnterExitStance>
struct List_1_t07F72E247FD0A574FDA37D3BDDAFA19D60BB6AA9;
// System.Collections.Generic.List`1<MalbersAnimations.Controller.OnEnterExitState>
struct List_1_tBB537273CE6E97B1A4157EC2206489A4C574EC9C;
// System.Collections.Generic.List`1<MalbersAnimations.StanceID>
struct List_1_t845CE7181F96BB81C42D4345AE43958A3DF033B0;
// System.Collections.Generic.List`1<MalbersAnimations.Controller.State>
struct List_1_t3FD2F34A697DB45A10609A83345E61424748B7A3;
// System.Collections.Generic.List`1<MalbersAnimations.StateID>
struct List_1_t0B72DF959EC8AE5E422C664170641D6069E3EA27;
// System.Collections.Generic.List`1<MalbersAnimations.Controller.TagModifier>
struct List_1_t1A2BD0FE4C6892256629AA12B6A73A956B24E863;
// MalbersAnimations.IAnimatorListener[]
struct IAnimatorListenerU5BU5D_t0EB9A96037F14F9B84430DD86F435EA3C6B718D6;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// MalbersAnimations.Utilities.Aim
struct Aim_t4026CCD0187127572654CA778EF91C8CCEF8CC3C;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// MalbersAnimations.Events.BoolEvent
struct BoolEvent_t2EA824D683F19D218AE46DE9F805912599180C93;
// MalbersAnimations.Scriptables.BoolReference
struct BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// MalbersAnimations.Scriptables.FloatReference
struct FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB;
// MalbersAnimations.IAITarget
struct IAITarget_tE153E940A0634CF7D7DAB89D86FC79C9BA1FCA93;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// MalbersAnimations.IDs
struct IDs_tF2E92DAC024901769C3F1DF9634CE1D628479963;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// MalbersAnimations.IInputSource
struct IInputSource_t30521F8A6F48E7DB7C7BCCFD8F0296A82D07399F;
// MalbersAnimations.IInteractable
struct IInteractable_tE47A4B632202114995AEAB46F95CD9F04E4B5E31;
// MalbersAnimations.IInteractor
struct IInteractor_t43BC52FF57B46741AA1F41E12C02F6E38FA11DE4;
// MalbersAnimations.IWayPoint
struct IWayPoint_tD275B8641D3B4BA62071EF05CE381F8F599C6B3B;
// MalbersAnimations.Events.Int2Event
struct Int2Event_t444E50C50E2C577A422A5A3127E389CAF25E250B;
// MalbersAnimations.Events.IntEvent
struct IntEvent_tC9404A557120C151E20B6DE339F6CEDDE2440D4B;
// MalbersAnimations.Scriptables.IntReference
struct IntReference_t926DE734A982323E09DB8C090F35A4D03D038311;
// MalbersAnimations.Scriptables.LayerReference
struct LayerReference_tA5839521CAAAF238C55F7A3EFF8BE7CCAF6057F2;
// MalbersAnimations.Controller.MAnimal
struct MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB;
// MalbersAnimations.Controller.AI.MAnimalAIControl
struct MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10;
// MalbersAnimations.Controller.MPivots
struct MPivots_t53B188FE4AF7F2514B60582B48A8952F74450398;
// MalbersAnimations.Controller.MSpeedSet
struct MSpeedSet_t8127629FDCF338AE78853F74056EA9CDE1FB214D;
// MalbersAnimations.Controller.Mode
struct Mode_tC825D7DFDB680D0101D86627855BE6D4D6288D3D;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// MalbersAnimations.Controller.OnEnterExitSpeed
struct OnEnterExitSpeed_t87ACBCC06EF2AD2DF349EA0B3F89C8A6D3011EF6;
// MalbersAnimations.Controller.OnEnterExitState
struct OnEnterExitState_t4F817B07AC81B44661C3CF4EFA7B31A276DB782F;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// MalbersAnimations.Controller.SpeedModifierEvent
struct SpeedModifierEvent_t2B79EB14FEFC04963FDD359E98E72DE3F1DEBD5C;
// MalbersAnimations.StanceID
struct StanceID_t45E0B4135749765C371193C808A39129C25FAA7E;
// MalbersAnimations.Controller.State
struct State_tE52D2764374B1BF689A725E753EE1921828FCD09;
// MalbersAnimations.StateID
struct StateID_t5BAEB99D106993273AE9B9BFBC21D6DD28FC4388;
// System.String
struct String_t;
// MalbersAnimations.Scriptables.StringReference
struct StringReference_tEC87164887B832EB6279AA08100F339DAC1F2A7C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// MalbersAnimations.Events.TransformEvent
struct TransformEvent_tBB055202B7CA0C563EDFDE8636F076E92A04675C;
// MalbersAnimations.Scriptables.TransformReference
struct TransformReference_t9C1ED226B0C568C05FC73C48903E8D27B6674FE2;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// MalbersAnimations.Events.Vector3Event
struct Vector3Event_tF7314BFDA87D86E61CCB0097C36478F3D0CB7DC1;
// MalbersAnimations.Scriptables.Vector3Reference
struct Vector3Reference_tD249D2241A1288A19BE18D63755BB89E4410CB38;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// MalbersAnimations.Controller.Zone
struct Zone_t73A276760D210C20C04B437C96B7999E0951F567;
// MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222
struct U3CC_Climb_OffMeshU3Ed__222_t45E3B9A61CD99B7320DE6FEC3156E5123DBAE641;
// MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221
struct U3CC_FlyMoveOffMeshU3Ed__221_t813975FEF260B67984894AB8E25F201B983ECA48;
// MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220
struct U3CC_WaitToNextTargetU3Ed__220_tE6A2A312716FF21693279DBDEE66ED805A7993D8;

IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2559FDA572E465CE1787B7DF0373049916CD7AB2;
IL2CPP_EXTERN_C String_t* _stringLiteralD9717355D0891F97B0A23DEDC6C63A28C8D9CC7D;
IL2CPP_EXTERN_C String_t* _stringLiteralE9597152CFEF1A736402876DF11E349C48C0E027;
IL2CPP_EXTERN_C const RuntimeMethod* U3CC_Climb_OffMeshU3Ed__222_System_Collections_IEnumerator_Reset_mC8DA616CB929C0FF96DB90085C3DABBC978969A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CC_FlyMoveOffMeshU3Ed__221_System_Collections_IEnumerator_Reset_m5B89FF125C0ECA549984F18CF0CE0295DD6B970B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CC_WaitToNextTargetU3Ed__220_System_Collections_IEnumerator_Reset_m6AC95C3ECA80A37C36DFBD10130BF6740D330689_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// MalbersAnimations.StateEnum
struct StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068  : public RuntimeObject
{
};

struct StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_StaticFields
{
	// System.Int32 MalbersAnimations.StateEnum::Idle
	int32_t ___Idle_0;
	// System.Int32 MalbersAnimations.StateEnum::Locomotion
	int32_t ___Locomotion_1;
	// System.Int32 MalbersAnimations.StateEnum::Jump
	int32_t ___Jump_2;
	// System.Int32 MalbersAnimations.StateEnum::Fall
	int32_t ___Fall_3;
	// System.Int32 MalbersAnimations.StateEnum::Swim
	int32_t ___Swim_4;
	// System.Int32 MalbersAnimations.StateEnum::UnderWater
	int32_t ___UnderWater_5;
	// System.Int32 MalbersAnimations.StateEnum::Fly
	int32_t ___Fly_6;
	// System.Int32 MalbersAnimations.StateEnum::Climb
	int32_t ___Climb_7;
	// System.Int32 MalbersAnimations.StateEnum::Slide
	int32_t ___Slide_8;
	// System.Int32 MalbersAnimations.StateEnum::Death
	int32_t ___Death_9;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222
struct U3CC_Climb_OffMeshU3Ed__222_t45E3B9A61CD99B7320DE6FEC3156E5123DBAE641  : public RuntimeObject
{
	// System.Int32 MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MalbersAnimations.Controller.AI.MAnimalAIControl MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222::<>4__this
	MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* ___U3CU3E4__this_2;
};

// MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221
struct U3CC_FlyMoveOffMeshU3Ed__221_t813975FEF260B67984894AB8E25F201B983ECA48  : public RuntimeObject
{
	// System.Int32 MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MalbersAnimations.Controller.AI.MAnimalAIControl MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::<>4__this
	MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* ___U3CU3E4__this_2;
	// UnityEngine.Transform MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_3;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::<distance>5__2
	float ___U3CdistanceU3E5__2_4;
};

// MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220
struct U3CC_WaitToNextTargetU3Ed__220_tE6A2A312716FF21693279DBDEE66ED805A7993D8  : public RuntimeObject
{
	// System.Int32 MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MalbersAnimations.Controller.AI.MAnimalAIControl MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::<>4__this
	MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* ___U3CU3E4__this_2;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::time
	float ___time_3;
	// UnityEngine.Transform MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::NextTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___NextTarget_4;
};

// MalbersAnimations.Controller.AnimalModifier
struct AnimalModifier_t5C54DD913084C43B6C9C4429FF87DACE0F4D4D57 
{
	// MalbersAnimations.Controller.modifier MalbersAnimations.Controller.AnimalModifier::modify
	int32_t ___modify_0;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::RootMotion
	bool ___RootMotion_1;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::Sprint
	bool ___Sprint_2;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::Gravity
	bool ___Gravity_3;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::Grounded
	bool ___Grounded_4;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::OrientToGround
	bool ___OrientToGround_5;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::CustomRotation
	bool ___CustomRotation_6;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::FreeMovement
	bool ___FreeMovement_7;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::AdditivePosition
	bool ___AdditivePosition_8;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::AdditiveRotation
	bool ___AdditiveRotation_9;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::Persistent
	bool ___Persistent_10;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::IgnoreLowerStates
	bool ___IgnoreLowerStates_11;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::LockMovement
	bool ___LockMovement_12;
	// System.Boolean MalbersAnimations.Controller.AnimalModifier::LockInput
	bool ___LockInput_13;
};
// Native definition for P/Invoke marshalling of MalbersAnimations.Controller.AnimalModifier
struct AnimalModifier_t5C54DD913084C43B6C9C4429FF87DACE0F4D4D57_marshaled_pinvoke
{
	int32_t ___modify_0;
	int32_t ___RootMotion_1;
	int32_t ___Sprint_2;
	int32_t ___Gravity_3;
	int32_t ___Grounded_4;
	int32_t ___OrientToGround_5;
	int32_t ___CustomRotation_6;
	int32_t ___FreeMovement_7;
	int32_t ___AdditivePosition_8;
	int32_t ___AdditiveRotation_9;
	int32_t ___Persistent_10;
	int32_t ___IgnoreLowerStates_11;
	int32_t ___LockMovement_12;
	int32_t ___LockInput_13;
};
// Native definition for COM marshalling of MalbersAnimations.Controller.AnimalModifier
struct AnimalModifier_t5C54DD913084C43B6C9C4429FF87DACE0F4D4D57_marshaled_com
{
	int32_t ___modify_0;
	int32_t ___RootMotion_1;
	int32_t ___Sprint_2;
	int32_t ___Gravity_3;
	int32_t ___Grounded_4;
	int32_t ___OrientToGround_5;
	int32_t ___CustomRotation_6;
	int32_t ___FreeMovement_7;
	int32_t ___AdditivePosition_8;
	int32_t ___AdditiveRotation_9;
	int32_t ___Persistent_10;
	int32_t ___IgnoreLowerStates_11;
	int32_t ___LockMovement_12;
	int32_t ___LockInput_13;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// MalbersAnimations.Controller.MSpeed
struct MSpeed_t00CCB6AAA914287B7EFD397906472914DC557283 
{
	// System.String MalbersAnimations.Controller.MSpeed::name
	String_t* ___name_1;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::Vertical
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___Vertical_2;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::position
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___position_3;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::lerpPosition
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpPosition_4;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::lerpPosAnim
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpPosAnim_5;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::rotation
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___rotation_6;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::lerpRotation
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpRotation_7;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::lerpRotAnim
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpRotAnim_8;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::animator
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___animator_9;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::lerpAnimator
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpAnimator_10;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::strafeSpeed
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___strafeSpeed_11;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MSpeed::lerpStrafe
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpStrafe_12;
};

struct MSpeed_t00CCB6AAA914287B7EFD397906472914DC557283_StaticFields
{
	// MalbersAnimations.Controller.MSpeed MalbersAnimations.Controller.MSpeed::Default
	MSpeed_t00CCB6AAA914287B7EFD397906472914DC557283 ___Default_0;
};
// Native definition for P/Invoke marshalling of MalbersAnimations.Controller.MSpeed
struct MSpeed_t00CCB6AAA914287B7EFD397906472914DC557283_marshaled_pinvoke
{
	char* ___name_1;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___Vertical_2;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___position_3;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpPosition_4;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpPosAnim_5;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___rotation_6;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpRotation_7;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpRotAnim_8;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___animator_9;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpAnimator_10;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___strafeSpeed_11;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpStrafe_12;
};
// Native definition for COM marshalling of MalbersAnimations.Controller.MSpeed
struct MSpeed_t00CCB6AAA914287B7EFD397906472914DC557283_marshaled_com
{
	Il2CppChar* ___name_1;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___Vertical_2;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___position_3;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpPosition_4;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpPosAnim_5;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___rotation_6;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpRotation_7;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpRotAnim_8;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___animator_9;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpAnimator_10;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___strafeSpeed_11;
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___lerpStrafe_12;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// MalbersAnimations.IDs
struct IDs_tF2E92DAC024901769C3F1DF9634CE1D628479963  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String MalbersAnimations.IDs::DisplayName
	String_t* ___DisplayName_4;
	// System.Int32 MalbersAnimations.IDs::ID
	int32_t ___ID_5;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// MalbersAnimations.Controller.State
struct State_tE52D2764374B1BF689A725E753EE1921828FCD09  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean MalbersAnimations.Controller.State::Active
	bool ___Active_4;
	// MalbersAnimations.Controller.MAnimal MalbersAnimations.Controller.State::animal
	MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* ___animal_5;
	// UnityEngine.Transform MalbersAnimations.Controller.State::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_6;
	// System.String MalbersAnimations.Controller.State::Input
	String_t* ___Input_7;
	// MalbersAnimations.Scriptables.StringReference MalbersAnimations.Controller.State::ExitInput
	StringReference_tEC87164887B832EB6279AA08100F339DAC1F2A7C* ___ExitInput_8;
	// System.Int32 MalbersAnimations.Controller.State::Priority
	int32_t ___Priority_9;
	// MalbersAnimations.Controller.AnimalModifier MalbersAnimations.Controller.State::General
	AnimalModifier_t5C54DD913084C43B6C9C4429FF87DACE0F4D4D57 ___General_10;
	// System.Collections.Generic.List`1<MalbersAnimations.Utilities.MesssageItem> MalbersAnimations.Controller.State::GeneralMessage
	List_1_t23A94D616FB4351B1B48F723E9E23E9EEC25DE59* ___GeneralMessage_11;
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.TagModifier> MalbersAnimations.Controller.State::TagModifiers
	List_1_t1A2BD0FE4C6892256629AA12B6A73A956B24E863* ___TagModifiers_12;
	// System.Boolean MalbersAnimations.Controller.State::UseSendMessage
	bool ___UseSendMessage_13;
	// System.Boolean MalbersAnimations.Controller.State::IncludeChildren
	bool ___IncludeChildren_14;
	// UnityEngine.Vector3 MalbersAnimations.Controller.State::MovementAxisMult
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MovementAxisMult_15;
	// System.Boolean MalbersAnimations.Controller.State::AllowExitFromAnim
	bool ___AllowExitFromAnim_16;
	// System.Boolean MalbersAnimations.Controller.State::IncludeSleepState
	bool ___IncludeSleepState_17;
	// System.Collections.Generic.List`1<MalbersAnimations.StateID> MalbersAnimations.Controller.State::SleepFromState
	List_1_t0B72DF959EC8AE5E422C664170641D6069E3EA27* ___SleepFromState_18;
	// System.Collections.Generic.List`1<MalbersAnimations.ModeID> MalbersAnimations.Controller.State::SleepFromMode
	List_1_tB8FF0E706AB24A80FD86FE03E9CB9E7A9C452F58* ___SleepFromMode_19;
	// System.Collections.Generic.List`1<MalbersAnimations.StateID> MalbersAnimations.Controller.State::QueueFrom
	List_1_t0B72DF959EC8AE5E422C664170641D6069E3EA27* ___QueueFrom_20;
	// System.Collections.Generic.List`1<MalbersAnimations.StanceID> MalbersAnimations.Controller.State::SleepFromStance
	List_1_t845CE7181F96BB81C42D4345AE43958A3DF033B0* ___SleepFromStance_21;
	// System.Collections.Generic.List`1<MalbersAnimations.StanceID> MalbersAnimations.Controller.State::stances
	List_1_t845CE7181F96BB81C42D4345AE43958A3DF033B0* ___stances_22;
	// MalbersAnimations.Scriptables.IntReference MalbersAnimations.Controller.State::TryLoop
	IntReference_t926DE734A982323E09DB8C090F35A4D03D038311* ___TryLoop_23;
	// MalbersAnimations.Scriptables.StringReference MalbersAnimations.Controller.State::EnterTag
	StringReference_tEC87164887B832EB6279AA08100F339DAC1F2A7C* ___EnterTag_24;
	// MalbersAnimations.Scriptables.StringReference MalbersAnimations.Controller.State::ExitTag
	StringReference_tEC87164887B832EB6279AA08100F339DAC1F2A7C* ___ExitTag_25;
	// System.Boolean MalbersAnimations.Controller.State::ExitFrame
	bool ___ExitFrame_26;
	// System.Boolean MalbersAnimations.Controller.State::ExitOnMain
	bool ___ExitOnMain_27;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.State::EnterCooldown
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___EnterCooldown_28;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.State::ExitCooldown
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___ExitCooldown_29;
	// System.Boolean MalbersAnimations.Controller.State::CanStrafe
	bool ___CanStrafe_30;
	// System.Single MalbersAnimations.Controller.State::MovementStrafe
	float ___MovementStrafe_31;
	// System.Single MalbersAnimations.Controller.State::IdleStrafe
	float ___IdleStrafe_32;
	// System.Boolean MalbersAnimations.Controller.State::debug
	bool ___debug_33;
	// System.Int32 MalbersAnimations.Controller.State::Editor_Tabs1
	int32_t ___Editor_Tabs1_34;
	// System.Int32 MalbersAnimations.Controller.State::<UniqueID>k__BackingField
	int32_t ___U3CUniqueIDU3Ek__BackingField_35;
	// MalbersAnimations.Controller.OnEnterExitState MalbersAnimations.Controller.State::EnterExitEvent
	OnEnterExitState_t4F817B07AC81B44661C3CF4EFA7B31A276DB782F* ___EnterExitEvent_36;
	// System.Int32 MalbersAnimations.Controller.State::<MainTagHash>k__BackingField
	int32_t ___U3CMainTagHashU3Ek__BackingField_37;
	// System.Int32 MalbersAnimations.Controller.State::<ExitTagHash>k__BackingField
	int32_t ___U3CExitTagHashU3Ek__BackingField_38;
	// System.Int32 MalbersAnimations.Controller.State::<EnterTagHash>k__BackingField
	int32_t ___U3CEnterTagHashU3Ek__BackingField_39;
	// System.Single MalbersAnimations.Controller.State::<CurrentExitTime>k__BackingField
	float ___U3CCurrentExitTimeU3Ek__BackingField_40;
	// System.Single MalbersAnimations.Controller.State::<CurrentEnterTime>k__BackingField
	float ___U3CCurrentEnterTimeU3Ek__BackingField_41;
	// System.Boolean MalbersAnimations.Controller.State::<CanExit>k__BackingField
	bool ___U3CCanExitU3Ek__BackingField_42;
	// System.Boolean MalbersAnimations.Controller.State::<InputValue>k__BackingField
	bool ___U3CInputValueU3Ek__BackingField_43;
	// System.Boolean MalbersAnimations.Controller.State::<ExitInputValue>k__BackingField
	bool ___U3CExitInputValueU3Ek__BackingField_44;
	// System.Boolean MalbersAnimations.Controller.State::<IsSleepFromState>k__BackingField
	bool ___U3CIsSleepFromStateU3Ek__BackingField_45;
	// System.Boolean MalbersAnimations.Controller.State::<IsSleepFromMode>k__BackingField
	bool ___U3CIsSleepFromModeU3Ek__BackingField_46;
	// System.Boolean MalbersAnimations.Controller.State::<IsSleepFromStance>k__BackingField
	bool ___U3CIsSleepFromStanceU3Ek__BackingField_47;
	// System.Boolean MalbersAnimations.Controller.State::<OnQueue>k__BackingField
	bool ___U3COnQueueU3Ek__BackingField_48;
	// System.Boolean MalbersAnimations.Controller.State::<OnActiveQueue>k__BackingField
	bool ___U3COnActiveQueueU3Ek__BackingField_49;
	// System.Boolean MalbersAnimations.Controller.State::<IsPersistent>k__BackingField
	bool ___U3CIsPersistentU3Ek__BackingField_50;
	// System.Boolean MalbersAnimations.Controller.State::<IgnoreLowerStates>k__BackingField
	bool ___U3CIgnoreLowerStatesU3Ek__BackingField_51;
	// System.Boolean MalbersAnimations.Controller.State::<IsPending>k__BackingField
	bool ___U3CIsPendingU3Ek__BackingField_52;
	// System.Boolean MalbersAnimations.Controller.State::<PendingExit>k__BackingField
	bool ___U3CPendingExitU3Ek__BackingField_53;
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.MSpeedSet> MalbersAnimations.Controller.State::<SpeedSets>k__BackingField
	List_1_tC9D30204753EF29A3D6E05DDF3430E7EC1BD7934* ___U3CSpeedSetsU3Ek__BackingField_54;
	// MalbersAnimations.StateID MalbersAnimations.Controller.State::ID
	StateID_t5BAEB99D106993273AE9B9BFBC21D6DD28FC4388* ___ID_55;
	// MalbersAnimations.IAnimatorListener[] MalbersAnimations.Controller.State::listeners
	IAnimatorListenerU5BU5D_t0EB9A96037F14F9B84430DD86F435EA3C6B718D6* ___listeners_56;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// MalbersAnimations.StateID
struct StateID_t5BAEB99D106993273AE9B9BFBC21D6DD28FC4388  : public IDs_tF2E92DAC024901769C3F1DF9634CE1D628479963
{
};

// MalbersAnimations.Controller.MAnimal
struct MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MalbersAnimations.Controller.MAnimal::showPivots
	bool ___showPivots_4;
	// System.Int32 MalbersAnimations.Controller.MAnimal::PivotPosDir
	int32_t ___PivotPosDir_5;
	// System.Boolean MalbersAnimations.Controller.MAnimal::showStates
	bool ___showStates_6;
	// System.Boolean MalbersAnimations.Controller.MAnimal::ModeShowEvents
	bool ___ModeShowEvents_7;
	// System.Int32 MalbersAnimations.Controller.MAnimal::Editor_Tabs1
	int32_t ___Editor_Tabs1_8;
	// System.Int32 MalbersAnimations.Controller.MAnimal::Editor_Tabs2
	int32_t ___Editor_Tabs2_9;
	// System.Int32 MalbersAnimations.Controller.MAnimal::Editor_EventTabs
	int32_t ___Editor_EventTabs_10;
	// System.Int32 MalbersAnimations.Controller.MAnimal::SelectedMode
	int32_t ___SelectedMode_11;
	// System.Int32 MalbersAnimations.Controller.MAnimal::SelectedState
	int32_t ___SelectedState_12;
	// System.Boolean MalbersAnimations.Controller.MAnimal::debugStates
	bool ___debugStates_13;
	// System.Boolean MalbersAnimations.Controller.MAnimal::debugStances
	bool ___debugStances_14;
	// System.Boolean MalbersAnimations.Controller.MAnimal::debugModes
	bool ___debugModes_15;
	// System.Boolean MalbersAnimations.Controller.MAnimal::ShowAnimParametersOptional
	bool ___ShowAnimParametersOptional_16;
	// System.Boolean MalbersAnimations.Controller.MAnimal::ShowAnimParameters
	bool ___ShowAnimParameters_17;
	// System.Boolean MalbersAnimations.Controller.MAnimal::ShowLockInputs
	bool ___ShowLockInputs_18;
	// System.Boolean MalbersAnimations.Controller.MAnimal::ShowMisc
	bool ___ShowMisc_19;
	// System.Boolean MalbersAnimations.Controller.MAnimal::ShowStateInInspector
	bool ___ShowStateInInspector_20;
	// System.Boolean MalbersAnimations.Controller.MAnimal::debugGizmos
	bool ___debugGizmos_21;
	// System.Boolean MalbersAnimations.Controller.MAnimal::ShowMovement
	bool ___ShowMovement_22;
	// System.Boolean MalbersAnimations.Controller.MAnimal::ShowGround
	bool ___ShowGround_23;
	// System.Boolean MalbersAnimations.Controller.MAnimal::showGeneral
	bool ___showGeneral_24;
	// System.Boolean MalbersAnimations.Controller.MAnimal::showExposedVariables
	bool ___showExposedVariables_25;
	// System.Boolean MalbersAnimations.Controller.MAnimal::showReferences
	bool ___showReferences_26;
	// System.Boolean MalbersAnimations.Controller.MAnimal::showGravity
	bool ___showGravity_27;
	// System.Single MalbersAnimations.Controller.MAnimal::UpDownAdditive
	float ___UpDownAdditive_28;
	// System.Boolean MalbersAnimations.Controller.MAnimal::UsingUpDownExternal
	bool ___UsingUpDownExternal_29;
	// System.Action`2<System.Int32,System.Boolean> MalbersAnimations.Controller.MAnimal::<SetBoolParameter>k__BackingField
	Action_2_t9CCF9E751EBE923D11BC558BD78BB0B1709C733D* ___U3CSetBoolParameterU3Ek__BackingField_30;
	// System.Action`2<System.Int32,System.Single> MalbersAnimations.Controller.MAnimal::<SetFloatParameter>k__BackingField
	Action_2_t28390B369564138BA256B9D0831BFEC2F9FF1006* ___U3CSetFloatParameterU3Ek__BackingField_31;
	// System.Action`2<System.Int32,System.Int32> MalbersAnimations.Controller.MAnimal::<SetIntParameter>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CSetIntParameterU3Ek__BackingField_32;
	// System.Action`1<System.Int32> MalbersAnimations.Controller.MAnimal::<SetTriggerParameter>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CSetTriggerParameterU3Ek__BackingField_33;
	// System.Action`1<System.Int32> MalbersAnimations.Controller.MAnimal::<StateCycle>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CStateCycleU3Ek__BackingField_34;
	// System.Action`1<MalbersAnimations.Controller.MAnimal> MalbersAnimations.Controller.MAnimal::PreStateMovement
	Action_1_tC973F0AB71E0D272BD78A19DFAFC20E9570ABE3B* ___PreStateMovement_35;
	// System.Action`1<MalbersAnimations.Controller.MAnimal> MalbersAnimations.Controller.MAnimal::PostStateMovement
	Action_1_tC973F0AB71E0D272BD78A19DFAFC20E9570ABE3B* ___PostStateMovement_36;
	// System.Collections.Generic.List`1<System.Int32> MalbersAnimations.Controller.MAnimal::animatorHashParams
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___animatorHashParams_37;
	// System.Boolean MalbersAnimations.Controller.MAnimal::CloneStates
	bool ___CloneStates_40;
	// System.Boolean MalbersAnimations.Controller.MAnimal::NoParent
	bool ___NoParent_41;
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.State> MalbersAnimations.Controller.MAnimal::states
	List_1_t3FD2F34A697DB45A10609A83345E61424748B7A3* ___states_42;
	// MalbersAnimations.StateID MalbersAnimations.Controller.MAnimal::OverrideStartState
	StateID_t5BAEB99D106993273AE9B9BFBC21D6DD28FC4388* ___OverrideStartState_43;
	// MalbersAnimations.Controller.State MalbersAnimations.Controller.MAnimal::activeState
	State_tE52D2764374B1BF689A725E753EE1921828FCD09* ___activeState_44;
	// MalbersAnimations.Controller.State MalbersAnimations.Controller.MAnimal::lastState
	State_tE52D2764374B1BF689A725E753EE1921828FCD09* ___lastState_45;
	// MalbersAnimations.Controller.State MalbersAnimations.Controller.MAnimal::queueState
	State_tE52D2764374B1BF689A725E753EE1921828FCD09* ___queueState_46;
	// MalbersAnimations.Controller.State MalbersAnimations.Controller.MAnimal::Pin_State
	State_tE52D2764374B1BF689A725E753EE1921828FCD09* ___Pin_State_47;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<JustActivateState>k__BackingField
	bool ___U3CJustActivateStateU3Ek__BackingField_48;
	// MalbersAnimations.StateID MalbersAnimations.Controller.MAnimal::<ActiveStateID>k__BackingField
	StateID_t5BAEB99D106993273AE9B9BFBC21D6DD28FC4388* ___U3CActiveStateIDU3Ek__BackingField_49;
	// System.Single MalbersAnimations.Controller.MAnimal::<State_Float>k__BackingField
	float ___U3CState_FloatU3Ek__BackingField_50;
	// MalbersAnimations.Scriptables.LayerReference MalbersAnimations.Controller.MAnimal::groundLayer
	LayerReference_tA5839521CAAAF238C55F7A3EFF8BE7CCAF6057F2* ___groundLayer_51;
	// System.Single MalbersAnimations.Controller.MAnimal::height
	float ___height_52;
	// MalbersAnimations.IInputSource MalbersAnimations.Controller.MAnimal::InputSource
	RuntimeObject* ___InputSource_53;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center_54;
	// MalbersAnimations.StanceID MalbersAnimations.Controller.MAnimal::currentStance
	StanceID_t45E0B4135749765C371193C808A39129C25FAA7E* ___currentStance_55;
	// MalbersAnimations.StanceID MalbersAnimations.Controller.MAnimal::defaultStance
	StanceID_t45E0B4135749765C371193C808A39129C25FAA7E* ___defaultStance_56;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<LastStance>k__BackingField
	int32_t ___U3CLastStanceU3Ek__BackingField_57;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::AnimatorSpeed
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___AnimatorSpeed_58;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::alwaysForward
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___alwaysForward_59;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::lockForwardMovement
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___lockForwardMovement_60;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::lockHorizontalMovement
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___lockHorizontalMovement_61;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::lockUpDownMovement
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___lockUpDownMovement_62;
	// System.Single MalbersAnimations.Controller.MAnimal::<ForwardMultiplier>k__BackingField
	float ___U3CForwardMultiplierU3Ek__BackingField_63;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::MovementAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MovementAxis_64;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::MovementAxisRaw
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MovementAxisRaw_65;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::RawInputAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawInputAxis_66;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<UseRawInput>k__BackingField
	bool ___U3CUseRawInputU3Ek__BackingField_67;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::MovementAxisSmoothed
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MovementAxisSmoothed_68;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::Move_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Move_Direction_69;
	// System.Boolean MalbersAnimations.Controller.MAnimal::movementDetected
	bool ___movementDetected_70;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::useCameraInput
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___useCameraInput_71;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::useCameraUp
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___useCameraUp_72;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<DefaultCameraInput>k__BackingField
	bool ___U3CDefaultCameraInputU3Ek__BackingField_73;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<UsingMoveWithDirection>k__BackingField
	bool ___U3CUsingMoveWithDirectionU3Ek__BackingField_74;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<Rotate_at_Direction>k__BackingField
	bool ___U3CRotate_at_DirectionU3Ek__BackingField_75;
	// MalbersAnimations.Scriptables.TransformReference MalbersAnimations.Controller.MAnimal::m_MainCamera
	TransformReference_t9C1ED226B0C568C05FC73C48903E8D27B6674FE2* ___m_MainCamera_76;
	// System.Boolean MalbersAnimations.Controller.MAnimal::additivePosLog
	bool ___additivePosLog_77;
	// System.Boolean MalbersAnimations.Controller.MAnimal::additiveRotLog
	bool ___additiveRotLog_78;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::isPlayer
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___isPlayer_79;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::additivePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___additivePosition_80;
	// UnityEngine.Quaternion MalbersAnimations.Controller.MAnimal::additiveRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___additiveRotation_81;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<InertiaPositionSpeed>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CInertiaPositionSpeedU3Ek__BackingField_82;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::SmoothVertical
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___SmoothVertical_83;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::TurnMultiplier
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___TurnMultiplier_84;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::inPlaceDamp
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___inPlaceDamp_85;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<DeltaPos>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CDeltaPosU3Ek__BackingField_86;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<LastPos>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLastPosU3Ek__BackingField_87;
	// System.Single MalbersAnimations.Controller.MAnimal::<DeltaAngle>k__BackingField
	float ___U3CDeltaAngleU3Ek__BackingField_88;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<PitchDirection>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPitchDirectionU3Ek__BackingField_89;
	// System.Single MalbersAnimations.Controller.MAnimal::<PitchAngle>k__BackingField
	float ___U3CPitchAngleU3Ek__BackingField_90;
	// System.Single MalbersAnimations.Controller.MAnimal::<Bank>k__BackingField
	float ___U3CBankU3Ek__BackingField_91;
	// System.Single MalbersAnimations.Controller.MAnimal::<DeltaUpDown>k__BackingField
	float ___U3CDeltaUpDownU3Ek__BackingField_92;
	// System.Single MalbersAnimations.Controller.MAnimal::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_93;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::AlignPosLerp
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___AlignPosLerp_94;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::AlignPosDelta
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___AlignPosDelta_95;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::AlignRotDelta
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___AlignRotDelta_96;
	// System.Single MalbersAnimations.Controller.MAnimal::<AlignPosLerpDelta>k__BackingField
	float ___U3CAlignPosLerpDeltaU3Ek__BackingField_97;
	// System.Single MalbersAnimations.Controller.MAnimal::<AlignRotLerpDelta>k__BackingField
	float ___U3CAlignRotLerpDeltaU3Ek__BackingField_98;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::AlignRotLerp
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___AlignRotLerp_99;
	// MalbersAnimations.Scriptables.IntReference MalbersAnimations.Controller.MAnimal::AlignLoop
	IntReference_t926DE734A982323E09DB8C090F35A4D03D038311* ___AlignLoop_100;
	// MalbersAnimations.Scriptables.StringReference MalbersAnimations.Controller.MAnimal::DebrisTag
	StringReference_tEC87164887B832EB6279AA08100F339DAC1F2A7C* ___DebrisTag_101;
	// System.Single MalbersAnimations.Controller.MAnimal::maxAngleSlope
	float ___maxAngleSlope_102;
	// System.Single MalbersAnimations.Controller.MAnimal::<MainPivotSlope>k__BackingField
	float ___U3CMainPivotSlopeU3Ek__BackingField_103;
	// UnityEngine.Transform MalbersAnimations.Controller.MAnimal::Rotator
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Rotator_104;
	// UnityEngine.Transform MalbersAnimations.Controller.MAnimal::RootBone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RootBone_105;
	// System.Single MalbersAnimations.Controller.MAnimal::<HorizontalSpeed>k__BackingField
	float ___U3CHorizontalSpeedU3Ek__BackingField_106;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<HorizontalVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CHorizontalVelocityU3Ek__BackingField_107;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<SurfaceNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CSurfaceNormalU3Ek__BackingField_108;
	// System.Single MalbersAnimations.Controller.MAnimal::<TerrainSlope>k__BackingField
	float ___U3CTerrainSlopeU3Ek__BackingField_109;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::grounded
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___grounded_110;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<ExternalForce>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CExternalForceU3Ek__BackingField_111;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<CurrentExternalForce>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCurrentExternalForceU3Ek__BackingField_112;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<LocalForce>k__BackingField
	bool ___U3CLocalForceU3Ek__BackingField_113;
	// System.Single MalbersAnimations.Controller.MAnimal::<ExternalForceAcel>k__BackingField
	float ___U3CExternalForceAcelU3Ek__BackingField_114;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<ExternalForceAirControl>k__BackingField
	bool ___U3CExternalForceAirControlU3Ek__BackingField_115;
	// UnityEngine.Animator MalbersAnimations.Controller.MAnimal::Anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___Anim_116;
	// UnityEngine.Rigidbody MalbersAnimations.Controller.MAnimal::RB
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___RB_117;
	// MalbersAnimations.Scriptables.IntReference MalbersAnimations.Controller.MAnimal::StartWithMode
	IntReference_t926DE734A982323E09DB8C090F35A4D03D038311* ___StartWithMode_118;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<ModeStatus>k__BackingField
	int32_t ___U3CModeStatusU3Ek__BackingField_119;
	// System.Single MalbersAnimations.Controller.MAnimal::<ModePower>k__BackingField
	float ___U3CModePowerU3Ek__BackingField_120;
	// MalbersAnimations.Controller.Mode MalbersAnimations.Controller.MAnimal::activeMode
	Mode_tC825D7DFDB680D0101D86627855BE6D4D6288D3D* ___activeMode_121;
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.Mode> MalbersAnimations.Controller.MAnimal::modes
	List_1_t0742ED66EE6E8A854CCFD2B651BAB25EE4EB114C* ___modes_122;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<IsPreparingMode>k__BackingField
	bool ___U3CIsPreparingModeU3Ek__BackingField_123;
	// MalbersAnimations.Controller.Zone MalbersAnimations.Controller.MAnimal::<Zone>k__BackingField
	Zone_t73A276760D210C20C04B437C96B7999E0951F567* ___U3CZoneU3Ek__BackingField_124;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<LastModeID>k__BackingField
	int32_t ___U3CLastModeIDU3Ek__BackingField_125;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<LastAbilityIndex>k__BackingField
	int32_t ___U3CLastAbilityIndexU3Ek__BackingField_126;
	// System.Int32 MalbersAnimations.Controller.MAnimal::m_ModeIDAbility
	int32_t ___m_ModeIDAbility_127;
	// System.Single MalbersAnimations.Controller.MAnimal::<ModeTime>k__BackingField
	float ___U3CModeTimeU3Ek__BackingField_128;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<ActiveModeID>k__BackingField
	int32_t ___U3CActiveModeIDU3Ek__BackingField_129;
	// MalbersAnimations.Controller.Mode MalbersAnimations.Controller.MAnimal::<Pin_Mode>k__BackingField
	Mode_tC825D7DFDB680D0101D86627855BE6D4D6288D3D* ___U3CPin_ModeU3Ek__BackingField_130;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::sleep
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___sleep_131;
	// MalbersAnimations.Events.BoolEvent MalbersAnimations.Controller.MAnimal::OnStrafe
	BoolEvent_t2EA824D683F19D218AE46DE9F805912599180C93* ___OnStrafe_132;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::m_strafe
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___m_strafe_133;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::m_CanStrafe
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___m_CanStrafe_134;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::m_StrafeNormalize
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___m_StrafeNormalize_135;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::m_StrafeLerp
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___m_StrafeLerp_136;
	// System.Single MalbersAnimations.Controller.MAnimal::StrafeDeltaValue
	float ___StrafeDeltaValue_137;
	// System.Single MalbersAnimations.Controller.MAnimal::HorizontalAimAngle_Raw
	float ___HorizontalAimAngle_Raw_138;
	// MalbersAnimations.Utilities.Aim MalbersAnimations.Controller.MAnimal::Aimer
	Aim_t4026CCD0187127572654CA778EF91C8CCEF8CC3C* ___Aimer_139;
	// UnityEngine.RaycastHit MalbersAnimations.Controller.MAnimal::hit_Hip
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_Hip_140;
	// UnityEngine.RaycastHit MalbersAnimations.Controller.MAnimal::hit_Chest
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_Chest_141;
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.MPivots> MalbersAnimations.Controller.MAnimal::pivots
	List_1_t326A896FB25A3AB6D807E8B81F0A6999DAD0DE5A* ___pivots_142;
	// MalbersAnimations.Controller.MPivots MalbersAnimations.Controller.MAnimal::Pivot_Hip
	MPivots_t53B188FE4AF7F2514B60582B48A8952F74450398* ___Pivot_Hip_143;
	// MalbersAnimations.Controller.MPivots MalbersAnimations.Controller.MAnimal::Pivot_Chest
	MPivots_t53B188FE4AF7F2514B60582B48A8952F74450398* ___Pivot_Chest_144;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<AlignUniqueID>k__BackingField
	int32_t ___U3CAlignUniqueIDU3Ek__BackingField_145;
	// System.Boolean MalbersAnimations.Controller.MAnimal::Has_Pivot_Hip
	bool ___Has_Pivot_Hip_146;
	// System.Boolean MalbersAnimations.Controller.MAnimal::Has_Pivot_Chest
	bool ___Has_Pivot_Chest_147;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<MainRay>k__BackingField
	bool ___U3CMainRayU3Ek__BackingField_148;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<FrontRay>k__BackingField
	bool ___U3CFrontRayU3Ek__BackingField_149;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<DeltaVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CDeltaVelocityU3Ek__BackingField_150;
	// System.Boolean MalbersAnimations.Controller.MAnimal::Starting_PivotChest
	bool ___Starting_PivotChest_151;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<TargetSpeed>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTargetSpeedU3Ek__BackingField_152;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<DesiredRBVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CDesiredRBVelocityU3Ek__BackingField_153;
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.MSpeedSet> MalbersAnimations.Controller.MAnimal::speedSets
	List_1_tC9D30204753EF29A3D6E05DDF3430E7EC1BD7934* ___speedSets_154;
	// MalbersAnimations.Controller.MSpeedSet MalbersAnimations.Controller.MAnimal::currentSpeedSet
	MSpeedSet_t8127629FDCF338AE78853F74056EA9CDE1FB214D* ___currentSpeedSet_155;
	// MalbersAnimations.Controller.MSpeedSet MalbersAnimations.Controller.MAnimal::defaultSpeedSet
	MSpeedSet_t8127629FDCF338AE78853F74056EA9CDE1FB214D* ___defaultSpeedSet_156;
	// System.Boolean MalbersAnimations.Controller.MAnimal::CustomSpeed
	bool ___CustomSpeed_157;
	// MalbersAnimations.Controller.MSpeed MalbersAnimations.Controller.MAnimal::currentSpeedModifier
	MSpeed_t00CCB6AAA914287B7EFD397906472914DC557283 ___currentSpeedModifier_158;
	// MalbersAnimations.Controller.MSpeed MalbersAnimations.Controller.MAnimal::SprintSpeed
	MSpeed_t00CCB6AAA914287B7EFD397906472914DC557283 ___SprintSpeed_159;
	// System.Int32 MalbersAnimations.Controller.MAnimal::speedIndex
	int32_t ___speedIndex_160;
	// System.Boolean MalbersAnimations.Controller.MAnimal::JustChangedSpeedSet
	bool ___JustChangedSpeedSet_161;
	// MalbersAnimations.Controller.OnEnterExitSpeed MalbersAnimations.Controller.MAnimal::OldEnterExitSpeed
	OnEnterExitSpeed_t87ACBCC06EF2AD2DF349EA0B3F89C8A6D3011EF6* ___OldEnterExitSpeed_162;
	// System.Single MalbersAnimations.Controller.MAnimal::<SpeedMultiplier>k__BackingField
	float ___U3CSpeedMultiplierU3Ek__BackingField_163;
	// System.Boolean MalbersAnimations.Controller.MAnimal::sprint
	bool ___sprint_164;
	// System.Boolean MalbersAnimations.Controller.MAnimal::realSprint
	bool ___realSprint_165;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<CurrentCycle>k__BackingField
	int32_t ___U3CCurrentCycleU3Ek__BackingField_166;
	// MalbersAnimations.Scriptables.Vector3Reference MalbersAnimations.Controller.MAnimal::m_gravityDir
	Vector3Reference_tD249D2241A1288A19BE18D63755BB89E4410CB38* ___m_gravityDir_167;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::m_gravityPower
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___m_gravityPower_168;
	// MalbersAnimations.Scriptables.IntReference MalbersAnimations.Controller.MAnimal::m_gravityTime
	IntReference_t926DE734A982323E09DB8C090F35A4D03D038311* ___m_gravityTime_169;
	// MalbersAnimations.Scriptables.IntReference MalbersAnimations.Controller.MAnimal::m_gravityTimeLimit
	IntReference_t926DE734A982323E09DB8C090F35A4D03D038311* ___m_gravityTimeLimit_170;
	// System.Single MalbersAnimations.Controller.MAnimal::<GravityMultiplier>k__BackingField
	float ___U3CGravityMultiplierU3Ek__BackingField_171;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<GravityTime>k__BackingField
	int32_t ___U3CGravityTimeU3Ek__BackingField_172;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::<GravityStoredVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGravityStoredVelocityU3Ek__BackingField_173;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::ground_Changes_Gravity
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___ground_Changes_Gravity_174;
	// System.Single MalbersAnimations.Controller.MAnimal::TurnLimit
	float ___TurnLimit_175;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::rootMotion
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___rootMotion_176;
	// MalbersAnimations.Scriptables.FloatReference MalbersAnimations.Controller.MAnimal::rayCastRadius
	FloatReference_t36A033DFAD2E077DECB1CBC04961B9058F67BBBB* ___rayCastRadius_177;
	// MalbersAnimations.Scriptables.IntReference MalbersAnimations.Controller.MAnimal::animalType
	IntReference_t926DE734A982323E09DB8C090F35A4D03D038311* ___animalType_178;
	// System.Boolean MalbersAnimations.Controller.MAnimal::useAdditivePos
	bool ___useAdditivePos_179;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<UseAdditiveRot>k__BackingField
	bool ___U3CUseAdditiveRotU3Ek__BackingField_180;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<UseSprintState>k__BackingField
	bool ___U3CUseSprintStateU3Ek__BackingField_181;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<UseCustomAlign>k__BackingField
	bool ___U3CUseCustomAlignU3Ek__BackingField_182;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<FreeMovement>k__BackingField
	bool ___U3CFreeMovementU3Ek__BackingField_183;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::DeltaRootMotion
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaRootMotion_184;
	// System.Boolean MalbersAnimations.Controller.MAnimal::useGravity
	bool ___useGravity_185;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::LockMovementAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LockMovementAxis_186;
	// System.Boolean MalbersAnimations.Controller.MAnimal::useOrientToGround
	bool ___useOrientToGround_187;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::m_OrientToGround
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___m_OrientToGround_188;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::lockInput
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___lockInput_189;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::lockMovement
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___lockMovement_190;
	// MalbersAnimations.Scriptables.BoolReference MalbersAnimations.Controller.MAnimal::useSprintGlobal
	BoolReference_t13D1B46B28E90B24FD80D7958B5AF518771AAD71* ___useSprintGlobal_191;
	// UnityEngine.AnimatorStateInfo MalbersAnimations.Controller.MAnimal::m_CurrentState
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_CurrentState_192;
	// UnityEngine.AnimatorStateInfo MalbersAnimations.Controller.MAnimal::m_NextState
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_NextState_193;
	// UnityEngine.AnimatorStateInfo MalbersAnimations.Controller.MAnimal::m_PreviousCurrentState
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_PreviousCurrentState_194;
	// UnityEngine.AnimatorStateInfo MalbersAnimations.Controller.MAnimal::m_PreviousNextState
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_PreviousNextState_195;
	// System.Boolean MalbersAnimations.Controller.MAnimal::m_IsAnimatorTransitioning
	bool ___m_IsAnimatorTransitioning_196;
	// System.Boolean MalbersAnimations.Controller.MAnimal::FirstAnimatorTransition
	bool ___FirstAnimatorTransition_197;
	// System.Boolean MalbersAnimations.Controller.MAnimal::m_PreviousIsAnimatorTransitioning
	bool ___m_PreviousIsAnimatorTransitioning_198;
	// UnityEngine.AnimatorStateInfo MalbersAnimations.Controller.MAnimal::<AnimState>k__BackingField
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___U3CAnimStateU3Ek__BackingField_199;
	// System.Int32 MalbersAnimations.Controller.MAnimal::currentAnimTag
	int32_t ___currentAnimTag_200;
	// UnityEngine.Transform MalbersAnimations.Controller.MAnimal::platform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___platform_201;
	// UnityEngine.Vector3 MalbersAnimations.Controller.MAnimal::platform_LastPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___platform_LastPos_202;
	// UnityEngine.Quaternion MalbersAnimations.Controller.MAnimal::platform_Rot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___platform_Rot_203;
	// System.Boolean MalbersAnimations.Controller.MAnimal::DisablePositionRotation
	bool ___DisablePositionRotation_204;
	// System.Collections.Generic.List`1<MalbersAnimations.IMDamager> MalbersAnimations.Controller.MAnimal::Attack_Triggers
	List_1_t87500F7636858C795C7D6FDB658513CA3E250FE6* ___Attack_Triggers_205;
	// System.Collections.Generic.List`1<UnityEngine.Collider> MalbersAnimations.Controller.MAnimal::colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders_206;
	// System.Single MalbersAnimations.Controller.MAnimal::<StateTime>k__BackingField
	float ___U3CStateTimeU3Ek__BackingField_207;
	// MalbersAnimations.Events.IntEvent MalbersAnimations.Controller.MAnimal::OnAnimationChange
	IntEvent_tC9404A557120C151E20B6DE339F6CEDDE2440D4B* ___OnAnimationChange_208;
	// MalbersAnimations.Events.BoolEvent MalbersAnimations.Controller.MAnimal::OnInputLocked
	BoolEvent_t2EA824D683F19D218AE46DE9F805912599180C93* ___OnInputLocked_209;
	// MalbersAnimations.Events.BoolEvent MalbersAnimations.Controller.MAnimal::OnMovementLocked
	BoolEvent_t2EA824D683F19D218AE46DE9F805912599180C93* ___OnMovementLocked_210;
	// MalbersAnimations.Events.BoolEvent MalbersAnimations.Controller.MAnimal::OnSprintEnabled
	BoolEvent_t2EA824D683F19D218AE46DE9F805912599180C93* ___OnSprintEnabled_211;
	// MalbersAnimations.Events.BoolEvent MalbersAnimations.Controller.MAnimal::OnGrounded
	BoolEvent_t2EA824D683F19D218AE46DE9F805912599180C93* ___OnGrounded_212;
	// MalbersAnimations.Events.BoolEvent MalbersAnimations.Controller.MAnimal::OnMovementDetected
	BoolEvent_t2EA824D683F19D218AE46DE9F805912599180C93* ___OnMovementDetected_213;
	// MalbersAnimations.Events.IntEvent MalbersAnimations.Controller.MAnimal::OnStateActivate
	IntEvent_tC9404A557120C151E20B6DE339F6CEDDE2440D4B* ___OnStateActivate_214;
	// MalbersAnimations.Events.IntEvent MalbersAnimations.Controller.MAnimal::OnStateChange
	IntEvent_tC9404A557120C151E20B6DE339F6CEDDE2440D4B* ___OnStateChange_215;
	// MalbersAnimations.Events.Int2Event MalbersAnimations.Controller.MAnimal::OnModeStart
	Int2Event_t444E50C50E2C577A422A5A3127E389CAF25E250B* ___OnModeStart_216;
	// MalbersAnimations.Events.Int2Event MalbersAnimations.Controller.MAnimal::OnModeEnd
	Int2Event_t444E50C50E2C577A422A5A3127E389CAF25E250B* ___OnModeEnd_217;
	// MalbersAnimations.Events.IntEvent MalbersAnimations.Controller.MAnimal::OnStanceChange
	IntEvent_tC9404A557120C151E20B6DE339F6CEDDE2440D4B* ___OnStanceChange_218;
	// MalbersAnimations.Controller.SpeedModifierEvent MalbersAnimations.Controller.MAnimal::OnSpeedChange
	SpeedModifierEvent_t2B79EB14FEFC04963FDD359E98E72DE3F1DEBD5C* ___OnSpeedChange_219;
	// MalbersAnimations.Events.Vector3Event MalbersAnimations.Controller.MAnimal::OnTeleport
	Vector3Event_tF7314BFDA87D86E61CCB0097C36478F3D0CB7DC1* ___OnTeleport_220;
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.OnEnterExitState> MalbersAnimations.Controller.MAnimal::OnEnterExitStates
	List_1_tBB537273CE6E97B1A4157EC2206489A4C574EC9C* ___OnEnterExitStates_221;
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.OnEnterExitStance> MalbersAnimations.Controller.MAnimal::OnEnterExitStances
	List_1_t07F72E247FD0A574FDA37D3BDDAFA19D60BB6AA9* ___OnEnterExitStances_222;
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.OnEnterExitSpeed> MalbersAnimations.Controller.MAnimal::OnEnterExitSpeeds
	List_1_tEA982D0CD812867C79A3DA91D4B3987DBAFB537C* ___OnEnterExitSpeeds_223;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<RandomID>k__BackingField
	int32_t ___U3CRandomIDU3Ek__BackingField_224;
	// System.Int32 MalbersAnimations.Controller.MAnimal::<RandomPriority>k__BackingField
	int32_t ___U3CRandomPriorityU3Ek__BackingField_225;
	// System.Boolean MalbersAnimations.Controller.MAnimal::<Randomizer>k__BackingField
	bool ___U3CRandomizerU3Ek__BackingField_226;
	// System.String MalbersAnimations.Controller.MAnimal::m_Vertical
	String_t* ___m_Vertical_227;
	// System.String MalbersAnimations.Controller.MAnimal::m_Horizontal
	String_t* ___m_Horizontal_228;
	// System.String MalbersAnimations.Controller.MAnimal::m_UpDown
	String_t* ___m_UpDown_229;
	// System.String MalbersAnimations.Controller.MAnimal::m_DeltaUpDown
	String_t* ___m_DeltaUpDown_230;
	// System.String MalbersAnimations.Controller.MAnimal::m_Grounded
	String_t* ___m_Grounded_231;
	// System.String MalbersAnimations.Controller.MAnimal::m_Movement
	String_t* ___m_Movement_232;
	// System.String MalbersAnimations.Controller.MAnimal::m_State
	String_t* ___m_State_233;
	// System.String MalbersAnimations.Controller.MAnimal::m_StateOn
	String_t* ___m_StateOn_234;
	// System.String MalbersAnimations.Controller.MAnimal::m_ModeOn
	String_t* ___m_ModeOn_235;
	// System.String MalbersAnimations.Controller.MAnimal::m_StateStatus
	String_t* ___m_StateStatus_236;
	// System.String MalbersAnimations.Controller.MAnimal::m_StateExitStatus
	String_t* ___m_StateExitStatus_237;
	// System.String MalbersAnimations.Controller.MAnimal::m_StateFloat
	String_t* ___m_StateFloat_238;
	// System.String MalbersAnimations.Controller.MAnimal::m_LastState
	String_t* ___m_LastState_239;
	// System.String MalbersAnimations.Controller.MAnimal::m_StateTime
	String_t* ___m_StateTime_240;
	// System.String MalbersAnimations.Controller.MAnimal::m_SpeedMultiplier
	String_t* ___m_SpeedMultiplier_241;
	// System.String MalbersAnimations.Controller.MAnimal::m_Mode
	String_t* ___m_Mode_242;
	// System.String MalbersAnimations.Controller.MAnimal::m_ModeStatus
	String_t* ___m_ModeStatus_243;
	// System.String MalbersAnimations.Controller.MAnimal::m_ModePower
	String_t* ___m_ModePower_244;
	// System.String MalbersAnimations.Controller.MAnimal::m_Sprint
	String_t* ___m_Sprint_245;
	// System.String MalbersAnimations.Controller.MAnimal::m_Stance
	String_t* ___m_Stance_246;
	// System.String MalbersAnimations.Controller.MAnimal::m_LastStance
	String_t* ___m_LastStance_247;
	// System.String MalbersAnimations.Controller.MAnimal::m_Slope
	String_t* ___m_Slope_248;
	// System.String MalbersAnimations.Controller.MAnimal::m_Type
	String_t* ___m_Type_249;
	// System.String MalbersAnimations.Controller.MAnimal::m_Random
	String_t* ___m_Random_250;
	// System.String MalbersAnimations.Controller.MAnimal::m_DeltaAngle
	String_t* ___m_DeltaAngle_251;
	// System.String MalbersAnimations.Controller.MAnimal::m_Strafe
	String_t* ___m_Strafe_252;
	// System.String MalbersAnimations.Controller.MAnimal::m_strafeAngle
	String_t* ___m_strafeAngle_253;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Vertical
	int32_t ___hash_Vertical_254;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Horizontal
	int32_t ___hash_Horizontal_255;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_UpDown
	int32_t ___hash_UpDown_256;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_DeltaUpDown
	int32_t ___hash_DeltaUpDown_257;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Movement
	int32_t ___hash_Movement_258;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Grounded
	int32_t ___hash_Grounded_259;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_SpeedMultiplier
	int32_t ___hash_SpeedMultiplier_260;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_DeltaAngle
	int32_t ___hash_DeltaAngle_261;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_State
	int32_t ___hash_State_262;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_StateOn
	int32_t ___hash_StateOn_263;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_StateEnterStatus
	int32_t ___hash_StateEnterStatus_264;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_StateExitStatus
	int32_t ___hash_StateExitStatus_265;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_StateFloat
	int32_t ___hash_StateFloat_266;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_StateTime
	int32_t ___hash_StateTime_267;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_LastState
	int32_t ___hash_LastState_268;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Mode
	int32_t ___hash_Mode_269;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_ModeOn
	int32_t ___hash_ModeOn_270;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_ModeStatus
	int32_t ___hash_ModeStatus_271;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_ModePower
	int32_t ___hash_ModePower_272;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Stance
	int32_t ___hash_Stance_273;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_LastStance
	int32_t ___hash_LastStance_274;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Slope
	int32_t ___hash_Slope_275;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Sprint
	int32_t ___hash_Sprint_276;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Random
	int32_t ___hash_Random_277;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_Strafe
	int32_t ___hash_Strafe_278;
	// System.Int32 MalbersAnimations.Controller.MAnimal::hash_StrafeAngle
	int32_t ___hash_StrafeAngle_279;
};

struct MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB_StaticFields
{
	// System.Collections.Generic.List`1<MalbersAnimations.Controller.MAnimal> MalbersAnimations.Controller.MAnimal::Animals
	List_1_t9A03E63888D540FC2AA707399D84AB5792C59BBA* ___Animals_38;
	// MalbersAnimations.Controller.MAnimal MalbersAnimations.Controller.MAnimal::MainAnimal
	MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* ___MainAnimal_39;
};

// MalbersAnimations.Controller.AI.MAnimalAIControl
struct MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AI.NavMeshAgent MalbersAnimations.Controller.AI.MAnimalAIControl::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_4;
	// MalbersAnimations.Controller.MAnimal MalbersAnimations.Controller.AI.MAnimalAIControl::animal
	MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* ___animal_5;
	// MalbersAnimations.IInputSource MalbersAnimations.Controller.AI.MAnimalAIControl::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// MalbersAnimations.IInteractor MalbersAnimations.Controller.AI.MAnimalAIControl::<Interactor>k__BackingField
	RuntimeObject* ___U3CInteractorU3Ek__BackingField_7;
	// UnityEngine.Vector3 MalbersAnimations.Controller.AI.MAnimalAIControl::TargetLastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetLastPosition_8;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::<RemainingDistance>k__BackingField
	float ___U3CRemainingDistanceU3Ek__BackingField_9;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::<MinRemainingDistance>k__BackingField
	float ___U3CMinRemainingDistanceU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<MalbersAnimations.StateID> MalbersAnimations.Controller.AI.MAnimalAIControl::StopAgentOn
	List_1_t0B72DF959EC8AE5E422C664170641D6069E3EA27* ___StopAgentOn_11;
	// UnityEngine.Vector3 MalbersAnimations.Controller.AI.MAnimalAIControl::<AIDirection>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CAIDirectionU3Ek__BackingField_12;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<InOffMeshLink>k__BackingField
	bool ___U3CInOffMeshLinkU3Ek__BackingField_13;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<StateIsBlockingAgent>k__BackingField
	bool ___U3CStateIsBlockingAgentU3Ek__BackingField_14;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<CanFly>k__BackingField
	bool ___U3CCanFlyU3Ek__BackingField_15;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<HasArrived>k__BackingField
	bool ___U3CHasArrivedU3Ek__BackingField_16;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<UpdateDestinationPosition>k__BackingField
	bool ___U3CUpdateDestinationPositionU3Ek__BackingField_17;
	// UnityEngine.Vector3 MalbersAnimations.Controller.AI.MAnimalAIControl::<DestinationPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CDestinationPositionU3Ek__BackingField_18;
	// System.Collections.IEnumerator MalbersAnimations.Controller.AI.MAnimalAIControl::I_WaitToNextTarget
	RuntimeObject* ___I_WaitToNextTarget_19;
	// System.Collections.IEnumerator MalbersAnimations.Controller.AI.MAnimalAIControl::IFreeMoveOffMesh
	RuntimeObject* ___IFreeMoveOffMesh_20;
	// System.Collections.IEnumerator MalbersAnimations.Controller.AI.MAnimalAIControl::IClimbOffMesh
	RuntimeObject* ___IClimbOffMesh_21;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::UpdateAI
	float ___UpdateAI_22;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::CurrentTime
	float ___CurrentTime_23;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::stoppingDistance
	float ___stoppingDistance_24;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::PointStoppingDistance
	float ___PointStoppingDistance_25;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::slowingDistance
	float ___slowingDistance_26;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::OffMeshAlignment
	float ___OffMeshAlignment_27;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::TurnAngle
	float ___TurnAngle_28;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::LookAtOffset
	float ___LookAtOffset_29;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::slowingLimit
	float ___slowingLimit_30;
	// UnityEngine.Transform MalbersAnimations.Controller.AI.MAnimalAIControl::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_31;
	// UnityEngine.Transform MalbersAnimations.Controller.AI.MAnimalAIControl::nextTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___nextTarget_32;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<AutoNextTarget>k__BackingField
	bool ___U3CAutoNextTargetU3Ek__BackingField_33;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<LookAtTargetOnArrival>k__BackingField
	bool ___U3CLookAtTargetOnArrivalU3Ek__BackingField_34;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::debug
	bool ___debug_35;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::debugGizmos
	bool ___debugGizmos_36;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::debugStatus
	bool ___debugStatus_37;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<FreeMove>k__BackingField
	bool ___U3CFreeMoveU3Ek__BackingField_38;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::currentStoppingDistance
	float ___currentStoppingDistance_39;
	// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::<CurrentSlowingDistance>k__BackingField
	float ___U3CCurrentSlowingDistanceU3Ek__BackingField_40;
	// MalbersAnimations.IWayPoint MalbersAnimations.Controller.AI.MAnimalAIControl::<IsWayPoint>k__BackingField
	RuntimeObject* ___U3CIsWayPointU3Ek__BackingField_41;
	// MalbersAnimations.IAITarget MalbersAnimations.Controller.AI.MAnimalAIControl::<IsAITarget>k__BackingField
	RuntimeObject* ___U3CIsAITargetU3Ek__BackingField_42;
	// MalbersAnimations.IInteractable MalbersAnimations.Controller.AI.MAnimalAIControl::<IsTargetInteractable>k__BackingField
	RuntimeObject* ___U3CIsTargetInteractableU3Ek__BackingField_43;
	// MalbersAnimations.Events.Vector3Event MalbersAnimations.Controller.AI.MAnimalAIControl::OnTargetPositionArrived
	Vector3Event_tF7314BFDA87D86E61CCB0097C36478F3D0CB7DC1* ___OnTargetPositionArrived_44;
	// MalbersAnimations.Events.TransformEvent MalbersAnimations.Controller.AI.MAnimalAIControl::OnTargetArrived
	TransformEvent_tBB055202B7CA0C563EDFDE8636F076E92A04675C* ___OnTargetArrived_45;
	// MalbersAnimations.Events.TransformEvent MalbersAnimations.Controller.AI.MAnimalAIControl::OnTargetSet
	TransformEvent_tBB055202B7CA0C563EDFDE8636F076E92A04675C* ___OnTargetSet_46;
	// UnityEngine.Events.UnityEvent MalbersAnimations.Controller.AI.MAnimalAIControl::OnEnabled
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnEnabled_47;
	// UnityEngine.Events.UnityEvent MalbersAnimations.Controller.AI.MAnimalAIControl::OnDisabled
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnDisabled_48;
	// UnityEngine.Transform MalbersAnimations.Controller.AI.MAnimalAIControl::AgentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___AgentTransform_49;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<TargetIsMoving>k__BackingField
	bool ___U3CTargetIsMovingU3Ek__BackingField_50;
	// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl::<IsWaiting>k__BackingField
	bool ___U3CIsWaitingU3Ek__BackingField_51;
	// UnityEngine.Vector3 MalbersAnimations.Controller.AI.MAnimalAIControl::<LastOffMeshDestination>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLastOffMeshDestinationU3Ek__BackingField_52;
	// UnityEngine.Vector3 MalbersAnimations.Controller.AI.MAnimalAIControl::<NullVector>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNullVectorU3Ek__BackingField_53;
	// UnityEngine.Vector3 MalbersAnimations.Controller.AI.MAnimalAIControl::AgentPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AgentPosition_54;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl::set_AIDirection(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MAnimalAIControl_set_AIDirection_m282C939303AE5C8B4F710B8718E1F7B3CBB0F24F_inline (MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl::set_InOffMeshLink(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MAnimalAIControl_set_InOffMeshLink_mF9B7F8EC72364C401001BA4E03CC532F6CCE9B34_inline (MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::get_SlowMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MAnimalAIControl_get_SlowMultiplier_m5A847E69D44C86FCA90EC33A1231E526B86863AA (MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// MalbersAnimations.Controller.State MalbersAnimations.Controller.MAnimal::get_ActiveState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR State_tE52D2764374B1BF689A725E753EE1921828FCD09* MAnimal_get_ActiveState_m76903D34E2AFDB73CD8870CA79880FE8AAE59237_inline (MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* __this, const RuntimeMethod* method) ;
// System.Boolean MalbersAnimations.Controller.State::AllowExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_AllowExit_m7547172E8FCA3513407D0C2876337E9843A8EEB5 (State_tE52D2764374B1BF689A725E753EE1921828FCD09* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// System.Int32 MalbersAnimations.IDs::op_Implicit(MalbersAnimations.IDs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDs_op_Implicit_m5C0349F6AE32E66982FAAD5BB45A50B4FC20451C (IDs_tF2E92DAC024901769C3F1DF9634CE1D628479963* ___reference0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CC_WaitToNextTargetU3Ed__220__ctor_m33B2165CB955674004088EBB8E3A1216A344B92B (U3CC_WaitToNextTargetU3Ed__220_tE6A2A312716FF21693279DBDEE66ED805A7993D8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CC_WaitToNextTargetU3Ed__220_System_IDisposable_Dispose_m8558034CC783572DDFBBDF559A1279066A274547 (U3CC_WaitToNextTargetU3Ed__220_tE6A2A312716FF21693279DBDEE66ED805A7993D8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CC_WaitToNextTargetU3Ed__220_MoveNext_m207E5DF2D741F93762DF565BC9A1E85A1B1C9C7D (U3CC_WaitToNextTargetU3Ed__220_tE6A2A312716FF21693279DBDEE66ED805A7993D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2559FDA572E465CE1787B7DF0373049916CD7AB2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_00bb;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// IsWaiting = true;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_3 = V_1;
		NullCheck(L_3);
		VirtualActionInvoker1< bool >::Invoke(82 /* System.Void MalbersAnimations.Controller.AI.MAnimalAIControl::set_IsWaiting(System.Boolean) */, L_3, (bool)1);
		// if (time > 0)
		float L_4 = __this->___time_3;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_00c2;
		}
	}
	{
		// yield return null; //SUUUUUUUUUPER  IMPORTANT!!!!!!!!!
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debuging($"<color=white> is waiting <B>{time:F2}</B> seconds to go to <B>[{NextTarget.name}]</B> ? {DestinationPosition} </color>");
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_5 = V_1;
		float L_6 = __this->___time_3;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___NextTarget_4;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_11 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(66 /* UnityEngine.Vector3 MalbersAnimations.Controller.AI.MAnimalAIControl::get_DestinationPosition() */, L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		RuntimeObject* L_14 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral2559FDA572E465CE1787B7DF0373049916CD7AB2, L_8, L_10, L_14, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(144 /* System.Void MalbersAnimations.Controller.AI.MAnimalAIControl::Debuging(System.String) */, L_5, L_15);
		// animal.Move(AIDirection = Vector3.zero); //Stop the Animal
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_16 = V_1;
		NullCheck(L_16);
		MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* L_17 = L_16->___animal_5;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19;
		V_2 = L_20;
		NullCheck(L_18);
		MAnimalAIControl_set_AIDirection_m282C939303AE5C8B4F710B8718E1F7B3CBB0F24F_inline(L_18, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		NullCheck(L_17);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(117 /* System.Void MalbersAnimations.Controller.MAnimal::Move(UnityEngine.Vector3) */, L_17, L_21);
		// yield return new WaitForSeconds(time);
		float L_22 = __this->___time_3;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, L_22, NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00bb:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c2:
	{
		// SetTarget(NextTarget);
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_24 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___NextTarget_4;
		NullCheck(L_24);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(121 /* System.Void MalbersAnimations.Controller.AI.MAnimalAIControl::SetTarget(UnityEngine.Transform) */, L_24, L_25);
		// }
		return (bool)0;
	}
}
// System.Object MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CC_WaitToNextTargetU3Ed__220_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m57AF1D87946C2C7C96EB02C3FEA162113B895F6D (U3CC_WaitToNextTargetU3Ed__220_tE6A2A312716FF21693279DBDEE66ED805A7993D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CC_WaitToNextTargetU3Ed__220_System_Collections_IEnumerator_Reset_m6AC95C3ECA80A37C36DFBD10130BF6740D330689 (U3CC_WaitToNextTargetU3Ed__220_tE6A2A312716FF21693279DBDEE66ED805A7993D8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CC_WaitToNextTargetU3Ed__220_System_Collections_IEnumerator_Reset_m6AC95C3ECA80A37C36DFBD10130BF6740D330689_RuntimeMethod_var)));
	}
}
// System.Object MalbersAnimations.Controller.AI.MAnimalAIControl/<C_WaitToNextTarget>d__220::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CC_WaitToNextTargetU3Ed__220_System_Collections_IEnumerator_get_Current_mBFAA6E1C824D514B1D471DB16AD4B4B17648DC80 (U3CC_WaitToNextTargetU3Ed__220_tE6A2A312716FF21693279DBDEE66ED805A7993D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CC_FlyMoveOffMeshU3Ed__221__ctor_m170211BE1477A48E966F6AD53C7EE7381329BB22 (U3CC_FlyMoveOffMeshU3Ed__221_t813975FEF260B67984894AB8E25F201B983ECA48* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CC_FlyMoveOffMeshU3Ed__221_System_IDisposable_Dispose_mAA206A6E325D9688BBF2EF6A4609400030E043DD (U3CC_FlyMoveOffMeshU3Ed__221_t813975FEF260B67984894AB8E25F201B983ECA48* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CC_FlyMoveOffMeshU3Ed__221_MoveNext_m6143A729F84E901246DAA1B0B9D702BCDC0E1EC8 (U3CC_FlyMoveOffMeshU3Ed__221_t813975FEF260B67984894AB8E25F201B983ECA48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9597152CFEF1A736402876DF11E349C48C0E027);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00cd;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// animal.State_Activate(StateEnum.Fly); //Set the State to Fly
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_4 = V_1;
		NullCheck(L_4);
		MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* L_5 = L_4->___animal_5;
		il2cpp_codegen_runtime_class_init_inline(StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_il2cpp_TypeInfo_var);
		int32_t L_6 = ((StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_StaticFields*)il2cpp_codegen_static_fields_for(StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_il2cpp_TypeInfo_var))->___Fly_6;
		NullCheck(L_5);
		VirtualActionInvoker1< int32_t >::Invoke(68 /* System.Void MalbersAnimations.Controller.MAnimal::State_Activate(System.Int32) */, L_5, L_6);
		// InOffMeshLink = true;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_7 = V_1;
		NullCheck(L_7);
		MAnimalAIControl_set_InOffMeshLink_mF9B7F8EC72364C401001BA4E03CC532F6CCE9B34_inline(L_7, (bool)1, NULL);
		// float distance = float.MaxValue;
		__this->___U3CdistanceU3E5__2_4 = ((std::numeric_limits<float>::max)());
		goto IL_00d4;
	}

IL_0048:
	{
		// if (target == null) break;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___target_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_9)
		{
			goto IL_00e5;
		}
	}
	{
		// animal.Move((target.position - animal.transform.position).normalized * SlowMultiplier);
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_10 = V_1;
		NullCheck(L_10);
		MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* L_11 = L_10->___animal_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___target_3;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_14 = V_1;
		NullCheck(L_14);
		MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* L_15 = L_14->___animal_5;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_13, L_17, NULL);
		V_2 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_20 = V_1;
		NullCheck(L_20);
		float L_21;
		L_21 = MAnimalAIControl_get_SlowMultiplier_m5A847E69D44C86FCA90EC33A1231E526B86863AA(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_19, L_21, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(117 /* System.Void MalbersAnimations.Controller.MAnimal::Move(UnityEngine.Vector3) */, L_11, L_22);
		// distance = Vector3.Distance(animal.transform.position, target.position);
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_23 = V_1;
		NullCheck(L_23);
		MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* L_24 = L_23->___animal_5;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___target_3;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29;
		L_29 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_26, L_28, NULL);
		__this->___U3CdistanceU3E5__2_4 = L_29;
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00cd:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00d4:
	{
		// while (distance > StoppingDistance)
		float L_30 = __this->___U3CdistanceU3E5__2_4;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_31 = V_1;
		NullCheck(L_31);
		float L_32;
		L_32 = VirtualFuncInvoker0< float >::Invoke(68 /* System.Single MalbersAnimations.Controller.AI.MAnimalAIControl::get_StoppingDistance() */, L_31);
		if ((((float)L_30) > ((float)L_32)))
		{
			goto IL_0048;
		}
	}

IL_00e5:
	{
		// animal.ActiveState.AllowExit();
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_33 = V_1;
		NullCheck(L_33);
		MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* L_34 = L_33->___animal_5;
		NullCheck(L_34);
		State_tE52D2764374B1BF689A725E753EE1921828FCD09* L_35;
		L_35 = MAnimal_get_ActiveState_m76903D34E2AFDB73CD8870CA79880FE8AAE59237_inline(L_34, NULL);
		NullCheck(L_35);
		bool L_36;
		L_36 = State_AllowExit_m7547172E8FCA3513407D0C2876337E9843A8EEB5(L_35, NULL);
		// Debuging("Exit Fly State Off Mesh");
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_37 = V_1;
		NullCheck(L_37);
		VirtualActionInvoker1< String_t* >::Invoke(144 /* System.Void MalbersAnimations.Controller.AI.MAnimalAIControl::Debuging(System.String) */, L_37, _stringLiteralE9597152CFEF1A736402876DF11E349C48C0E027);
		// InOffMeshLink = false;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_38 = V_1;
		NullCheck(L_38);
		MAnimalAIControl_set_InOffMeshLink_mF9B7F8EC72364C401001BA4E03CC532F6CCE9B34_inline(L_38, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CC_FlyMoveOffMeshU3Ed__221_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m74E2AEE0F24B3CF0DA8184BD0C92EF99626FC665 (U3CC_FlyMoveOffMeshU3Ed__221_t813975FEF260B67984894AB8E25F201B983ECA48* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CC_FlyMoveOffMeshU3Ed__221_System_Collections_IEnumerator_Reset_m5B89FF125C0ECA549984F18CF0CE0295DD6B970B (U3CC_FlyMoveOffMeshU3Ed__221_t813975FEF260B67984894AB8E25F201B983ECA48* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CC_FlyMoveOffMeshU3Ed__221_System_Collections_IEnumerator_Reset_m5B89FF125C0ECA549984F18CF0CE0295DD6B970B_RuntimeMethod_var)));
	}
}
// System.Object MalbersAnimations.Controller.AI.MAnimalAIControl/<C_FlyMoveOffMesh>d__221::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CC_FlyMoveOffMeshU3Ed__221_System_Collections_IEnumerator_get_Current_mD033C2FC60240F3E9CA284718CB2F1E725FDB8C9 (U3CC_FlyMoveOffMeshU3Ed__221_t813975FEF260B67984894AB8E25F201B983ECA48* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CC_Climb_OffMeshU3Ed__222__ctor_m3709D4137489DB0F22D238814394C117C8DEFE26 (U3CC_Climb_OffMeshU3Ed__222_t45E3B9A61CD99B7320DE6FEC3156E5123DBAE641* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CC_Climb_OffMeshU3Ed__222_System_IDisposable_Dispose_m662590520F19FB3E6C46E9F9FC9C8D2990577B18 (U3CC_Climb_OffMeshU3Ed__222_t45E3B9A61CD99B7320DE6FEC3156E5123DBAE641* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CC_Climb_OffMeshU3Ed__222_MoveNext_mCBA0C313D4C11FC657AF8258C790BF7B3DC51870 (U3CC_Climb_OffMeshU3Ed__222_t45E3B9A61CD99B7320DE6FEC3156E5123DBAE641* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9717355D0891F97B0A23DEDC6C63A28C8D9CC7D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0080;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// animal.State_Activate(StateEnum.Climb); //Set the State to Climb
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_3 = V_1;
		NullCheck(L_3);
		MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* L_4 = L_3->___animal_5;
		il2cpp_codegen_runtime_class_init_inline(StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_il2cpp_TypeInfo_var);
		int32_t L_5 = ((StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_StaticFields*)il2cpp_codegen_static_fields_for(StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_il2cpp_TypeInfo_var))->___Climb_7;
		NullCheck(L_4);
		VirtualActionInvoker1< int32_t >::Invoke(68 /* System.Void MalbersAnimations.Controller.MAnimal::State_Activate(System.Int32) */, L_4, L_5);
		// InOffMeshLink = true;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_6 = V_1;
		NullCheck(L_6);
		MAnimalAIControl_set_InOffMeshLink_mF9B7F8EC72364C401001BA4E03CC532F6CCE9B34_inline(L_6, (bool)1, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ActiveAgent = false;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_7 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker1< bool >::Invoke(62 /* System.Void MalbersAnimations.Controller.AI.MAnimalAIControl::set_ActiveAgent(System.Boolean) */, L_7, (bool)0);
		goto IL_0087;
	}

IL_0060:
	{
		// animal.SetInputAxis(Vector3.forward); //Move Upwards on the Climb
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_8 = V_1;
		NullCheck(L_8);
		MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* L_9 = L_8->___animal_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(150 /* System.Void MalbersAnimations.Controller.MAnimal::SetInputAxis(UnityEngine.Vector3) */, L_9, L_10);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0080:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0087:
	{
		// while (animal.ActiveState.ID == StateEnum.Climb)
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_11 = V_1;
		NullCheck(L_11);
		MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* L_12 = L_11->___animal_5;
		NullCheck(L_12);
		State_tE52D2764374B1BF689A725E753EE1921828FCD09* L_13;
		L_13 = MAnimal_get_ActiveState_m76903D34E2AFDB73CD8870CA79880FE8AAE59237_inline(L_12, NULL);
		NullCheck(L_13);
		StateID_t5BAEB99D106993273AE9B9BFBC21D6DD28FC4388* L_14 = L_13->___ID_55;
		int32_t L_15;
		L_15 = IDs_op_Implicit_m5C0349F6AE32E66982FAAD5BB45A50B4FC20451C(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_il2cpp_TypeInfo_var);
		int32_t L_16 = ((StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_StaticFields*)il2cpp_codegen_static_fields_for(StateEnum_t4F36D923CEE8F40F618EB543079C7225BF3A7068_il2cpp_TypeInfo_var))->___Climb_7;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0060;
		}
	}
	{
		// Debuging("Exit Climb State Off Mesh");
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_17 = V_1;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(144 /* System.Void MalbersAnimations.Controller.AI.MAnimalAIControl::Debuging(System.String) */, L_17, _stringLiteralD9717355D0891F97B0A23DEDC6C63A28C8D9CC7D);
		// InOffMeshLink = false;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_18 = V_1;
		NullCheck(L_18);
		MAnimalAIControl_set_InOffMeshLink_mF9B7F8EC72364C401001BA4E03CC532F6CCE9B34_inline(L_18, (bool)0, NULL);
		// IClimbOffMesh = null;
		MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* L_19 = V_1;
		NullCheck(L_19);
		L_19->___IClimbOffMesh_21 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___IClimbOffMesh_21), (void*)(RuntimeObject*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CC_Climb_OffMeshU3Ed__222_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m76C06F992B1B8D3AA13F834148CCA5583F58BCF8 (U3CC_Climb_OffMeshU3Ed__222_t45E3B9A61CD99B7320DE6FEC3156E5123DBAE641* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CC_Climb_OffMeshU3Ed__222_System_Collections_IEnumerator_Reset_mC8DA616CB929C0FF96DB90085C3DABBC978969A3 (U3CC_Climb_OffMeshU3Ed__222_t45E3B9A61CD99B7320DE6FEC3156E5123DBAE641* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CC_Climb_OffMeshU3Ed__222_System_Collections_IEnumerator_Reset_mC8DA616CB929C0FF96DB90085C3DABBC978969A3_RuntimeMethod_var)));
	}
}
// System.Object MalbersAnimations.Controller.AI.MAnimalAIControl/<C_Climb_OffMesh>d__222::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CC_Climb_OffMeshU3Ed__222_System_Collections_IEnumerator_get_Current_m3C5A1E2EC6EE2F1E5DDE41A062E4961146F9D459 (U3CC_Climb_OffMeshU3Ed__222_t45E3B9A61CD99B7320DE6FEC3156E5123DBAE641* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MAnimalAIControl_set_AIDirection_m282C939303AE5C8B4F710B8718E1F7B3CBB0F24F_inline (MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 AIDirection  { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CAIDirectionU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MAnimalAIControl_set_InOffMeshLink_mF9B7F8EC72364C401001BA4E03CC532F6CCE9B34_inline (MAnimalAIControl_tEDECFA9DEED81CBCE03B49DB5C183C3AFC228D10* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool InOffMeshLink  { get; set; }
		bool L_0 = ___value0;
		__this->___U3CInOffMeshLinkU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR State_tE52D2764374B1BF689A725E753EE1921828FCD09* MAnimal_get_ActiveState_m76903D34E2AFDB73CD8870CA79880FE8AAE59237_inline (MAnimal_tF9AF2EBCAB8B2AE8CE2CB496A30EBDE9FB2AA4DB* __this, const RuntimeMethod* method) 
{
	{
		// get => activeState;
		State_tE52D2764374B1BF689A725E753EE1921828FCD09* L_0 = __this->___activeState_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}

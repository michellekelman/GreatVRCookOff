#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>
struct Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689;
// Photon.Chat.ChatClient
struct ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA;
// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Photon.Chat.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Photon.Chat.Demo.FriendItem
struct FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive
struct IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Photon.Chat.Demo.NamePickGui
struct NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Photon.Chat.UtilityScripts.OnStartDelete
struct OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB;
IL2CPP_EXTERN_C String_t* _stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF;
IL2CPP_EXTERN_C String_t* _stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66;
IL2CPP_EXTERN_C String_t* _stringLiteralF903ABCF81417315694F4593925EE527D6C1258B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Photon.Chat.Demo.ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ChannelsToJoinOnConnect_4;
	// System.String[] Photon.Chat.Demo.ChatGui::FriendsList
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___FriendsList_5;
	// System.Int32 Photon.Chat.Demo.ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_6;
	// System.String Photon.Chat.Demo.ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_7;
	// System.String Photon.Chat.Demo.ChatGui::selectedChannelName
	String_t* ___selectedChannelName_8;
	// Photon.Chat.ChatClient Photon.Chat.Demo.ChatGui::chatClient
	ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* ___chatClient_9;
	// Photon.Chat.ChatAppSettings Photon.Chat.Demo.ChatGui::chatAppSettings
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* ___chatAppSettings_10;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::missingAppIdErrorPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missingAppIdErrorPanel_11;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::ConnectingLabel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConnectingLabel_12;
	// UnityEngine.RectTransform Photon.Chat.Demo.ChatGui::ChatPanel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___ChatPanel_13;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::UserIdFormPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UserIdFormPanel_14;
	// UnityEngine.UI.InputField Photon.Chat.Demo.ChatGui::InputFieldChat
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___InputFieldChat_15;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::CurrentChannelText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CurrentChannelText_16;
	// UnityEngine.UI.Toggle Photon.Chat.Demo.ChatGui::ChannelToggleToInstantiate
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___ChannelToggleToInstantiate_17;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::FriendListUiItemtoInstantiate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FriendListUiItemtoInstantiate_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle> Photon.Chat.Demo.ChatGui::channelToggles
	Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* ___channelToggles_19;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem> Photon.Chat.Demo.ChatGui::friendListItemLUT
	Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* ___friendListItemLUT_20;
	// System.Boolean Photon.Chat.Demo.ChatGui::ShowState
	bool ___ShowState_21;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::Title
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Title_22;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::StateText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StateText_23;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::UserIdText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___UserIdText_24;
	// System.Int32 Photon.Chat.Demo.ChatGui::TestLength
	int32_t ___TestLength_26;
	// System.Byte[] Photon.Chat.Demo.ChatGui::testBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___testBytes_27;
};

// Photon.Chat.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Chat.Demo.FriendItem
struct FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::NameLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NameLabel_4;
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::StatusLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StatusLabel_5;
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::Health
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Health_6;
};

// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive
struct IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Chat.Demo.NamePickGui
struct NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Chat.Demo.ChatGui Photon.Chat.Demo.NamePickGui::chatNewComponent
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* ___chatNewComponent_5;
	// UnityEngine.UI.InputField Photon.Chat.Demo.NamePickGui::idInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___idInput_6;
};

// Photon.Chat.UtilityScripts.OnStartDelete
struct OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextButtonTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_4;
	// UnityEngine.UI.Selectable Photon.Chat.UtilityScripts.TextButtonTransition::Selectable
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___Selectable_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::HoverColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverColor_7;
};

// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle Photon.Chat.UtilityScripts.TextToggleIsOnTransition::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_4;
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextToggleIsOnTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOnColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOffColor_7;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOnColor_8;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOffColor_9;
	// System.Boolean Photon.Chat.UtilityScripts.TextToggleIsOnTransition::isHover
	bool ___isHover_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// System.Boolean UnityEngine.EventSystems.BaseInputModule::m_SendPointerHoverToParent
	bool ___m_SendPointerHoverToParent_5;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_6;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_9;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_10;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_15;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_16;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_17;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_18;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_20;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_21;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_22;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_26;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_28;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_29;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_30;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::F67C5FF154EE4961A5F9223699A9F82F6E06CB3C064EFBF28119E8A43639ED97
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___F67C5FF154EE4961A5F9223699A9F82F6E06CB3C064EFBF28119E8A43639ED97_0;
};

// <PrivateImplementationDetails>

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.UI.Toggle/ToggleEvent

// UnityEngine.UI.Toggle/ToggleEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields
{
	// System.String Photon.Chat.Demo.ChatGui::HelpText
	String_t* ___HelpText_25;
};

// Photon.Chat.Demo.ChatGui

// Photon.Chat.UtilityScripts.EventSystemSpawner

// Photon.Chat.UtilityScripts.EventSystemSpawner

// Photon.Chat.Demo.FriendItem

// Photon.Chat.Demo.FriendItem

// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive

// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive

// Photon.Chat.Demo.NamePickGui

// Photon.Chat.Demo.NamePickGui

// Photon.Chat.UtilityScripts.OnStartDelete

// Photon.Chat.UtilityScripts.OnStartDelete

// Photon.Chat.UtilityScripts.TextButtonTransition

// Photon.Chat.UtilityScripts.TextButtonTransition

// Photon.Chat.UtilityScripts.TextToggleIsOnTransition

// Photon.Chat.UtilityScripts.TextToggleIsOnTransition

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.BaseInputModule

// UnityEngine.EventSystems.BaseInputModule

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.InputField

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.EventSystems.PointerInputModule

// UnityEngine.EventSystems.PointerInputModule

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// UnityEngine.EventSystems.StandaloneInputModule

// UnityEngine.EventSystems.StandaloneInputModule

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method) ;

// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Photon.Chat.Demo.ChatGui>()
inline ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30 (const RuntimeMethod* method)
{
	return ((  ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.NamePickGui::StartChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::set_UserName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String Photon.Chat.Demo.ChatGui::get_UserName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4 (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, bool ___0_isOn, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared)(__this, ___0_call, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.Demo.FriendItem::set_FriendId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { this.NameLabel.text = value; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NameLabel_4;
		String_t* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// set { this.NameLabel.text = value; }
		return;
	}
}
// System.String Photon.Chat.Demo.FriendItem::get_FriendId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FriendItem_get_FriendId_mA0037DB139EEC1F38A1B2E31707128111FE5DCD4 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.NameLabel.text; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NameLabel_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		return L_1;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_Awake_m8BCC676379DCE1B967BC706C9247541A424F3C42 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Health.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Health_6;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::OnFriendStatusUpdate(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, int32_t ___0_status, bool ___1_gotMessage, RuntimeObject* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF903ABCF81417315694F4593925EE527D6C1258B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	{
		int32_t L_0 = ___0_status;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 1)))
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_003a;
			}
			case 4:
			{
				goto IL_0042;
			}
			case 5:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0052;
	}

IL_0022:
	{
		// _status = "Invisible";
		V_0 = _stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66;
		// break;
		goto IL_0058;
	}

IL_002a:
	{
		// _status = "Online";
		V_0 = _stringLiteralF903ABCF81417315694F4593925EE527D6C1258B;
		// break;
		goto IL_0058;
	}

IL_0032:
	{
		// _status = "Away";
		V_0 = _stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70;
		// break;
		goto IL_0058;
	}

IL_003a:
	{
		// _status = "Do not disturb";
		V_0 = _stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF;
		// break;
		goto IL_0058;
	}

IL_0042:
	{
		// _status = "Looking For Game/Group";
		V_0 = _stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083;
		// break;
		goto IL_0058;
	}

IL_004a:
	{
		// _status = "Playing";
		V_0 = _stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4;
		// break;
		goto IL_0058;
	}

IL_0052:
	{
		// _status = "Offline";
		V_0 = _stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB;
	}

IL_0058:
	{
		// this.StatusLabel.text = _status;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___StatusLabel_5;
		String_t* L_2 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// if (gotMessage)
		bool L_3 = ___1_gotMessage;
		if (!L_3)
		{
			goto IL_009a;
		}
	}
	{
		// string _health = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_4;
		// if (message != null)
		RuntimeObject* L_5 = ___2_message;
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		// string[] _messages = message as string[];
		RuntimeObject* L_6 = ___2_message;
		V_2 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_6, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		// if (_messages != null && _messages.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_2;
		if (!L_7)
		{
			goto IL_008e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) < ((int32_t)2)))
		{
			goto IL_008e;
		}
	}
	{
		// _health = (string)_messages[1] + "%";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = 1;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		V_1 = L_12;
	}

IL_008e:
	{
		// this.Health.text = _health;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___Health_6;
		String_t* L_14 = V_1;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem__ctor_mEF78B22B2415C36B99555074B166E333AAB60EC2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Boolean Photon.Chat.Demo.IgnoreUiRaycastWhenInactive::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IgnoreUiRaycastWhenInactive_IsRaycastLocationValid_m47CCC76507FA3811C9E41548B12A0E85830F13C9 (IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_eventCamera, const RuntimeMethod* method) 
{
	{
		// return this.gameObject.activeInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		return L_1;
	}
}
// System.Void Photon.Chat.Demo.IgnoreUiRaycastWhenInactive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreUiRaycastWhenInactive__ctor_m6BFAC886ACA5E3CB2403424B3F1D53BD695F833E (IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void Photon.Chat.Demo.NamePickGui::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_Start_m10935A8B8CF57FC8505F0178067BA92426555E8B (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// this.chatNewComponent = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		__this->___chatNewComponent_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatNewComponent_5), (void*)L_0);
		// string prefsName = PlayerPrefs.GetString(UserNamePlayerPref);
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A, NULL);
		V_0 = L_1;
		// if (!string.IsNullOrEmpty(prefsName))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.idInput.text = prefsName;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___idInput_6;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_4, L_5, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::EndEditOnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_EndEditOnEnter_m12622E58FF59DA84D6523AC12874DA9863199C9A (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey(KeyCode.Return) || Input.GetKey(KeyCode.KeypadEnter))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)13), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)271), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0015:
	{
		// this.StartChat();
		NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::StartChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A);
		s_Il2CppMethodInitialized = true;
	}
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* V_0 = NULL;
	{
		// ChatGui chatNewComponent = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		V_0 = L_0;
		// chatNewComponent.UserName = this.idInput.text.Trim();
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_1 = V_0;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___idInput_6;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_3, NULL);
		NullCheck(L_1);
		ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline(L_1, L_4, NULL);
		// chatNewComponent.Connect();
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_5 = V_0;
		NullCheck(L_5);
		ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3(L_5, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// PlayerPrefs.SetString(UserNamePlayerPref, chatNewComponent.UserName);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(L_6, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui__ctor_mFF3AFAF1D13B70F7612ADEC741FCC056B2774EB5 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void Photon.Chat.UtilityScripts.EventSystemSpawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner_OnEnable_mE862EC0D6C69AA07F7D83951631687391609E80B (EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventSystem sceneEventSystem = FindObjectOfType<EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		// if (sceneEventSystem == null)
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// GameObject eventSystem = new GameObject("EventSystem");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, NULL);
		// eventSystem.AddComponent<EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8(L_3, GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		// eventSystem.AddComponent<StandaloneInputModule>();
		NullCheck(L_3);
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_5;
		L_5 = GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D(L_3, GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.EventSystemSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner__ctor_mF241B0B2DADE23009B467FDE4D04A33457D02822 (EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void Photon.Chat.UtilityScripts.OnStartDelete::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete_Start_m9B7CA6E5BF48F098BD682241471AC10B5A7DE583 (OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.OnStartDelete::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete__ctor_m0680CFA8D0C53535AB1CAF48FB605524BF8BBA75 (OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_Awake_m9486D72B1C4AAF16C5E7A54D449DA6A9F7042A20 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnEnable_mDF3ACAD5152C4158E63C0CB55434E0B8F58C64DB (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnDisable_m6030F868A53F2ACA849BCFF3194B856D0EEED602 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerEnter_m060ADDFAB4FE7E2ADDA013C785097C30E32D2940 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_001b:
	{
		// _text.color = HoverColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___HoverColor_7;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerExit_mC89333A759DCAEF054B364A0CF05AAAF73A1E06C (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_001b:
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___NormalColor_6;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition__ctor_m1AC221F8BF501F4B4912898B5D5A1EAD0D2B40E9 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___NormalColor_6 = L_0;
		// public Color HoverColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___HoverColor_7 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnEnable_mEB5D1BAE23AB550072188EE81FBF5E0CB1FA003C (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_5), (void*)L_0);
		// OnValueChanged (toggle.isOn);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA(__this, L_2, NULL);
		// toggle.onValueChanged.AddListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___toggle_4;
		NullCheck(L_3);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_4 = L_3->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_5 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_5, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_4, L_5, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnDisable_m017F8825457A0A4400681B78CE1D1DF62999662D (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle.onValueChanged.RemoveListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_4;
		NullCheck(L_0);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130(L_1, L_2, UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, bool ___0_isOn, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_0 = NULL;
	{
		// _text.color = isOn? (isHover?HoverOnColor:HoverOnColor) : (isHover?NormalOffColor:NormalOffColor) ;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		bool L_1 = ___0_isOn;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B4_0 = L_0;
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->___isHover_10;
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B7_0 = L_3;
		G_B7_1 = G_B2_0;
		goto IL_0037;
	}

IL_0019:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOffColor_7;
		G_B7_0 = L_4;
		G_B7_1 = G_B3_0;
		goto IL_0037;
	}

IL_0021:
	{
		bool L_5 = __this->___isHover_10;
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___HoverOnColor_8;
		G_B7_0 = L_6;
		G_B7_1 = G_B5_0;
		goto IL_0037;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___HoverOnColor_8;
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0037:
	{
		NullCheck(G_B7_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B7_1, G_B7_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerEnter_m94378570919CDF3B8C15622F21D0B0B7FD7956B1 (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = true;
		__this->___isHover_10 = (bool)1;
		// _text.color = toggle.isOn?HoverOnColor:HoverOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0022;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___HoverOffColor_9;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___HoverOnColor_8;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerExit_m4BB2859E42DE14373D78A2217D72EB17B3FB9D28 (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = false;
		__this->___isHover_10 = (bool)0;
		// _text.color = toggle.isOn?NormalOnColor:NormalOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0022;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOnColor_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition__ctor_m31BCC4091B72C664D8E1B13777EF1D56DFAC5CDA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalOnColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___NormalOnColor_6 = L_0;
		// public Color NormalOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___NormalOffColor_7 = L_1;
		// public Color HoverOnColor= Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___HoverOnColor_8 = L_2;
		// public Color HoverOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___HoverOffColor_9 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUserNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}

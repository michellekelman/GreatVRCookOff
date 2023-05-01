#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2;
// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player>
struct Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t681C2D0152C2184DCA6AD773603D0FE709D338C9;
// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch>
struct Dictionary_2_t47C3B85708CBFB02F30AF23A5D4092EC2DAD8636;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68;
// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t0B39EF96E81D9617D3E4536032F30E1AE7610153;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView>
struct HashSet_1_t5B6B46270D543F8EDB3F122B02D36E60196CB13B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// Photon.Voice.IAudioOut`1<System.Single>
struct IAudioOut_1_t52874464F649CB4D8674B0F14144AADE14995DF9;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t7628C79979ECE33C758FA5C52526761CA20F2167;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Photon.Pun.PhotonView>
struct List_1_t4AAED60DF1950E8D05C3BFEB57C6A43FBFD440B5;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder>
struct List_1_tBFD6B7B62FB7763BC57224ED666A855ACCD05536;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_t823310AB4F398AE467887CC898545B689B70003F;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView>
struct NonAllocDictionary_2_tC9904455C122E50478272CC5522AD956A7BB5F12;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_t47635E10016E83A1E327B583977D1F043544FB48;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Photon.Voice.PUN.PunVoiceClient[]
struct PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234;
// Photon.Voice.Unity.Recorder[]
struct RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D;
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Photon.Voice.Unity.VoiceLogger[]
struct VoiceLoggerU5BU5D_t2EAAFCE8EAC2A25FE8F16DDF75F3FCD04D846410;
// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Photon.Voice.DeviceFeatures
struct DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t3DEEF61ECB638E82CFBFC6F26D590E2ECD3F99C2;
// Photon.Voice.ILogger
struct ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_tACE5277867F34445F8CAB737A6C60770A74FE635;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D;
// Photon.Pun.IPunPrefabPool
struct IPunPrefabPool_t0C53499E6C013A2913E220B8D6627AEE50272B36;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t62EB15B7BDBC1428F5BFAF50DA2086B74E2ACBDF;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// Photon.Voice.LocalVoice
struct LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C;
// Photon.Pun.PhotonStream
struct PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E;
// Photon.Voice.PhotonTransportProtocol
struct PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700;
// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B;
// Photon.Voice.PUN.PhotonVoiceView
struct PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// Photon.Voice.PUN.PunVoiceClient
struct PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1;
// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E;
// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23;
// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152;
// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// Photon.Realtime.SupportLogger
struct SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// Photon.Voice.VoiceClient
struct VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E;
// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF;
// Photon.Voice.Unity.VoiceComponentImpl
struct VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3;
// Photon.Voice.PUN.UtilityScripts.VoiceDebugScript
struct VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315;
// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0992D3165D8489C42C7461FA83DBC4B3639330E8;
IL2CPP_EXTERN_C String_t* _stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55;
IL2CPP_EXTERN_C String_t* _stringLiteral09AF8992981BCC4085724E4E3D0CF09319FCE9D9;
IL2CPP_EXTERN_C String_t* _stringLiteral0AAD5240183043F2AC9BF73F3688D7989AA5DD58;
IL2CPP_EXTERN_C String_t* _stringLiteral0AB9A62FEB121241DAF6E027F68F70D4A6625235;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADAA9081239C97382D9F0956300A807BE35143E;
IL2CPP_EXTERN_C String_t* _stringLiteral0C7AAFC814E837F74C65B57D9FAB598FE911F039;
IL2CPP_EXTERN_C String_t* _stringLiteral14727C2772E7388F0F563659C83865E67B93D390;
IL2CPP_EXTERN_C String_t* _stringLiteral179D9FE8817F214B3074543C7798DACDA20D79B7;
IL2CPP_EXTERN_C String_t* _stringLiteral1BBA5BC812707330A06468A5C3E57AA6A3580C93;
IL2CPP_EXTERN_C String_t* _stringLiteral1F11D7FD924312A01D1434E6B6C15C14D50960BC;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral233B5AC8FCFCA611B06590C6EEDDEE7245A9BB7A;
IL2CPP_EXTERN_C String_t* _stringLiteral2354DE780A5B69C0FEED47C58F7AAB3C88099215;
IL2CPP_EXTERN_C String_t* _stringLiteral24C46FC59ED4CA794BC2A3692B87AA7D0CB46837;
IL2CPP_EXTERN_C String_t* _stringLiteral24F5590E4C612C6C361CC9B6A7D645EEF121B6BD;
IL2CPP_EXTERN_C String_t* _stringLiteral291D2339FDB7548402B5F73BE1A37E590E787397;
IL2CPP_EXTERN_C String_t* _stringLiteral2B2DA86F8E43CCF02C50633D307C27C7B2BBB4AB;
IL2CPP_EXTERN_C String_t* _stringLiteral337A20AAFBA6AC7D9D6BFF4BC9DCE14D072BAA21;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9D80CEFB56309B3CAD8F0BE6870DBD9792E758;
IL2CPP_EXTERN_C String_t* _stringLiteral42A9379093D61078CD6096425E2B43AFB142C8C4;
IL2CPP_EXTERN_C String_t* _stringLiteral45CC5DDEA8717A99A5B870EE5DABECF5F7C7046A;
IL2CPP_EXTERN_C String_t* _stringLiteral481399EB9E74D247B70B58DD3F2B8A76F6C3D695;
IL2CPP_EXTERN_C String_t* _stringLiteral4816459EC827354ABCD3F7B7D8543A20050D2B0D;
IL2CPP_EXTERN_C String_t* _stringLiteral491DFF307155D060DE2930B3A4DACC763B9B9992;
IL2CPP_EXTERN_C String_t* _stringLiteral493FE7F94FDC85045F0BE8971C31BED9290C8526;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6311C62451843E33262D7C8190CB31A3FDF66A;
IL2CPP_EXTERN_C String_t* _stringLiteral4EAA25CDEC82B11766592502AB76F8FE0EFBF3E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5395A2F08284F5EAE81B1C322B82D7E19E4D4CF3;
IL2CPP_EXTERN_C String_t* _stringLiteral566067E3C1339B5F41E264C307AFED1E012B8F76;
IL2CPP_EXTERN_C String_t* _stringLiteral5B7BDCD055E8976EC2783C6D6E53B0E590E60488;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5E7DA8E8875DDA9664D612DF021FC38E6BA46578;
IL2CPP_EXTERN_C String_t* _stringLiteral62D4DA4488413E8C1FACD06BD54997CC4BCD9612;
IL2CPP_EXTERN_C String_t* _stringLiteral631CCB3B38A24A985A55AD1E70ABA1395491A996;
IL2CPP_EXTERN_C String_t* _stringLiteral6458CA1942CDE521844E158F0EC0CC46DFEC227B;
IL2CPP_EXTERN_C String_t* _stringLiteral6ABBF4466BE09D0080DEBDE2BAB8E36F342F072B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D151FB1D99E3E0C476B7791FA53B432E15F603F;
IL2CPP_EXTERN_C String_t* _stringLiteral71D7CEF12F1944491ED72A13C6679D30CE07414C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A8973A32FBEB43D1721AAF5EB33BEF26EF896C5;
IL2CPP_EXTERN_C String_t* _stringLiteral7B5C4D03399EEA9B7DB3B2A1F30F170F7ED0E222;
IL2CPP_EXTERN_C String_t* _stringLiteral7B99C5BB86AD28992FE3EA8391C088EA95489451;
IL2CPP_EXTERN_C String_t* _stringLiteral82B1190104BB5B93E0E671FC52196230F07C4616;
IL2CPP_EXTERN_C String_t* _stringLiteral849994D0F83DC8C476CF3A89C36B232187AE95A3;
IL2CPP_EXTERN_C String_t* _stringLiteral8718556EB9DCBD2575098EAB4C86419472AC7614;
IL2CPP_EXTERN_C String_t* _stringLiteral89D07FA9289A89F82E6B227F7EDD2C8EF9F9D210;
IL2CPP_EXTERN_C String_t* _stringLiteral96F687665AEA502398F1370CEE347C90A340B677;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF9C9C23F7100943694DB45B8871B0A811B35C8;
IL2CPP_EXTERN_C String_t* _stringLiteral9E18A432BCD116096E8D0F03E0E8A8A2AE263F2A;
IL2CPP_EXTERN_C String_t* _stringLiteralBBBF549D0FA6EF293724A95ADA890AE4CABDC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F700A67A6310E33DD094AAC545BF1871B6D467;
IL2CPP_EXTERN_C String_t* _stringLiteralCBA0771AC72CD21EFF386416E9F6F5302398353F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0942E93D883771539D99BE72A7DDCB8AE98CDC8;
IL2CPP_EXTERN_C String_t* _stringLiteralD0C669958BFD1AB4581DA8AE8C62EA5A5074640C;
IL2CPP_EXTERN_C String_t* _stringLiteralD193818D7EE1F56481A87F5FE7594803C22FC12B;
IL2CPP_EXTERN_C String_t* _stringLiteralD3719DC7FB393EC6A0A18F97B5ACA5A75ED8480B;
IL2CPP_EXTERN_C String_t* _stringLiteralD898110020367A3C85DFC02C4633ED3E8B6CE172;
IL2CPP_EXTERN_C String_t* _stringLiteralF9C336C7B61757E192B024456361E39B04C988EE;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_mC1E04F504797B33976B8C685BAD42A0AC1D478BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m8E34F6F5401D5E1DC72D08DF76466DBD2EC993BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m3723882EE6D0D20E8D034AE1C6C87FF72FFB810C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisVoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7_m9E90F79547159D4772C6D0365B27D0B2C132A345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PunVoiceClient_OnPunStateChanged_mBF0AD9457978A53E402CF40060EB0D76FE13E3B1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234;
struct RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D;
struct SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589;
struct VoiceLoggerU5BU5D_t2EAAFCE8EAC2A25FE8F16DDF75F3FCD04D846410;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t07AC2C08AC8E2A2DDE6E227A29B92E6ED2FDEA58 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7  : public RuntimeObject
{
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdFusion
	String_t* ___AppIdFusion_1;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_2;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_3;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_4;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_5;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_6;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_7;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_8;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_9;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_10;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_11;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_12;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_13;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_14;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;
};

// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7  : public RuntimeObject
{
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject* ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};

// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9  : public RuntimeObject
{
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// Photon.Realtime.JoinMode Photon.Realtime.EnterRoomParams::JoinMode
	uint8_t ___JoinMode_5;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_6;
};

// Photon.Pun.PhotonNetwork
struct PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99  : public RuntimeObject
{
};

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_16;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989* ___SocketImplementationConfig_18;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t* ___U3CSocketImplementationU3Ek__BackingField_19;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_20;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_21;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD* ___OnDisconnectMessage_22;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitResends
	int32_t ___SequenceDeltaLimitResends_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitSends
	int32_t ___SequenceDeltaLimitSends_28;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_29;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_30;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_31;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_37;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_38;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_39;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_42;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_44;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RandomizedSequenceNumbers_45;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_46;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsIncomingU3Ek__BackingField_47;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsOutgoingU3Ek__BackingField_48;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* ___U3CTrafficStatsGameLevelU3Ek__BackingField_49;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___trafficStatsStopwatch_50;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_51;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject* ___SendOutgoingLockObject_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject* ___DispatchLockObject_54;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject* ___EnqueueLock_55;
	// System.Type ExitGames.Client.Photon.PhotonPeer::payloadEncryptorType
	Type_t* ___payloadEncryptorType_56;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PayloadEncryptionSecret_57;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t* ___encryptorType_58;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_59;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_60;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_61;
};

// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C  : public RuntimeObject
{
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject* ___TagObject_8;
};

// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;
};

// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 
{
	// Photon.Voice.IOS.AudioSessionCategory Photon.Voice.IOS.AudioSessionParameters::Category
	int32_t ___Category_0;
	// Photon.Voice.IOS.AudioSessionMode Photon.Voice.IOS.AudioSessionParameters::Mode
	int32_t ___Mode_1;
	// Photon.Voice.IOS.AudioSessionCategoryOption[] Photon.Voice.IOS.AudioSessionParameters::CategoryOptions
	AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* ___CategoryOptions_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};
// Native definition for COM marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 
{
	// System.Boolean Photon.Voice.DeviceInfo::<IsDefault>k__BackingField
	bool ___U3CIsDefaultU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.DeviceInfo::<IDInt>k__BackingField
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	// System.String Photon.Voice.DeviceInfo::<IDString>k__BackingField
	String_t* ___U3CIDStringU3Ek__BackingField_2;
	// System.String Photon.Voice.DeviceInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// Photon.Voice.DeviceFeatures Photon.Voice.DeviceInfo::features
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	// System.Boolean Photon.Voice.DeviceInfo::useStringID
	bool ___useStringID_5;
};
// Native definition for P/Invoke marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	char* ___U3CIDStringU3Ek__BackingField_2;
	char* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	int32_t ___useStringID_5;
};
// Native definition for COM marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	Il2CppChar* ___U3CIDStringU3Ek__BackingField_2;
	Il2CppChar* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	int32_t ___useStringID_5;
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

// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F  : public PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C
{
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_t47635E10016E83A1E327B583977D1F043544FB48* ___paramDictionaryPool_62;
};

// Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA 
{
	// System.Int32 Photon.Pun.PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// Photon.Realtime.Player Photon.Pun.PhotonMessageInfo::Sender
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___Sender_1;
	// Photon.Pun.PhotonView Photon.Pun.PhotonMessageInfo::photonView
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___photonView_2;
};
// Native definition for P/Invoke marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA_marshaled_pinvoke
{
	int32_t ___timeInt_0;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___Sender_1;
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___photonView_2;
};
// Native definition for COM marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA_marshaled_com
{
	int32_t ___timeInt_0;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___Sender_1;
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___photonView_2;
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A 
{
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;
};

// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373  : public RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;
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

// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 
{
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Low
	int32_t ___Low_1;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::High
	int32_t ___High_2;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Max
	int32_t ___Max_3;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::SpeedUpPerc
	int32_t ___SpeedUpPerc_4;
};

// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B 
{
	// System.Boolean Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::AcousticEchoCancellation
	bool ___AcousticEchoCancellation_0;
	// System.Boolean Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::AutomaticGainControl
	bool ___AutomaticGainControl_1;
	// System.Boolean Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::NoiseSuppression
	bool ___NoiseSuppression_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B_marshaled_pinvoke
{
	int32_t ___AcousticEchoCancellation_0;
	int32_t ___AutomaticGainControl_1;
	int32_t ___NoiseSuppression_2;
};
// Native definition for COM marshalling of Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B_marshaled_com
{
	int32_t ___AcousticEchoCancellation_0;
	int32_t ___AutomaticGainControl_1;
	int32_t ___NoiseSuppression_2;
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

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject* ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7* ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02* ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80  : public LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4
{
	// Photon.Voice.VoiceClient Photon.Voice.LoadBalancingTransport::voiceClient
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___voiceClient_53;
	// Photon.Voice.PhotonTransportProtocol Photon.Voice.LoadBalancingTransport::protocol
	PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700* ___protocol_54;
	// System.Array Photon.Voice.LoadBalancingTransport::codecEnumValues
	RuntimeArray* ___codecEnumValues_55;
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

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Photon.Realtime.AppSettings Photon.Pun.ServerSettings::AppSettings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___AppSettings_4;
	// System.String Photon.Pun.ServerSettings::DevRegion
	String_t* ___DevRegion_5;
	// Photon.Pun.PunLogLevel Photon.Pun.ServerSettings::PunLogging
	int32_t ___PunLogging_6;
	// System.Boolean Photon.Pun.ServerSettings::EnableSupportLogger
	bool ___EnableSupportLogger_7;
	// System.Boolean Photon.Pun.ServerSettings::RunInBackground
	bool ___RunInBackground_8;
	// System.Boolean Photon.Pun.ServerSettings::StartInOfflineMode
	bool ___StartInOfflineMode_9;
	// System.Collections.Generic.List`1<System.String> Photon.Pun.ServerSettings::RpcList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___RpcList_10;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CClientU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.ConnectionHandler::DisconnectAfterKeepAlive
	bool ___DisconnectAfterKeepAlive_5;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_7;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_8;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_11;
	// System.Diagnostics.Stopwatch Photon.Realtime.ConnectionHandler::backgroundStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___backgroundStopwatch_12;
};

// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pvCache_4;
};

// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B* ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181* ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t7628C79979ECE33C758FA5C52526761CA20F2167* ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F* ___OnControllerChangeCallbacks_31;
};

// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceComponent::impl
	VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* ___impl_4;
};

// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::LogLevel
	uint8_t ___LogLevel_4;
};

// Photon.Voice.PUN.PhotonVoiceView
struct PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// Photon.Pun.PhotonView Photon.Voice.PUN.PhotonVoiceView::photonView
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___photonView_5;
	// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PhotonVoiceView::punVoiceClient
	PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* ___punVoiceClient_6;
	// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::<RecorderInUse>k__BackingField
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___U3CRecorderInUseU3Ek__BackingField_7;
	// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::<SpeakerInUse>k__BackingField
	Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___U3CSpeakerInUseU3Ek__BackingField_8;
};

// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_7;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_8;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_9;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject* ___userData_10;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* ___voice_11;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_12;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.Recorder::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_13;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_14;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_15;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_16;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_17;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_18;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_19;
	// Photon.Voice.OpusCodec/FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_20;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_21;
	// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_22;
	// Photon.Voice.Unity.Recorder/MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_23;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_24;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_25;
	// System.Boolean Photon.Voice.Unity.Recorder::recordingEnabled
	bool ___recordingEnabled_26;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* ___inputFactory_27;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.Unity.Recorder::audioSessionParameters
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___audioSessionParameters_28;
	// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings Photon.Voice.Unity.Recorder::androidNativeMicrophoneSettings
	NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B ___androidNativeMicrophoneSettings_29;
	// System.Boolean Photon.Voice.Unity.Recorder::isPausedOrInBackground
	bool ___isPausedOrInBackground_30;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_31;
	// System.Boolean Photon.Voice.Unity.Recorder::useOnAudioFilterRead
	bool ___useOnAudioFilterRead_32;
	// System.Boolean Photon.Voice.Unity.Recorder::useMicrophoneTypeFallback
	bool ___useMicrophoneTypeFallback_33;
	// System.Boolean Photon.Voice.Unity.Recorder::recordWhenJoined
	bool ___recordWhenJoined_34;
	// Photon.Voice.DeviceInfo Photon.Voice.Unity.Recorder::microphoneDevice
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___microphoneDevice_35;
	// System.Int32 Photon.Voice.Unity.Recorder::microphoneDeviceChangePending
	int32_t ___microphoneDeviceChangePending_36;
	// System.Int32 Photon.Voice.Unity.Recorder::restartRecordingPending
	int32_t ___restartRecordingPending_37;
};

// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker::audioOutput
	RuntimeObject* ___audioOutput_5;
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.Unity.Speaker::playDelayConfig
	PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 ___playDelayConfig_6;
	// System.Boolean Photon.Voice.Unity.Speaker::restartOnDeviceChange
	bool ___restartOnDeviceChange_7;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.Speaker::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::<RemoteVoice>k__BackingField
	RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* ___U3CRemoteVoiceU3Ek__BackingField_9;
	// System.Int32 Photon.Voice.Unity.Speaker::restartPlaybackPending
	int32_t ___restartPlaybackPending_10;
};

// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3  : public ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4
{
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceConnection::voiceComponentImpl
	VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* ___voiceComponentImpl_13;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* ___client_15;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* ___supportLoggerComponent_16;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::runInBackground
	bool ___runInBackground_17;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_18;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_19;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_20;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_21;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_22;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___speakerPrefab_23;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_t823310AB4F398AE467887CC898545B689B70003F* ___cachedRemoteVoices_24;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___primaryRecorder_25;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::usePrimaryRecorder
	bool ___usePrimaryRecorder_26;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::linkedSpeakers
	List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950* ___linkedSpeakers_27;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder> Photon.Voice.Unity.VoiceConnection::recorders
	List_1_tBFD6B7B62FB7763BC57224ED666A855ACCD05536* ___recorders_28;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___Settings_29;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___SpeakerLinked_30;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* ___RemoteVoiceAdded_31;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_32;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_33;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_34;
};

// Photon.Voice.PUN.UtilityScripts.VoiceDebugScript
struct VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// Photon.Voice.PUN.PhotonVoiceView Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::photonVoiceView
	PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* ___photonVoiceView_5;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::ForceRecordingAndTransmission
	bool ___ForceRecordingAndTransmission_6;
	// UnityEngine.AudioClip Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::TestAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___TestAudioClip_7;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::TestUsingAudioClip
	bool ___TestUsingAudioClip_8;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::DisableVad
	bool ___DisableVad_9;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::IncreaseLogLevels
	bool ___IncreaseLogLevels_10;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::LocalDebug
	bool ___LocalDebug_11;
};

// Photon.Voice.PUN.PunVoiceClient
struct PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1  : public VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3
{
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::AutoConnectAndJoin
	bool ___AutoConnectAndJoin_36;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::AutoLeaveAndDisconnect
	bool ___AutoLeaveAndDisconnect_37;
	// Photon.Realtime.EnterRoomParams Photon.Voice.PUN.PunVoiceClient::voiceRoomParams
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___voiceRoomParams_38;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::clientCalledConnectAndJoin
	bool ___clientCalledConnectAndJoin_39;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::clientCalledDisconnect
	bool ___clientCalledDisconnect_40;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::clientCalledConnectOnly
	bool ___clientCalledConnectOnly_41;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::internalDisconnect
	bool ___internalDisconnect_42;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::internalConnect
	bool ___internalConnect_43;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::usePunAppSettings
	bool ___usePunAppSettings_45;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::usePunAuthValues
	bool ___usePunAuthValues_46;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// Photon.Realtime.AppSettings

// Photon.Realtime.AppSettings

// Photon.Realtime.AuthenticationValues

// Photon.Realtime.AuthenticationValues

// Photon.Realtime.EnterRoomParams

// Photon.Realtime.EnterRoomParams

// Photon.Pun.PhotonNetwork
struct PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields
{
	// System.String Photon.Pun.PhotonNetwork::gameVersion
	String_t* ___gameVersion_1;
	// Photon.Realtime.LoadBalancingClient Photon.Pun.PhotonNetwork::NetworkingClient
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___NetworkingClient_2;
	// System.Int32 Photon.Pun.PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_3;
	// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::photonServerSettings
	ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* ___photonServerSettings_5;
	// Photon.Pun.ConnectMethod Photon.Pun.PhotonNetwork::ConnectMethod
	int32_t ___ConnectMethod_7;
	// Photon.Pun.PunLogLevel Photon.Pun.PhotonNetwork::LogLevel
	int32_t ___LogLevel_8;
	// System.Boolean Photon.Pun.PhotonNetwork::EnableCloseConnection
	bool ___EnableCloseConnection_9;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForVectorSynchronization
	float ___PrecisionForVectorSynchronization_10;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForQuaternionSynchronization
	float ___PrecisionForQuaternionSynchronization_11;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForFloatSynchronization
	float ___PrecisionForFloatSynchronization_12;
	// System.Boolean Photon.Pun.PhotonNetwork::offlineMode
	bool ___offlineMode_13;
	// Photon.Realtime.Room Photon.Pun.PhotonNetwork::offlineModeRoom
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___offlineModeRoom_14;
	// System.Boolean Photon.Pun.PhotonNetwork::automaticallySyncScene
	bool ___automaticallySyncScene_15;
	// System.Int32 Photon.Pun.PhotonNetwork::sendFrequency
	int32_t ___sendFrequency_16;
	// System.Int32 Photon.Pun.PhotonNetwork::serializationFrequency
	int32_t ___serializationFrequency_17;
	// System.Boolean Photon.Pun.PhotonNetwork::isMessageQueueRunning
	bool ___isMessageQueueRunning_18;
	// System.Double Photon.Pun.PhotonNetwork::frametime
	double ___frametime_19;
	// System.Int32 Photon.Pun.PhotonNetwork::frame
	int32_t ___frame_20;
	// System.Diagnostics.Stopwatch Photon.Pun.PhotonNetwork::StartupStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___StartupStopwatch_21;
	// System.Single Photon.Pun.PhotonNetwork::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_22;
	// System.Boolean Photon.Pun.PhotonNetwork::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_24;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_25;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Pun.PhotonNetwork::PrefabsWithoutMagicCallback
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___PrefabsWithoutMagicCallback_26;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::SendInstantiateEvHashtable
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___SendInstantiateEvHashtable_27;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendInstantiateRaiseEventOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___SendInstantiateRaiseEventOptions_28;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::allowedReceivingGroups
	HashSet_1_t0B39EF96E81D9617D3E4536032F30E1AE7610153* ___allowedReceivingGroups_29;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::blockedSendingGroups
	HashSet_1_t0B39EF96E81D9617D3E4536032F30E1AE7610153* ___blockedSendingGroups_30;
	// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::reusablePVHashset
	HashSet_1_t5B6B46270D543F8EDB3F122B02D36E60196CB13B* ___reusablePVHashset_31;
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::photonViewList
	NonAllocDictionary_2_tC9904455C122E50478272CC5522AD956A7BB5F12* ___photonViewList_32;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipRequestEv
	Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4* ___OnOwnershipRequestEv_33;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferedEv
	Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4* ___OnOwnershipTransferedEv_34;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferFailedEv
	Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4* ___OnOwnershipTransferFailedEv_35;
	// System.Byte Photon.Pun.PhotonNetwork::currentLevelPrefix
	uint8_t ___currentLevelPrefix_36;
	// System.Boolean Photon.Pun.PhotonNetwork::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_37;
	// Photon.Pun.IPunPrefabPool Photon.Pun.PhotonNetwork::prefabPool
	RuntimeObject* ___prefabPool_40;
	// System.Boolean Photon.Pun.PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_41;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> Photon.Pun.PhotonNetwork::monoRPCMethodsCache
	Dictionary_2_t681C2D0152C2184DCA6AD773603D0FE709D338C9* ___monoRPCMethodsCache_42;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Photon.Pun.PhotonNetwork::rpcShortcuts
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___rpcShortcuts_43;
	// System.Boolean Photon.Pun.PhotonNetwork::RunRpcCoroutines
	bool ___RunRpcCoroutines_44;
	// UnityEngine.AsyncOperation Photon.Pun.PhotonNetwork::_AsyncLevelLoadingOperation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ____AsyncLevelLoadingOperation_45;
	// System.Single Photon.Pun.PhotonNetwork::_levelLoadingProgress
	float ____levelLoadingProgress_46;
	// System.Type Photon.Pun.PhotonNetwork::typePunRPC
	Type_t* ___typePunRPC_47;
	// System.Type Photon.Pun.PhotonNetwork::typePhotonMessageInfo
	Type_t* ___typePhotonMessageInfo_48;
	// System.Object Photon.Pun.PhotonNetwork::keyByteZero
	RuntimeObject* ___keyByteZero_49;
	// System.Object Photon.Pun.PhotonNetwork::keyByteOne
	RuntimeObject* ___keyByteOne_50;
	// System.Object Photon.Pun.PhotonNetwork::keyByteTwo
	RuntimeObject* ___keyByteTwo_51;
	// System.Object Photon.Pun.PhotonNetwork::keyByteThree
	RuntimeObject* ___keyByteThree_52;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFour
	RuntimeObject* ___keyByteFour_53;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFive
	RuntimeObject* ___keyByteFive_54;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSix
	RuntimeObject* ___keyByteSix_55;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSeven
	RuntimeObject* ___keyByteSeven_56;
	// System.Object Photon.Pun.PhotonNetwork::keyByteEight
	RuntimeObject* ___keyByteEight_57;
	// System.Object[] Photon.Pun.PhotonNetwork::emptyObjectArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___emptyObjectArray_58;
	// System.Type[] Photon.Pun.PhotonNetwork::emptyTypeArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___emptyTypeArray_59;
	// System.Collections.Generic.List`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::foundPVs
	List_1_t4AAED60DF1950E8D05C3BFEB57C6A43FBFD440B5* ___foundPVs_60;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::removeFilter
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___removeFilter_61;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::ServerCleanDestroyEvent
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___ServerCleanDestroyEvent_62;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::ServerCleanOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___ServerCleanOptions_63;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToAllOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___SendToAllOptions_64;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToOthersOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___SendToOthersOptions_65;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToSingleOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___SendToSingleOptions_66;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcFilterByViewId
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___rpcFilterByViewId_67;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::OpCleanRpcBufferOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___OpCleanRpcBufferOptions_68;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcEvent
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___rpcEvent_69;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::RpcOptionsToAll
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___RpcOptionsToAll_70;
	// System.Int32 Photon.Pun.PhotonNetwork::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_71;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamOut
	PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* ___serializeStreamOut_72;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamIn
	PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* ___serializeStreamIn_73;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::serializeRaiseEvOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___serializeRaiseEvOptions_74;
	// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch> Photon.Pun.PhotonNetwork::serializeViewBatches
	Dictionary_2_t47C3B85708CBFB02F30AF23A5D4092EC2DAD8636* ___serializeViewBatches_75;
	// Photon.Realtime.RegionHandler Photon.Pun.PhotonNetwork::_cachedRegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ____cachedRegionHandler_80;
};

// Photon.Pun.PhotonNetwork

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_StaticFields
{
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeSocketLibAvailable
	bool ___NativeSocketLibAvailable_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativePayloadEncryptionLibAvailable
	bool ___NativePayloadEncryptionLibAvailable_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeDatagramEncryptionLibAvailable
	bool ___NativeDatagramEncryptionLibAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_43;
};

// ExitGames.Client.Photon.PhotonPeer

// Photon.Realtime.Player

// Photon.Realtime.Player

// Photon.Realtime.RoomInfo

// Photon.Realtime.RoomInfo

// Photon.Realtime.RoomOptions

// Photon.Realtime.RoomOptions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>

// Photon.Voice.IOS.AudioSessionParameters

// Photon.Voice.IOS.AudioSessionParameters

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_StaticFields
{
	// Photon.Voice.DeviceInfo Photon.Voice.DeviceInfo::Default
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___Default_6;
};

// Photon.Voice.DeviceInfo

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Photon.Realtime.LoadBalancingPeer

// Photon.Realtime.LoadBalancingPeer

// Photon.Pun.PhotonMessageInfo

// Photon.Pun.PhotonMessageInfo

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A_StaticFields
{
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___AlternativeUdpPorts_0;
};

// Photon.Realtime.PhotonPortDefinition

// Photon.Realtime.Room

// Photon.Realtime.Room

// System.Void

// System.Void

// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2_StaticFields
{
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Default
	PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 ___Default_0;
};

// Photon.Voice.AudioOutDelayControl/PlayDelayConfig

// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B_StaticFields
{
	// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::Default
	NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B ___Default_3;
};

// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings

// System.Delegate

// System.Delegate

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_11;
};

// Photon.Realtime.LoadBalancingClient

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Photon.Voice.LoadBalancingTransport

// Photon.Voice.LoadBalancingTransport

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Photon.Pun.ServerSettings

// Photon.Pun.ServerSettings

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_StaticFields
{
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_9;
};

// Photon.Realtime.ConnectionHandler

// Photon.Pun.MonoBehaviourPun

// Photon.Pun.MonoBehaviourPun

// Photon.Pun.PhotonView

// Photon.Pun.PhotonView

// Photon.Voice.Unity.VoiceComponent

// Photon.Voice.Unity.VoiceComponent

// Photon.Voice.Unity.VoiceLogger

// Photon.Voice.Unity.VoiceLogger

// Photon.Voice.PUN.PhotonVoiceView

// Photon.Voice.PUN.PhotonVoiceView

// Photon.Voice.Unity.Recorder

// Photon.Voice.Unity.Recorder

// Photon.Voice.Unity.Speaker

// Photon.Voice.Unity.Speaker

// Photon.Voice.Unity.VoiceConnection

// Photon.Voice.Unity.VoiceConnection

// Photon.Voice.PUN.UtilityScripts.VoiceDebugScript

// Photon.Voice.PUN.UtilityScripts.VoiceDebugScript

// Photon.Voice.PUN.PunVoiceClient
struct PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields
{
	// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PunVoiceClient::instance
	PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* ___instance_44;
};

// Photon.Voice.PUN.PunVoiceClient
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.Unity.Recorder[]
struct RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D  : public RuntimeArray
{
	ALIGN_FIELD (8) Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* m_Items[1];

	inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589  : public RuntimeArray
{
	ALIGN_FIELD (8) Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* m_Items[1];

	inline Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.PUN.PunVoiceClient[]
struct PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234  : public RuntimeArray
{
	ALIGN_FIELD (8) PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* m_Items[1];

	inline PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.Unity.VoiceLogger[]
struct VoiceLoggerU5BU5D_t2EAAFCE8EAC2A25FE8F16DDF75F3FCD04D846410  : public RuntimeArray
{
	ALIGN_FIELD (8) VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* m_Items[1];

	inline VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mEBF3FAD6176B0ABD7207DA4D7239671D972C82E6_gshared (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::get_SpeakerInUse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Speaker::get_IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Speaker_get_IsPlaying_m7F784C6E15456AD329779754D88D97E6C81BD842 (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::get_RecorderInUse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_IsCurrentlyTransmitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsCurrentlyTransmitting_m0DF2BF010EAC026A19DC9B9FD67A3712594B54C2 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent_Awake_m6AC34084B90505F4064B4CDE0671C36B3538DFF0 (VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF* __this, const RuntimeMethod* method) ;
// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PunVoiceClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupRecorder_m66B408E518653BB1F599679C779F29A4FBB0FEF2 (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// Photon.Voice.ILogger Photon.Voice.Unity.VoiceComponent::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40 (VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean Photon.Voice.Unity.Recorder::get_TransmitEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupSpeaker_m689EFE250AF050102CC9D2A28EDF14026A3D3E64 (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.PhotonView::get_ViewID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.VoiceConnection::AddSpeaker(Photon.Voice.Unity.Speaker,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceConnection_AddSpeaker_m255966C4FF57ACA47BA15C49CE3F65547ADEB02B (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___0_speaker, RuntimeObject* ___1_userData, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<Photon.Voice.Unity.Recorder>()
inline RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::get_PrimaryRecorder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_UserData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_UserData_m1C4EEB773903B76FAA6A48AD20B670189237CDE0 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.VoiceConnection::AddRecorder(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceConnection_AddRecorder_mB900C30435DC2504DD5B8D1AC09EFF869026FC34 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_rec, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_RecorderInUse(Photon.Voice.Unity.Recorder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonVoiceView_set_RecorderInUse_m5AB337A396F56EED36C91A6E3346BFD8F5207284_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::RemoveRecorder(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_RemoveRecorder_m12180A6A74203EF2997F2011FD15CD2E59A83E97 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_rec, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<Photon.Voice.Unity.Speaker>(System.Boolean)
inline SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___0_includeInactive, method);
}
// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::get_SpeakerPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* VoiceConnection_get_SpeakerPrefab_m826BAD6BF3DBF46103C4E21FFB9A164D9BBCF997_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Speaker Photon.Voice.Unity.VoiceConnection::InstantiateSpeakerPrefab(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* VoiceConnection_InstantiateSpeakerPrefab_mDD60AB3AD1E77FD893A7FB8FD131E099CDAAB8A1 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_parent, bool ___1_destroyOnRemove, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_SpeakerInUse(Photon.Voice.Unity.Speaker)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonVoiceView_set_SpeakerInUse_mB96442AF8DEDD8481ACF2E4F0E0E54F560017B38_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent__ctor_mB6C412309DC148E0BC5729DEE8FAE7DDFBA5AC58 (VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<Photon.Voice.PUN.PunVoiceClient>()
inline PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* Object_FindObjectsOfType_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m3723882EE6D0D20E8D034AE1C6C87FF72FFB810C (const RuntimeMethod* method)
{
	return ((  PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Photon.Voice.PUN.PunVoiceClient>()
inline PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* GameObject_AddComponent_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m8E34F6F5401D5E1DC72D08DF76466DBD2EC993BA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// Photon.Voice.ILogger Photon.Voice.Unity.VoiceConnection::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_InRoom_mFBE0C1A516C34FBAD9923933C73E07080FDA199D (const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.PUN.PunVoiceClient::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_Connect_m8756334A88962C84A6E245333E62757D43904645 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) ;
// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_IsConnected_mD98F9FFFBEFD1932A0898268507DFBE9BEE41257 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::Disconnect(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Disconnect_m9E92F0FD6E20FA7FCB107FD132A62F6DEEC9AEF8 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, int32_t ___0_cause, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.VoiceConnection::get_UsePrimaryRecorder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceConnection_get_UsePrimaryRecorder_m50587F8EEAE8AA3D379D8738E72F9128EE2B41C5_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mEBF3FAD6176B0ABD7207DA4D7239671D972C82E6_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::add_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_add_StateChanged_mA6384FF2BBFAD74989F27734C0A2251F6F470EB9 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.PunVoiceClient::FollowPun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_FollowPun_m04A69E52C97400CC819F8D3E24B05FDF2C5A1B59 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.ConnectionHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler_OnDisable_m6EE13B313754725DB1AA164CE82EC2CF4797B89E (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::remove_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_remove_StateChanged_m05D0CADDC74CE72BDD2CC9BBCBA8257D9CACD85B (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_OnDestroy_mE728411AFE39DCE501501CD2317DE93E08BDCD68 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.PunVoiceClient::FollowPun(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_FollowPun_m6E32B34017FC46A662038E5C78EAB081986C2985 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, int32_t ___0_toState, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::OnVoiceStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_OnVoiceStateChanged_mBD5AAABDDFD4D65AC0B7DD1FC54E55E931BB0D99 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, int32_t ___0_fromState, int32_t ___1_toState, const RuntimeMethod* method) ;
// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::get_DisconnectedCause()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_DisconnectedCause_m7A948064631F3E7A5D1BFA24CCA308852AB8C08D_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Pun.PhotonView Photon.Pun.PhotonView::Find(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* PhotonView_Find_m0882E2232D4EAB45F754B4FAFEE5E6EA54DF7707 (int32_t ___0_viewID, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Photon.Voice.PUN.PhotonVoiceView>()
inline PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* Component_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_mC1E04F504797B33976B8C685BAD42A0AC1D478BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Photon.Realtime.Room Photon.Pun.PhotonNetwork::get_CurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* PhotonNetwork_get_CurrentRoom_m72D3601299E109EED858E132DE1BD316226BA38D (const RuntimeMethod* method) ;
// System.String Photon.Realtime.Room::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Voice.Unity.VoiceConnection::get_ClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.String Photon.Voice.PUN.PunVoiceClient::GetVoiceRoomName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PunVoiceClient_GetVoiceRoomName_mA053A4FD7EE4265C879845FBEC8801A3176EC672 (const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.PUN.PunVoiceClient::JoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_JoinRoom_mDA863B1A7C056BA0B1782289CE6139F96B33EC0C (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, String_t* ___0_voiceRoomName, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::get_PhotonServerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* PhotonNetwork_get_PhotonServerSettings_mEB0FD5D91970368EE4D23AA12213DAD57B8D1097 (const RuntimeMethod* method) ;
// Photon.Realtime.AppSettings Photon.Realtime.AppSettings::CopyTo(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* AppSettings_CopyTo_mE304EF3079424281AC51411AB237969412FD6F93 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___0_d, const RuntimeMethod* method) ;
// System.String Photon.Pun.PhotonNetwork::get_CloudRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonNetwork_get_CloudRegion_mB5B2C20FAB0892E2CCBCEF249C2146497AECB16E (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.SerializationProtocol Photon.Realtime.LoadBalancingClient::get_SerializationProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_SerializationProtocol_m9A1630A2C16C42D3914CA6787453B4BCCB9AD756 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::set_SerializationProtocol(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_set_SerializationProtocol_m1DF8CED4E6C037D95C5DB7B2562AA934057FDC12 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.PUN.PunVoiceClient::get_UsePunAuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PunVoiceClient_get_UsePunAuthValues_m64D747A136589F274AC4CC9EB70192843760D51F_inline (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) ;
// Photon.Realtime.AuthenticationValues Photon.Pun.PhotonNetwork::get_AuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* PhotonNetwork_get_AuthValues_mF4E6173BA3C5E848ABF50755644C01CF6DB7D341 (const RuntimeMethod* method) ;
// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_mFA23E096E1262DF1C8167BD077DD17C7B1BE9D9D (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::set_AuthValues(Photon.Realtime.AuthenticationValues)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadBalancingClient_set_AuthValues_mAFB66C3CFA04587CBA1A60711581B2BA6C6FD84C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___0_value, const RuntimeMethod* method) ;
// Photon.Realtime.AuthenticationValues Photon.Realtime.AuthenticationValues::CopyTo(Photon.Realtime.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* AuthenticationValues_CopyTo_m7E765A067382A14BB5E1754A652A2B56D293E9C5 (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___0_copy, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinOrCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinOrCreateRoom_m09D399AF025F96C6CD7E93EB2F4C2EE3600CE26F (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___0_enterRoomParams, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::get_OfflineMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonNetwork_get_OfflineMode_m57596042EE764187C75DEAC48E6F420799C192C2_inline (const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Pun.PhotonNetwork::get_NetworkClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_NetworkClientState_m14926C92B031C5788348074278770D6CB848BE7D (const RuntimeMethod* method) ;
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpLeaveRoom(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpLeaveRoom_m7537326F58896C437BC18C40657D698602D46DA1 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, bool ___0_becomeInactive, bool ___1_sendAuthCookie, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.PunVoiceClient::ConnectOrJoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_ConnectOrJoin_m46EA563B086D9AD9A5BCD392039FACE9C9ADFA3F (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_InRoom_m94253789BA5BD9C81534C4F9682B5E707EF08E78 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8 (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8 (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomOptions::set_IsVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_m5D9ACD84A11FD6E37F023C2181653923AEE7AB25_inline (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection__ctor_mDD2B56D6410FC2EFB93CE951934278B858BD7D52 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::MaxLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_MaxLogs_mC5F627CE9ED3A19418607F0FE7F3F6ACB05A1DB5 (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_SourceType(Photon.Voice.Unity.Recorder/InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_SourceType_m2DBF84AF542E7662A4302A0D20399C7FC5E1E13D (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_AudioClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_AudioClip_m6E9024961FCCF2BB761FBCE1A3133DD70FF7433A (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_LoopAudioClip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_LoopAudioClip_m22D046CB1C91C2275C4C23AE0B35CA7E4B22F014 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::RestartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_RestartRecording_m98ABD12F631A9BD6CD54384C04B2CF0D85A03E2C (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_RecordingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_RecordingEnabled_mC3AE50280E0B44300FCFFE31E4B36BDACAE2694A (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_TransmitEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_TransmitEnabled_mB6B4C554D91CC63D61DBAE8D0C9FA948CD1E1496 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_VoiceDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_VoiceDetection_m52AF86118A2E56181935DA2F77B7437CDD06CAD0 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Speaker::get_IsLinked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Speaker_get_IsLinked_mF2F75BD8170F70E4E151117F1CBB059A67B1426C (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) ;
// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::get_photonView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
// Photon.Realtime.Player Photon.Pun.PhotonView::get_Owner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* PhotonView_get_Owner_m99D611AD5C17B06E4490F75CFAC02C26AABC4A21_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerIpAddress_m39ED914DE2093FDAE8B264A3AD9D3A97A02ED59D (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Realtime.Player,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_m985C1C00D88C33FABAE7B0C51AAB32C67A9D010B (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, String_t* ___0_methodName, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___1_targetPlayer, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_parameters, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_RecordingEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_RecordingEnabled_mEDEDC73670D1A7D991F8341AF27A1B268329D0FA_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Byte Photon.Voice.Unity.Recorder::get_InterestGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Recorder_get_InterestGroup_m766F1E89F3428A4B72F2FECA2A6D500B42D75D0F (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_InterestGroup(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_InterestGroup_mE20323891F9FA5B34039167207D72DA97017C353 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Object Photon.Voice.Unity.Recorder::get_UserData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Recorder_get_UserData_m5D5FA3E69ABD3F5CAB96102519995BDF1C488BF7_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_VoiceDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_VoiceDetection_mF217F20782F7563928EF8A09B5283FF3D5B58F52_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.PhotonView::get_OwnerActorNr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_OwnerActorNr_mD9C14958B5CC4A817C6720FD0BF37A9B61A47FDF_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_DebugEchoMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_DebugEchoMode_m727853F9D824E99FE754C56FAE427434E308563F_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_DebugEchoMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_DebugEchoMode_mF63CA073EC931A8ED3323261BC44A984B158765C (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::Reply(System.String,Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_Reply_mC62DA59510C6110A9240288DD4FC39CEDA900FD0 (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, String_t* ___0_why, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___1_player, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<Photon.Voice.Unity.VoiceLogger>()
inline VoiceLoggerU5BU5D_t2EAAFCE8EAC2A25FE8F16DDF75F3FCD04D846410* Object_FindObjectsOfType_TisVoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7_m9E90F79547159D4772C6D0365B27D0B2C132A345 (const RuntimeMethod* method)
{
	return ((  VoiceLoggerU5BU5D_t2EAAFCE8EAC2A25FE8F16DDF75F3FCD04D846410* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Void Photon.Pun.MonoBehaviourPun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::get_RecorderInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = __this->___U3CRecorderInUseU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_RecorderInUse(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_set_RecorderInUse_m5AB337A396F56EED36C91A6E3346BFD8F5207284 (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = ___0_value;
		__this->___U3CRecorderInUseU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRecorderInUseU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::get_SpeakerInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = __this->___U3CSpeakerInUseU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_SpeakerInUse(Photon.Voice.Unity.Speaker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_set_SpeakerInUse_mB96442AF8DEDD8481ACF2E4F0E0E54F560017B38 (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = ___0_value;
		__this->___U3CSpeakerInUseU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSpeakerInUseU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSpeaking_m8412D81FD36F7800BC5E4A1E6E32C50EE691067D (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return this.SpeakerInUse != null && this.SpeakerInUse.IsPlaying; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0;
		L_0 = PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_2;
		L_2 = PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Speaker_get_IsPlaying_m7F784C6E15456AD329779754D88D97E6C81BD842(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsRecording_m402F87721119C1BB8CE611ED8F9D2C2A0905CD6E (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return this.RecorderInUse != null && this.RecorderInUse.IsCurrentlyTransmitting; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0;
		L_0 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_2;
		L_2 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Recorder_get_IsCurrentlyTransmitting_m0DF2BF010EAC026A19DC9B9FD67A3712594B54C2(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Awake_m4B304C1B1825E608E228F776F4CDEE3AF0D8D1C7 (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		VoiceComponent_Awake_m6AC34084B90505F4064B4CDE0671C36B3538DFF0(__this, NULL);
		// this.punVoiceClient = PunVoiceClient.Instance;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0;
		L_0 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		__this->___punVoiceClient_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___punVoiceClient_6), (void*)L_0);
		// this.photonView = this.GetComponent<PhotonView>();
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_1;
		L_1 = Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2(__this, Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		__this->___photonView_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___photonView_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Start_m5DB25DE8F467B73863068C2DF0D78BFD4248BB46 (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral481399EB9E74D247B70B58DD3F2B8A76F6C3D695);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D151FB1D99E3E0C476B7791FA53B432E15F603F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D7CEF12F1944491ED72A13C6679D30CE07414C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82B1190104BB5B93E0E671FC52196230F07C4616);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (photonView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0 = __this->___photonView_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// this.SetupRecorder();
		PhotonVoiceView_SetupRecorder_m66B408E518653BB1F599679C779F29A4FBB0FEF2(__this, NULL);
		// if (this.RecorderInUse == null)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_2;
		L_2 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// this.Logger.LogWarning("Recorder not setup for PhotonVoiceView: playback may not work properly.");
		RuntimeObject* L_4;
		L_4 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_4, _stringLiteral6D151FB1D99E3E0C476B7791FA53B432E15F603F, L_5);
		goto IL_007c;
	}

IL_0038:
	{
		// if (!this.RecorderInUse.TransmitEnabled)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_6;
		L_6 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(__this, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_005a;
		}
	}
	{
		// this.Logger.LogWarning("PhotonVoiceView.RecorderInUse.TransmitEnabled is false, don't forget to set it to true to enable transmission.");
		RuntimeObject* L_8;
		L_8 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_8, _stringLiteral71D7CEF12F1944491ED72A13C6679D30CE07414C, L_9);
	}

IL_005a:
	{
		// if (!this.RecorderInUse.isActiveAndEnabled)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_10;
		L_10 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(__this, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_10, NULL);
		if (L_11)
		{
			goto IL_007c;
		}
	}
	{
		// this.Logger.LogWarning("PhotonVoiceView.RecorderInUse may not work properly if recorder is disabled or attached to an inactive GameObject.");
		RuntimeObject* L_12;
		L_12 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_12, _stringLiteral82B1190104BB5B93E0E671FC52196230F07C4616, L_13);
	}

IL_007c:
	{
		// this.SetupSpeaker();
		PhotonVoiceView_SetupSpeaker_m689EFE250AF050102CC9D2A28EDF14026A3D3E64(__this, NULL);
		// if (this.SpeakerInUse == null)
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_14;
		L_14 = PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00a6;
		}
	}
	{
		// this.Logger.LogWarning("Speaker not setup for PhotonVoiceView: voice chat will not work.");
		RuntimeObject* L_16;
		L_16 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_16, _stringLiteral481399EB9E74D247B70B58DD3F2B8A76F6C3D695, L_17);
		return;
	}

IL_00a6:
	{
		// punVoiceClient.AddSpeaker(this.SpeakerInUse, this.photonView.ViewID);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_18 = __this->___punVoiceClient_6;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_19;
		L_19 = PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline(__this, NULL);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_20 = __this->___photonView_5;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline(L_20, NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_18);
		bool L_24;
		L_24 = VoiceConnection_AddSpeaker_m255966C4FF57ACA47BA15C49CE3F65547ADEB02B(L_18, L_19, L_23, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupRecorder_m66B408E518653BB1F599679C779F29A4FBB0FEF2 (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BBA5BC812707330A06468A5C3E57AA6A3580C93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A8973A32FBEB43D1721AAF5EB33BEF26EF896C5);
		s_Il2CppMethodInitialized = true;
	}
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* V_0 = NULL;
	RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* V_1 = NULL;
	{
		// Recorder recorder = null;
		V_0 = (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C*)NULL;
		// Recorder[] recorders = this.GetComponentsInChildren<Recorder>();
		RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* L_0;
		L_0 = Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE(__this, Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE_RuntimeMethod_var);
		V_1 = L_0;
		// if (recorders.Length > 0)
		RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* L_1 = V_1;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002c;
		}
	}
	{
		// if (recorders.Length > 1)
		RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* L_2 = V_1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		// this.Logger.LogWarning("Multiple Recorder components found attached to the GameObject or its children.");
		RuntimeObject* L_3;
		L_3 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_3, _stringLiteral1BBA5BC812707330A06468A5C3E57AA6A3580C93, L_4);
	}

IL_0028:
	{
		// recorder = recorders[0];
		RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = 0;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
	}

IL_002c:
	{
		// if (null == recorder && null != punVoiceClient.PrimaryRecorder)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_10 = __this->___punVoiceClient_6;
		NullCheck(L_10);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_11;
		L_11 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_11, NULL);
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		// recorder = punVoiceClient.PrimaryRecorder;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_13 = __this->___punVoiceClient_6;
		NullCheck(L_13);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_14;
		L_14 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline(L_13, NULL);
		V_0 = L_14;
	}

IL_0054:
	{
		// if (null == recorder)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_15, NULL);
		if (!L_16)
		{
			goto IL_0074;
		}
	}
	{
		// this.Logger.LogWarning("Cannot find Recorder. Assign a Recorder to PhotonVoiceView object or set up PunVoiceClient.PrimaryRecorder.");
		RuntimeObject* L_17;
		L_17 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18;
		L_18 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_17, _stringLiteral7A8973A32FBEB43D1721AAF5EB33BEF26EF896C5, L_18);
		goto IL_0097;
	}

IL_0074:
	{
		// recorder.UserData = this.photonView.ViewID;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_19 = V_0;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_20 = __this->___photonView_5;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline(L_20, NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		Recorder_set_UserData_m1C4EEB773903B76FAA6A48AD20B670189237CDE0(L_19, L_23, NULL);
		// punVoiceClient.AddRecorder(recorder);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_24 = __this->___punVoiceClient_6;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_25 = V_0;
		NullCheck(L_24);
		bool L_26;
		L_26 = VoiceConnection_AddRecorder_mB900C30435DC2504DD5B8D1AC09EFF869026FC34(L_24, L_25, NULL);
	}

IL_0097:
	{
		// this.RecorderInUse = recorder;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_27 = V_0;
		PhotonVoiceView_set_RecorderInUse_m5AB337A396F56EED36C91A6E3346BFD8F5207284_inline(__this, L_27, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_OnDestroy_m6AA078C308FD09A08F6FED70FF0249C169336307 (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	{
		// punVoiceClient.RemoveRecorder(this.RecorderInUse);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0 = __this->___punVoiceClient_6;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_1;
		L_1 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(__this, NULL);
		NullCheck(L_0);
		VoiceConnection_RemoveRecorder_m12180A6A74203EF2997F2011FD15CD2E59A83E97(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupSpeaker_m689EFE250AF050102CC9D2A28EDF14026A3D3E64 (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14727C2772E7388F0F563659C83865E67B93D390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ABBF4466BE09D0080DEBDE2BAB8E36F342F072B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9C9C23F7100943694DB45B8871B0A811B35C8);
		s_Il2CppMethodInitialized = true;
	}
	Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* V_0 = NULL;
	SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* V_1 = NULL;
	{
		// Speaker speaker = null;
		V_0 = (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE*)NULL;
		// Speaker[] speakers = this.GetComponentsInChildren<Speaker>(true);
		SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* L_0;
		L_0 = Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6(__this, (bool)1, Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6_RuntimeMethod_var);
		V_1 = L_0;
		// if (speakers.Length > 0)
		SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* L_1 = V_1;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002d;
		}
	}
	{
		// speaker = speakers[0];
		SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// if (speakers.Length > 1)
		SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* L_5 = V_1;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) <= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		// this.Logger.LogWarning("Multiple Speaker components found attached to the GameObject or its children. Using the first one we found.");
		RuntimeObject* L_6;
		L_6 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_6, _stringLiteral14727C2772E7388F0F563659C83865E67B93D390, L_7);
	}

IL_002d:
	{
		// if (null == speaker && null != punVoiceClient.SpeakerPrefab)
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_10 = __this->___punVoiceClient_6;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = VoiceConnection_get_SpeakerPrefab_m826BAD6BF3DBF46103C4E21FFB9A164D9BBCF997_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_11, NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// speaker = punVoiceClient.InstantiateSpeakerPrefab(this.gameObject, false);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_13 = __this->___punVoiceClient_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_15;
		L_15 = VoiceConnection_InstantiateSpeakerPrefab_mDD60AB3AD1E77FD893A7FB8FD131E099CDAAB8A1(L_13, L_14, (bool)0, NULL);
		V_0 = L_15;
	}

IL_005c:
	{
		// if (null == speaker)
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_16, NULL);
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		// this.Logger.LogError("No Speaker component or prefab found. Assign a Speaker to PhotonVoiceView object or set up PunVoiceClient.SpeakerPrefab.");
		RuntimeObject* L_18;
		L_18 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19;
		L_19 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_18, _stringLiteral6ABBF4466BE09D0080DEBDE2BAB8E36F342F072B, L_19);
		goto IL_0091;
	}

IL_007c:
	{
		// this.Logger.LogInfo("Speaker instantiated.");
		RuntimeObject* L_20;
		L_20 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_20, _stringLiteral9BF9C9C23F7100943694DB45B8871B0A811B35C8, L_21);
	}

IL_0091:
	{
		// this.SpeakerInUse = speaker;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_22 = V_0;
		PhotonVoiceView_set_SpeakerInUse_mB96442AF8DEDD8481ACF2E4F0E0E54F560017B38_inline(__this, L_22, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView__ctor_mBEDD2B31B5CA647939A68FC8BF1C221E47DF2EFC (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	{
		VoiceComponent__ctor_mB6C412309DC148E0BC5729DEE8FAE7DDFBA5AC58(__this, NULL);
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
// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PunVoiceClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m8E34F6F5401D5E1DC72D08DF76466DBD2EC993BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m3723882EE6D0D20E8D034AE1C6C87FF72FFB810C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral179D9FE8817F214B3074543C7798DACDA20D79B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6311C62451843E33262D7C8190CB31A3FDF66A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EAA25CDEC82B11766592502AB76F8FE0EFBF3E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849994D0F83DC8C476CF3A89C36B232187AE95A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89D07FA9289A89F82E6B227F7EDD2C8EF9F9D210);
		s_Il2CppMethodInitialized = true;
	}
	PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* V_0 = NULL;
	{
		// if (instance == null)
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0 = ((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00bf;
		}
	}
	{
		// PunVoiceClient[] objects = FindObjectsOfType<PunVoiceClient>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* L_2;
		L_2 = Object_FindObjectsOfType_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m3723882EE6D0D20E8D034AE1C6C87FF72FFB810C(Object_FindObjectsOfType_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m3723882EE6D0D20E8D034AE1C6C87FF72FFB810C_RuntimeMethod_var);
		V_0 = L_2;
		// if (objects == null || objects.Length < 1)
		PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)1)))
		{
			goto IL_0054;
		}
	}

IL_001f:
	{
		// GameObject singleton = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_5, NULL);
		// singleton.name = "PunVoiceClient";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		NullCheck(L_6);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_6, _stringLiteral4EAA25CDEC82B11766592502AB76F8FE0EFBF3E4, NULL);
		// instance = singleton.AddComponent<PunVoiceClient>();
		NullCheck(L_6);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_7;
		L_7 = GameObject_AddComponent_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m8E34F6F5401D5E1DC72D08DF76466DBD2EC993BA(L_6, GameObject_AddComponent_TisPunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_m8E34F6F5401D5E1DC72D08DF76466DBD2EC993BA_RuntimeMethod_var);
		((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44), (void*)L_7);
		// instance.Logger.LogError("PunVoiceClient component was not found in the scene. Creating PunVoiceClient object.");
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_8 = ((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(L_8, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_9, _stringLiteral179D9FE8817F214B3074543C7798DACDA20D79B7, L_10);
		goto IL_00a6;
	}

IL_0054:
	{
		// else if (objects.Length >= 1)
		PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) < ((int32_t)1)))
		{
			goto IL_00a6;
		}
	}
	{
		// instance = objects[0];
		PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 0;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44), (void*)L_14);
		// instance.Logger.LogInfo("An instance of PunVoiceClient is found in the scene.");
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_15 = ((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(L_15, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_16, _stringLiteral849994D0F83DC8C476CF3A89C36B232187AE95A3, L_17);
		// if (objects.Length > 1)
		PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))) <= ((int32_t)1)))
		{
			goto IL_00a6;
		}
	}
	{
		// instance.Logger.LogError("{0} instances of PunVoiceClient found in the scene. Using a random instance.", objects.Length);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_19 = ((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(L_19, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
		PunVoiceClientU5BU5D_tA9E595CE512FF5D14568F8D20D4D2D0424190234* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = ((int32_t)(((RuntimeArray*)L_23)->max_length));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_25);
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_20, _stringLiteral4A6311C62451843E33262D7C8190CB31A3FDF66A, L_22);
	}

IL_00a6:
	{
		// instance.Logger.LogInfo("PunVoiceClient singleton instance is now set.");
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_26 = ((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(L_26, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28;
		L_28 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_27);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_27, _stringLiteral89D07FA9289A89F82E6B227F7EDD2C8EF9F9D210, L_28);
	}

IL_00bf:
	{
		// return instance;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_29 = ((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44;
		return L_29;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::get_UsePunAppSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_get_UsePunAppSettings_m12F6E36C38A129B83F417F0FAE30F1E0230E9916 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	{
		// return this.usePunAppSettings;
		bool L_0 = __this->___usePunAppSettings_45;
		return L_0;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::set_UsePunAppSettings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_set_UsePunAppSettings_mBE253879C55B56424340AC5AC0CE873D0143500B (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// this.usePunAppSettings = value;
		bool L_0 = ___0_value;
		__this->___usePunAppSettings_45 = L_0;
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::get_UsePunAuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_get_UsePunAuthValues_m64D747A136589F274AC4CC9EB70192843760D51F (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	{
		// return this.usePunAuthValues;
		bool L_0 = __this->___usePunAuthValues_46;
		return L_0;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::set_UsePunAuthValues(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_set_UsePunAuthValues_mB679E85BA6406739BFA051BDECEA509A7B418F74 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// this.usePunAuthValues = value;
		bool L_0 = ___0_value;
		__this->___usePunAuthValues_46 = L_0;
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::ConnectAndJoinRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_ConnectAndJoinRoom_m80E65D6D1DEA18B6AC61FC6F0BC27CCC9FC9207B (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C46FC59ED4CA794BC2A3692B87AA7D0CB46837);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PhotonNetwork.InRoom)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_InRoom_mFBE0C1A516C34FBAD9923933C73E07080FDA199D(NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// this.Logger.LogError("Cannot connect and join if PUN is not joined.");
		RuntimeObject* L_1;
		L_1 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_1, _stringLiteral24C46FC59ED4CA794BC2A3692B87AA7D0CB46837, L_2);
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// if (this.Connect())
		bool L_3;
		L_3 = PunVoiceClient_Connect_m8756334A88962C84A6E245333E62757D43904645(__this, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// this.clientCalledConnectAndJoin = true;
		__this->___clientCalledConnectAndJoin_39 = (bool)1;
		// this.clientCalledDisconnect = false;
		__this->___clientCalledDisconnect_40 = (bool)0;
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// this.Logger.LogError("Connecting to server failed.");
		RuntimeObject* L_4;
		L_4 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_4, _stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55, L_5);
		// return false;
		return (bool)0;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_Disconnect_mD121BB1E106EAFD8CC71EAD5BB17641842493377 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral291D2339FDB7548402B5F73BE1A37E590E787397);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.Client.IsConnected)
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_0;
		L_0 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = LoadBalancingClient_get_IsConnected_mD98F9FFFBEFD1932A0898268507DFBE9BEE41257(L_0, NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// this.Logger.LogError("Cannot Disconnect if not connected.");
		RuntimeObject* L_2;
		L_2 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_2, _stringLiteral291D2339FDB7548402B5F73BE1A37E590E787397, L_3);
		// return;
		return;
	}

IL_0023:
	{
		// this.clientCalledDisconnect = true;
		__this->___clientCalledDisconnect_40 = (bool)1;
		// this.clientCalledConnectAndJoin = false;
		__this->___clientCalledConnectAndJoin_39 = (bool)0;
		// this.clientCalledConnectOnly = false;
		__this->___clientCalledConnectOnly_41 = (bool)0;
		// this.Client.Disconnect();
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_4;
		L_4 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_4);
		LoadBalancingClient_Disconnect_m9E92F0FD6E20FA7FCB107FD132A62F6DEEC9AEF8(L_4, ((int32_t)15), NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_Start_m6665ED377B962819A27C2773377E7F989B9B3B0E (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493FE7F94FDC85045F0BE8971C31BED9290C8526);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == this)
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0;
		L_0 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// if (this.UsePrimaryRecorder)
		bool L_2;
		L_2 = VoiceConnection_get_UsePrimaryRecorder_m50587F8EEAE8AA3D379D8738E72F9128EE2B41C5_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		// if (this.PrimaryRecorder != null)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_3;
		L_3 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// AddRecorder(this.PrimaryRecorder);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_5;
		L_5 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline(__this, NULL);
		bool L_6;
		L_6 = VoiceConnection_AddRecorder_mB900C30435DC2504DD5B8D1AC09EFF869026FC34(__this, L_5, NULL);
		return;
	}

IL_0031:
	{
		// this.Logger.LogError("Primary Recorder is not set.");
		RuntimeObject* L_7;
		L_7 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_7, _stringLiteral493FE7F94FDC85045F0BE8971C31BED9290C8526, L_8);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnEnable_mB6A711AD76ACE1797B337166256E8E16123AB6A8 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunVoiceClient_OnPunStateChanged_mBF0AD9457978A53E402CF40060EB0D76FE13E3B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == this)
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0;
		L_0 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// PhotonNetwork.NetworkingClient.StateChanged += this.OnPunStateChanged;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_2;
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_3 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_3, __this, (intptr_t)((void*)PunVoiceClient_OnPunStateChanged_mBF0AD9457978A53E402CF40060EB0D76FE13E3B1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		LoadBalancingClient_add_StateChanged_mA6384FF2BBFAD74989F27734C0A2251F6F470EB9(L_2, L_3, NULL);
		// this.FollowPun(); // in case this is enabled or activated late
		PunVoiceClient_FollowPun_m04A69E52C97400CC819F8D3E24B05FDF2C5A1B59(__this, NULL);
		// this.clientCalledConnectAndJoin = false;
		__this->___clientCalledConnectAndJoin_39 = (bool)0;
		// this.clientCalledConnectOnly = false;
		__this->___clientCalledConnectOnly_41 = (bool)0;
		// this.clientCalledDisconnect = false;
		__this->___clientCalledDisconnect_40 = (bool)0;
		// this.internalDisconnect = false;
		__this->___internalDisconnect_42 = (bool)0;
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnDisable_mC61CF240BA6DBD671072B7C0BF6A783313A55459 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunVoiceClient_OnPunStateChanged_mBF0AD9457978A53E402CF40060EB0D76FE13E3B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		ConnectionHandler_OnDisable_m6EE13B313754725DB1AA164CE82EC2CF4797B89E(__this, NULL);
		// if (Instance == this)
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0;
		L_0 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// PhotonNetwork.NetworkingClient.StateChanged -= this.OnPunStateChanged;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_2;
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_3 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_3, __this, (intptr_t)((void*)PunVoiceClient_OnPunStateChanged_mBF0AD9457978A53E402CF40060EB0D76FE13E3B1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		LoadBalancingClient_remove_StateChanged_m05D0CADDC74CE72BDD2CC9BBCBA8257D9CACD85B(L_2, L_3, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnDestroy_mE3F181687A0DFDC2DE4BF4D09689DDA217A9E765 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B5C4D03399EEA9B7DB3B2A1F30F170F7ED0E222);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDestroy();
		VoiceConnection_OnDestroy_mE728411AFE39DCE501501CD2317DE93E08BDCD68(__this, NULL);
		// if (instance == this)
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0 = ((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// instance.Logger.LogInfo("PunVoiceClient singleton instance is being reset because destroyed.");
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_2 = ((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_3, _stringLiteral7B5C4D03399EEA9B7DB3B2A1F30F170F7ED0E222, L_4);
		// instance = null;
		((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44 = (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_il2cpp_TypeInfo_var))->___instance_44), (void*)(PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1*)NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnPunStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnPunStateChanged_mBF0AD9457978A53E402CF40060EB0D76FE13E3B1 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, int32_t ___0_fromState, int32_t ___1_toState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9C336C7B61757E192B024456361E39B04C988EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Logger.LogInfo("OnPunStateChanged from {0} to {1}", fromState, toState);
		RuntimeObject* L_0;
		L_0 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_fromState;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		int32_t L_7 = ___1_toState;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_0, _stringLiteralF9C336C7B61757E192B024456361E39B04C988EE, L_6);
		// this.FollowPun(toState);
		int32_t L_10 = ___1_toState;
		PunVoiceClient_FollowPun_m6E32B34017FC46A662038E5C78EAB081986C2985(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnVoiceStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnVoiceStateChanged_m716CF783086082B5578F6CB4AE445B45812DC5D9 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, int32_t ___0_fromState, int32_t ___1_toState, const RuntimeMethod* method) 
{
	{
		// base.OnVoiceStateChanged(fromState, toState);
		int32_t L_0 = ___0_fromState;
		int32_t L_1 = ___1_toState;
		VoiceConnection_OnVoiceStateChanged_mBD5AAABDDFD4D65AC0B7DD1FC54E55E931BB0D99(__this, L_0, L_1, NULL);
		// if (toState == ClientState.Disconnected)
		int32_t L_2 = ___1_toState;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_003d;
		}
	}
	{
		// if (this.internalDisconnect)
		bool L_3 = __this->___internalDisconnect_42;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// this.internalDisconnect = false;
		__this->___internalDisconnect_42 = (bool)0;
		goto IL_0071;
	}

IL_001e:
	{
		// else if (!this.clientCalledDisconnect)
		bool L_4 = __this->___clientCalledDisconnect_40;
		if (L_4)
		{
			goto IL_0071;
		}
	}
	{
		// this.clientCalledDisconnect = this.Client.DisconnectedCause == DisconnectCause.DisconnectByClientLogic;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_5;
		L_5 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = LoadBalancingClient_get_DisconnectedCause_m7A948064631F3E7A5D1BFA24CCA308852AB8C08D_inline(L_5, NULL);
		__this->___clientCalledDisconnect_40 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)15)))? 1 : 0);
		goto IL_0071;
	}

IL_003d:
	{
		// else if (toState == ClientState.ConnectedToMasterServer)
		int32_t L_7 = ___1_toState;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0071;
		}
	}
	{
		// if (this.internalConnect)
		bool L_8 = __this->___internalConnect_43;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// this.internalConnect = false;
		__this->___internalConnect_43 = (bool)0;
		goto IL_0071;
	}

IL_0053:
	{
		// else if (!this.clientCalledConnectOnly && !this.clientCalledConnectAndJoin)
		bool L_9 = __this->___clientCalledConnectOnly_41;
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		bool L_10 = __this->___clientCalledConnectAndJoin_39;
		if (L_10)
		{
			goto IL_0071;
		}
	}
	{
		// this.clientCalledConnectOnly = true;
		__this->___clientCalledConnectOnly_41 = (bool)1;
		// this.clientCalledDisconnect = false;
		__this->___clientCalledDisconnect_40 = (bool)0;
	}

IL_0071:
	{
		// this.FollowPun(toState);
		int32_t L_11 = ___1_toState;
		PunVoiceClient_FollowPun_m6E32B34017FC46A662038E5C78EAB081986C2985(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::FollowPun(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_FollowPun_m6E32B34017FC46A662038E5C78EAB081986C2985 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, int32_t ___0_toState, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_toState;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)9))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___0_toState;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)14)))) <= ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}

IL_000c:
	{
		// this.FollowPun();
		PunVoiceClient_FollowPun_m04A69E52C97400CC819F8D3E24B05FDF2C5A1B59(__this, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PunVoiceClient::InstantiateSpeakerForRemoteVoice(System.Int32,System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* PunVoiceClient_InstantiateSpeakerForRemoteVoice_mB4B3857522D7C4AD139E3957FC8E5AA53DEBFECB (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, int32_t ___0_playerId, uint8_t ___1_voiceId, RuntimeObject* ___2_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_mC1E04F504797B33976B8C685BAD42A0AC1D478BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral491DFF307155D060DE2930B3A4DACC763B9B9992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral631CCB3B38A24A985A55AD1E70ABA1395491A996);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6458CA1942CDE521844E158F0EC0CC46DFEC227B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B99C5BB86AD28992FE3EA8391C088EA95489451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96F687665AEA502398F1370CEE347C90A340B677);
		s_Il2CppMethodInitialized = true;
	}
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* V_0 = NULL;
	PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* V_1 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	RuntimeObject* G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	RuntimeObject* G_B6_5 = NULL;
	{
		// if (userData == null) // Recorder w/o PhotonVoiceView: probably created due to this.UsePrimaryRecorder = true
		RuntimeObject* L_0 = ___2_userData;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// this.Logger.LogInfo("Creating Speaker for remote voice p#{0} v#{1} PunVoiceClient Primary Recorder (userData == null).", playerId, voiceId);
		RuntimeObject* L_1;
		L_1 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___0_playerId;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		uint8_t L_8 = ___1_voiceId;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_1, _stringLiteral491DFF307155D060DE2930B3A4DACC763B9B9992, L_7);
		// return this.InstantiateSpeakerPrefab(this.gameObject, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_12;
		L_12 = VoiceConnection_InstantiateSpeakerPrefab_mDD60AB3AD1E77FD893A7FB8FD131E099CDAAB8A1(__this, L_11, (bool)1, NULL);
		return L_12;
	}

IL_0039:
	{
		// if (!(userData is int))
		RuntimeObject* L_13 = ___2_userData;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		// this.Logger.LogWarning("UserData ({0}) does not contain PhotonViewId. Remote voice p#{1} v#{2} not linked. Do you have a Recorder not used with a PhotonVoiceView? is this expected?",
		//     userData == null ? "null" : userData.ToString(), playerId, voiceId);
		RuntimeObject* L_14;
		L_14 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		RuntimeObject* L_17 = ___2_userData;
		G_B4_0 = 0;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = _stringLiteral96F687665AEA502398F1370CEE347C90A340B677;
		G_B4_4 = L_14;
		if (!L_17)
		{
			G_B5_0 = 0;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = _stringLiteral96F687665AEA502398F1370CEE347C90A340B677;
			G_B5_4 = L_14;
			goto IL_005f;
		}
	}
	{
		RuntimeObject* L_18 = ___2_userData;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_0064;
	}

IL_005f:
	{
		G_B6_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_0064:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = G_B6_3;
		int32_t L_21 = ___0_playerId;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		uint8_t L_25 = ___1_voiceId;
		uint8_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_27);
		NullCheck(G_B6_5);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, G_B6_5, G_B6_4, L_24);
		// return null;
		return (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE*)NULL;
	}

IL_007e:
	{
		// int photonViewId = (int)userData;
		RuntimeObject* L_28 = ___2_userData;
		// PhotonView photonView = PhotonView.Find(photonViewId);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_29;
		L_29 = PhotonView_Find_m0882E2232D4EAB45F754B4FAFEE5E6EA54DF7707(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_28, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		V_0 = L_29;
		// if (null == photonView || !photonView)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_30 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_30, NULL);
		if (L_31)
		{
			goto IL_009b;
		}
	}
	{
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_32 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_32, NULL);
		if (L_33)
		{
			goto IL_00c9;
		}
	}

IL_009b:
	{
		// this.Logger.LogWarning("No PhotonView with ID {0} found. Remote voice p#{1} v#{2} not linked.", userData, playerId, voiceId);
		RuntimeObject* L_34;
		L_34 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_35;
		RuntimeObject* L_37 = ___2_userData;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_36;
		int32_t L_39 = ___0_playerId;
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_41);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_38;
		uint8_t L_43 = ___1_voiceId;
		uint8_t L_44 = L_43;
		RuntimeObject* L_45 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_45);
		NullCheck(L_34);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_34, _stringLiteral631CCB3B38A24A985A55AD1E70ABA1395491A996, L_42);
		// return null;
		return (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE*)NULL;
	}

IL_00c9:
	{
		// PhotonVoiceView photonVoiceView = photonView.GetComponent<PhotonVoiceView>();
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_46 = V_0;
		NullCheck(L_46);
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_47;
		L_47 = Component_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_mC1E04F504797B33976B8C685BAD42A0AC1D478BB(L_46, Component_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_mC1E04F504797B33976B8C685BAD42A0AC1D478BB_RuntimeMethod_var);
		V_1 = L_47;
		// if (null == photonVoiceView || !photonVoiceView)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_48 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_48, NULL);
		if (L_49)
		{
			goto IL_00e1;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_50 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_50, NULL);
		if (L_51)
		{
			goto IL_010f;
		}
	}

IL_00e1:
	{
		// this.Logger.LogWarning("No PhotonVoiceView attached to the PhotonView with ID {0}. Remote voice p#{1} v#{2} not linked.", userData, playerId, voiceId);
		RuntimeObject* L_52;
		L_52 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_53;
		RuntimeObject* L_55 = ___2_userData;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_55);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = L_54;
		int32_t L_57 = ___0_playerId;
		int32_t L_58 = L_57;
		RuntimeObject* L_59 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_59);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = L_56;
		uint8_t L_61 = ___1_voiceId;
		uint8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_63);
		NullCheck(L_52);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_52, _stringLiteral7B99C5BB86AD28992FE3EA8391C088EA95489451, L_60);
		// return null;
		return (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE*)NULL;
	}

IL_010f:
	{
		// this.Logger.LogInfo("Using PhotonVoiceView {0} Speaker for remote voice p#{1} v#{2}.", userData, playerId, voiceId);
		RuntimeObject* L_64;
		L_64 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = L_65;
		RuntimeObject* L_67 = ___2_userData;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_67);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = L_66;
		int32_t L_69 = ___0_playerId;
		int32_t L_70 = L_69;
		RuntimeObject* L_71 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_70);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_71);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_71);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = L_68;
		uint8_t L_73 = ___1_voiceId;
		uint8_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_75);
		NullCheck(L_64);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_64, _stringLiteral6458CA1942CDE521844E158F0EC0CC46DFEC227B, L_72);
		// return photonVoiceView.SpeakerInUse;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_76 = V_1;
		NullCheck(L_76);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_77;
		L_77 = PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline(L_76, NULL);
		return L_77;
	}
}
// System.String Photon.Voice.PUN.PunVoiceClient::GetVoiceRoomName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PunVoiceClient_GetVoiceRoomName_mA053A4FD7EE4265C879845FBEC8801A3176EC672 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD193818D7EE1F56481A87F5FE7594803C22FC12B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PhotonNetwork.InRoom)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_InRoom_mFBE0C1A516C34FBAD9923933C73E07080FDA199D(NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// return string.Format("{0}{1}", PhotonNetwork.CurrentRoom.Name, VoiceRoomNameSuffix);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_1;
		L_1 = PhotonNetwork_get_CurrentRoom_m72D3601299E109EED858E132DE1BD316226BA38D(NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline(L_1, NULL);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_2, _stringLiteralD193818D7EE1F56481A87F5FE7594803C22FC12B, NULL);
		return L_3;
	}

IL_0021:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::ConnectOrJoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_ConnectOrJoin_m46EA563B086D9AD9A5BCD392039FACE9C9ADFA3F (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7AAFC814E837F74C65B57D9FAB598FE911F039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E9D80CEFB56309B3CAD8F0BE6870DBD9792E758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42A9379093D61078CD6096425E2B43AFB142C8C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E18A432BCD116096E8D0F03E0E8A8A2AE263F2A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* G_B9_0 = NULL;
	PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* G_B7_0 = NULL;
	PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* G_B10_1 = NULL;
	{
		// switch (this.ClientState)
		int32_t L_0;
		L_0 = VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)14))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)15))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_00a7;
	}

IL_0019:
	{
		// this.Logger.LogInfo("PUN joined room, now connecting Voice client");
		RuntimeObject* L_4;
		L_4 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_4, _stringLiteral42A9379093D61078CD6096425E2B43AFB142C8C4, L_5);
		// if (!this.Connect())
		bool L_6;
		L_6 = PunVoiceClient_Connect_m8756334A88962C84A6E245333E62757D43904645(__this, NULL);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// this.Logger.LogError("Connecting to server failed.");
		RuntimeObject* L_7;
		L_7 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_7, _stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55, L_8);
		return;
	}

IL_004c:
	{
		// this.internalConnect = this.AutoConnectAndJoin && !this.clientCalledConnectOnly && !this.clientCalledConnectAndJoin;
		bool L_9 = __this->___AutoConnectAndJoin_36;
		G_B7_0 = __this;
		if (!L_9)
		{
			G_B9_0 = __this;
			goto IL_0068;
		}
	}
	{
		bool L_10 = __this->___clientCalledConnectOnly_41;
		G_B8_0 = G_B7_0;
		if (L_10)
		{
			G_B9_0 = G_B7_0;
			goto IL_0068;
		}
	}
	{
		bool L_11 = __this->___clientCalledConnectAndJoin_39;
		G_B10_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		G_B10_1 = G_B8_0;
		goto IL_0069;
	}

IL_0068:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_0069:
	{
		NullCheck(G_B10_1);
		G_B10_1->___internalConnect_43 = (bool)G_B10_0;
		// break;
		return;
	}

IL_006f:
	{
		// this.Logger.LogInfo("PUN joined room, now joining Voice room");
		RuntimeObject* L_12;
		L_12 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_12, _stringLiteral3E9D80CEFB56309B3CAD8F0BE6870DBD9792E758, L_13);
		// if (!this.JoinRoom(GetVoiceRoomName()))
		String_t* L_14;
		L_14 = PunVoiceClient_GetVoiceRoomName_mA053A4FD7EE4265C879845FBEC8801A3176EC672(NULL);
		bool L_15;
		L_15 = PunVoiceClient_JoinRoom_mDA863B1A7C056BA0B1782289CE6139F96B33EC0C(__this, L_14, NULL);
		if (L_15)
		{
			goto IL_00cb;
		}
	}
	{
		// this.Logger.LogError("Joining a voice room failed.");
		RuntimeObject* L_16;
		L_16 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_16, _stringLiteral9E18A432BCD116096E8D0F03E0E8A8A2AE263F2A, L_17);
		// break;
		return;
	}

IL_00a7:
	{
		// this.Logger.LogWarning("PUN joined room, Voice client is busy ({0}). Is this expected?", this.ClientState);
		RuntimeObject* L_18;
		L_18 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		int32_t L_21;
		L_21 = VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694(__this, NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_18, _stringLiteral0C7AAFC814E837F74C65B57D9FAB598FE911F039, L_20);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_Connect_m8756334A88962C84A6E245333E62757D43904645 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* V_0 = NULL;
	{
		// AppSettings settings = null;
		V_0 = (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7*)NULL;
		// if (this.usePunAppSettings)
		bool L_0 = __this->___usePunAppSettings_45;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		// settings = new AppSettings();
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_1 = (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7*)il2cpp_codegen_object_new(AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43(L_1, NULL);
		V_0 = L_1;
		// settings = PhotonNetwork.PhotonServerSettings.AppSettings.CopyTo(settings); // creates an independent copy (cause we need to modify it slightly)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* L_2;
		L_2 = PhotonNetwork_get_PhotonServerSettings_mEB0FD5D91970368EE4D23AA12213DAD57B8D1097(NULL);
		NullCheck(L_2);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_3 = L_2->___AppSettings_4;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_4 = V_0;
		NullCheck(L_3);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_5;
		L_5 = AppSettings_CopyTo_mE304EF3079424281AC51411AB237969412FD6F93(L_3, L_4, NULL);
		V_0 = L_5;
		// if (!string.IsNullOrEmpty(PhotonNetwork.CloudRegion))
		String_t* L_6;
		L_6 = PhotonNetwork_get_CloudRegion_mB5B2C20FAB0892E2CCBCEF249C2146497AECB16E(NULL);
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		// settings.FixedRegion = PhotonNetwork.CloudRegion; // makes sure the voice connection follows into the same cloud region (as PUN uses now).
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = PhotonNetwork_get_CloudRegion_mB5B2C20FAB0892E2CCBCEF249C2146497AECB16E(NULL);
		NullCheck(L_8);
		L_8->___FixedRegion_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___FixedRegion_6), (void*)L_9);
	}

IL_0038:
	{
		// this.Client.SerializationProtocol = PhotonNetwork.NetworkingClient.SerializationProtocol;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_10;
		L_10 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_11 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = LoadBalancingClient_get_SerializationProtocol_m9A1630A2C16C42D3914CA6787453B4BCCB9AD756(L_11, NULL);
		NullCheck(L_10);
		LoadBalancingClient_set_SerializationProtocol_m1DF8CED4E6C037D95C5DB7B2562AA934057FDC12(L_10, L_12, NULL);
	}

IL_004d:
	{
		// if (this.UsePunAuthValues)
		bool L_13;
		L_13 = PunVoiceClient_get_UsePunAuthValues_m64D747A136589F274AC4CC9EB70192843760D51F_inline(__this, NULL);
		if (!L_13)
		{
			goto IL_00c3;
		}
	}
	{
		// if (PhotonNetwork.AuthValues != null)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_14;
		L_14 = PhotonNetwork_get_AuthValues_mF4E6173BA3C5E848ABF50755644C01CF6DB7D341(NULL);
		if (!L_14)
		{
			goto IL_0099;
		}
	}
	{
		// if (this.Client.AuthValues == null)
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_15;
		L_15 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_15);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_16;
		L_16 = LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline(L_15, NULL);
		if (L_16)
		{
			goto IL_0079;
		}
	}
	{
		// this.Client.AuthValues = new AuthenticationValues();
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_17;
		L_17 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_18 = (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7*)il2cpp_codegen_object_new(AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		AuthenticationValues__ctor_mFA23E096E1262DF1C8167BD077DD17C7B1BE9D9D(L_18, NULL);
		NullCheck(L_17);
		LoadBalancingClient_set_AuthValues_mAFB66C3CFA04587CBA1A60711581B2BA6C6FD84C_inline(L_17, L_18, NULL);
	}

IL_0079:
	{
		// this.Client.AuthValues = PhotonNetwork.AuthValues.CopyTo(this.Client.AuthValues);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_19;
		L_19 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_20;
		L_20 = PhotonNetwork_get_AuthValues_mF4E6173BA3C5E848ABF50755644C01CF6DB7D341(NULL);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_21;
		L_21 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_21);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_22;
		L_22 = LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline(L_21, NULL);
		NullCheck(L_20);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_23;
		L_23 = AuthenticationValues_CopyTo_m7E765A067382A14BB5E1754A652A2B56D293E9C5(L_20, L_22, NULL);
		NullCheck(L_19);
		LoadBalancingClient_set_AuthValues_mAFB66C3CFA04587CBA1A60711581B2BA6C6FD84C_inline(L_19, L_23, NULL);
	}

IL_0099:
	{
		// this.Client.AuthMode = PhotonNetwork.NetworkingClient.AuthMode;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_24;
		L_24 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_25 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___AuthMode_5;
		NullCheck(L_24);
		((LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_24)->___AuthMode_5 = L_26;
		// this.Client.EncryptionMode = PhotonNetwork.NetworkingClient.EncryptionMode;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_27;
		L_27 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_28 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_2;
		NullCheck(L_28);
		int32_t L_29 = L_28->___EncryptionMode_6;
		NullCheck(L_27);
		((LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_27)->___EncryptionMode_6 = L_29;
	}

IL_00c3:
	{
		// return this.ConnectUsingSettings(settings);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_30 = V_0;
		bool L_31;
		L_31 = VirtualFuncInvoker1< bool, AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* >::Invoke(7 /* System.Boolean Photon.Voice.Unity.VoiceConnection::ConnectUsingSettings(Photon.Realtime.AppSettings) */, __this, L_30);
		return L_31;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::JoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_JoinRoom_mDA863B1A7C056BA0B1782289CE6139F96B33EC0C (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, String_t* ___0_voiceRoomName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3719DC7FB393EC6A0A18F97B5ACA5A75ED8480B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(voiceRoomName))
		String_t* L_0 = ___0_voiceRoomName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// this.Logger.LogError("Voice room name is null or empty.");
		RuntimeObject* L_2;
		L_2 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_2, _stringLiteralD3719DC7FB393EC6A0A18F97B5ACA5A75ED8480B, L_3);
		// return false;
		return (bool)0;
	}

IL_001f:
	{
		// this.voiceRoomParams.RoomName = voiceRoomName;
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_4 = __this->___voiceRoomParams_38;
		String_t* L_5 = ___0_voiceRoomName;
		NullCheck(L_4);
		L_4->___RoomName_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___RoomName_0), (void*)L_5);
		// return this.Client.OpJoinOrCreateRoom(this.voiceRoomParams);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_6;
		L_6 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_7 = __this->___voiceRoomParams_38;
		NullCheck(L_6);
		bool L_8;
		L_8 = LoadBalancingClient_OpJoinOrCreateRoom_m09D399AF025F96C6CD7E93EB2F4C2EE3600CE26F(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::FollowPun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_FollowPun_m04A69E52C97400CC819F8D3E24B05FDF2C5A1B59 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral233B5AC8FCFCA611B06590C6EEDDEE7245A9BB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral337A20AAFBA6AC7D9D6BFF4BC9DCE14D072BAA21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B7BDCD055E8976EC2783C6D6E53B0E590E60488);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBBF549D0FA6EF293724A95ADA890AE4CABDC7CE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (PhotonNetwork.OfflineMode)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_OfflineMode_m57596042EE764187C75DEAC48E6F420799C192C2_inline(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (PhotonNetwork.NetworkClientState == this.ClientState)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = PhotonNetwork_get_NetworkClientState_m14926C92B031C5788348074278770D6CB848BE7D(NULL);
		int32_t L_2;
		L_2 = VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_00d9;
		}
	}
	{
		// if (PhotonNetwork.InRoom && this.AutoConnectAndJoin)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = PhotonNetwork_get_InRoom_mFBE0C1A516C34FBAD9923933C73E07080FDA199D(NULL);
		if (!L_3)
		{
			goto IL_008d;
		}
	}
	{
		bool L_4 = __this->___AutoConnectAndJoin_36;
		if (!L_4)
		{
			goto IL_008d;
		}
	}
	{
		// string expectedRoomName = GetVoiceRoomName();
		String_t* L_5;
		L_5 = PunVoiceClient_GetVoiceRoomName_mA053A4FD7EE4265C879845FBEC8801A3176EC672(NULL);
		V_0 = L_5;
		// string currentRoomName = this.Client.CurrentRoom.Name;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_6;
		L_6 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_6);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_7;
		L_7 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline(L_7, NULL);
		V_1 = L_8;
		// if (!currentRoomName.Equals(expectedRoomName))
		String_t* L_9 = V_1;
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11;
		L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_00d8;
		}
	}
	{
		// this.Logger.LogWarning(
		//     "Voice room mismatch: Expected:\"{0}\" Current:\"{1}\", leaving the second to join the first.",
		//     expectedRoomName, currentRoomName);
		RuntimeObject* L_12;
		L_12 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_12, _stringLiteralBBBF549D0FA6EF293724A95ADA890AE4CABDC7CE, L_16);
		// if (!this.Client.OpLeaveRoom(false))
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_18;
		L_18 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = LoadBalancingClient_OpLeaveRoom_m7537326F58896C437BC18C40657D698602D46DA1(L_18, (bool)0, (bool)0, NULL);
		if (L_19)
		{
			goto IL_00d8;
		}
	}
	{
		// this.Logger.LogError("Leaving the current voice room failed.");
		RuntimeObject* L_20;
		L_20 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_20, _stringLiteral5B7BDCD055E8976EC2783C6D6E53B0E590E60488, L_21);
		return;
	}

IL_008d:
	{
		// else if (this.ClientState == ClientState.ConnectedToMasterServer && this.AutoLeaveAndDisconnect && !this.clientCalledConnectAndJoin && !this.clientCalledConnectOnly)
		int32_t L_22;
		L_22 = VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694(__this, NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_00d8;
		}
	}
	{
		bool L_23 = __this->___AutoLeaveAndDisconnect_37;
		if (!L_23)
		{
			goto IL_00d8;
		}
	}
	{
		bool L_24 = __this->___clientCalledConnectAndJoin_39;
		if (L_24)
		{
			goto IL_00d8;
		}
	}
	{
		bool L_25 = __this->___clientCalledConnectOnly_41;
		if (L_25)
		{
			goto IL_00d8;
		}
	}
	{
		// this.Logger.LogWarning("Unexpected: PUN and Voice clients have the same client state: ConnectedToMasterServer, Disconnecting Voice client.");
		RuntimeObject* L_26;
		L_26 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27;
		L_27 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_26);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_26, _stringLiteral233B5AC8FCFCA611B06590C6EEDDEE7245A9BB7A, L_27);
		// this.internalDisconnect = true;
		__this->___internalDisconnect_42 = (bool)1;
		// this.Client.Disconnect();
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_28;
		L_28 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_28);
		LoadBalancingClient_Disconnect_m9E92F0FD6E20FA7FCB107FD132A62F6DEEC9AEF8(L_28, ((int32_t)15), NULL);
	}

IL_00d8:
	{
		// return;
		return;
	}

IL_00d9:
	{
		// if (PhotonNetwork.InRoom)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = PhotonNetwork_get_InRoom_mFBE0C1A516C34FBAD9923933C73E07080FDA199D(NULL);
		if (!L_29)
		{
			goto IL_00ff;
		}
	}
	{
		// if (this.clientCalledConnectAndJoin || this.AutoConnectAndJoin && !this.clientCalledDisconnect)
		bool L_30 = __this->___clientCalledConnectAndJoin_39;
		if (L_30)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_31 = __this->___AutoConnectAndJoin_36;
		if (!L_31)
		{
			goto IL_014d;
		}
	}
	{
		bool L_32 = __this->___clientCalledDisconnect_40;
		if (L_32)
		{
			goto IL_014d;
		}
	}

IL_00f8:
	{
		// this.ConnectOrJoin();
		PunVoiceClient_ConnectOrJoin_m46EA563B086D9AD9A5BCD392039FACE9C9ADFA3F(__this, NULL);
		return;
	}

IL_00ff:
	{
		// else if (this.Client.InRoom && this.AutoLeaveAndDisconnect && !this.clientCalledConnectAndJoin && !this.clientCalledConnectOnly)
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_33;
		L_33 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = LoadBalancingClient_get_InRoom_m94253789BA5BD9C81534C4F9682B5E707EF08E78(L_33, NULL);
		if (!L_34)
		{
			goto IL_014d;
		}
	}
	{
		bool L_35 = __this->___AutoLeaveAndDisconnect_37;
		if (!L_35)
		{
			goto IL_014d;
		}
	}
	{
		bool L_36 = __this->___clientCalledConnectAndJoin_39;
		if (L_36)
		{
			goto IL_014d;
		}
	}
	{
		bool L_37 = __this->___clientCalledConnectOnly_41;
		if (L_37)
		{
			goto IL_014d;
		}
	}
	{
		// this.Logger.LogInfo("PUN left room, disconnecting Voice");
		RuntimeObject* L_38;
		L_38 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39;
		L_39 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_38);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_38, _stringLiteral337A20AAFBA6AC7D9D6BFF4BC9DCE14D072BAA21, L_39);
		// this.internalDisconnect = true;
		__this->___internalDisconnect_42 = (bool)1;
		// this.Client.Disconnect();
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_40;
		L_40 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_40);
		LoadBalancingClient_Disconnect_m9E92F0FD6E20FA7FCB107FD132A62F6DEEC9AEF8(L_40, ((int32_t)15), NULL);
	}

IL_014d:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient__ctor_mBEE26AC05A44F05948281566A6031D35558052F4 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool AutoConnectAndJoin = true;
		__this->___AutoConnectAndJoin_36 = (bool)1;
		// public bool AutoLeaveAndDisconnect = true;
		__this->___AutoLeaveAndDisconnect_37 = (bool)1;
		// private EnterRoomParams voiceRoomParams = new EnterRoomParams
		// {
		//     RoomOptions = new RoomOptions { IsVisible = false }
		// };
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_0 = (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9*)il2cpp_codegen_object_new(EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8(L_0, NULL);
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_1 = L_0;
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_2 = (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23*)il2cpp_codegen_object_new(RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8(L_2, NULL);
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_3 = L_2;
		NullCheck(L_3);
		RoomOptions_set_IsVisible_m5D9ACD84A11FD6E37F023C2181653923AEE7AB25_inline(L_3, (bool)0, NULL);
		NullCheck(L_1);
		L_1->___RoomOptions_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___RoomOptions_1), (void*)L_3);
		__this->___voiceRoomParams_38 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceRoomParams_38), (void*)L_1);
		// private bool usePunAppSettings = true;
		__this->___usePunAppSettings_45 = (bool)1;
		// private bool usePunAuthValues = true;
		__this->___usePunAuthValues_46 = (bool)1;
		VoiceConnection__ctor_mDD2B56D6410FC2EFB93CE951934278B858BD7D52(__this, NULL);
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
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_Awake_mD0A95C8E60D4A6175198B549D7C1B0AFFD3EE40D (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_mC1E04F504797B33976B8C685BAD42A0AC1D478BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.photonVoiceView = this.GetComponent<PhotonVoiceView>();
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_0;
		L_0 = Component_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_mC1E04F504797B33976B8C685BAD42A0AC1D478BB(__this, Component_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_mC1E04F504797B33976B8C685BAD42A0AC1D478BB_RuntimeMethod_var);
		__this->___photonVoiceView_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___photonVoiceView_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_Update_mC9C4FAB7A18B7DEE6F5AC853C3BB5D0770ED5111 (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4816459EC827354ABCD3F7B7D8543A20050D2B0D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.MaxLogs();
		VoiceDebugScript_MaxLogs_mC5F627CE9ED3A19418607F0FE7F3F6ACB05A1DB5(__this, NULL);
		// if (this.photonVoiceView.RecorderInUse != null)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_0 = __this->___photonVoiceView_5;
		NullCheck(L_0);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_1;
		L_1 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00d1;
		}
	}
	{
		// if (this.TestUsingAudioClip)
		bool L_3 = __this->___TestUsingAudioClip_8;
		if (!L_3)
		{
			goto IL_008e;
		}
	}
	{
		// if (ReferenceEquals(null, this.TestAudioClip) || !this.TestAudioClip)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___TestAudioClip_7;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___TestAudioClip_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}

IL_0039:
	{
		// Debug.LogError("Set an AudioClip first");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4816459EC827354ABCD3F7B7D8543A20050D2B0D, NULL);
		goto IL_008e;
	}

IL_0045:
	{
		// this.photonVoiceView.RecorderInUse.SourceType = Recorder.InputSourceType.AudioClip;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_7 = __this->___photonVoiceView_5;
		NullCheck(L_7);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_8;
		L_8 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_7, NULL);
		NullCheck(L_8);
		Recorder_set_SourceType_m2DBF84AF542E7662A4302A0D20399C7FC5E1E13D(L_8, 1, NULL);
		// this.photonVoiceView.RecorderInUse.AudioClip = this.TestAudioClip;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_9 = __this->___photonVoiceView_5;
		NullCheck(L_9);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_10;
		L_10 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_9, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = __this->___TestAudioClip_7;
		NullCheck(L_10);
		Recorder_set_AudioClip_m6E9024961FCCF2BB761FBCE1A3133DD70FF7433A(L_10, L_11, NULL);
		// this.photonVoiceView.RecorderInUse.LoopAudioClip = true;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_12 = __this->___photonVoiceView_5;
		NullCheck(L_12);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_13;
		L_13 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_12, NULL);
		NullCheck(L_13);
		Recorder_set_LoopAudioClip_m22D046CB1C91C2275C4C23AE0B35CA7E4B22F014(L_13, (bool)1, NULL);
		// this.photonVoiceView.RecorderInUse.RestartRecording();
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_14 = __this->___photonVoiceView_5;
		NullCheck(L_14);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_15;
		L_15 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_14, NULL);
		NullCheck(L_15);
		bool L_16;
		L_16 = Recorder_RestartRecording_m98ABD12F631A9BD6CD54384C04B2CF0D85A03E2C(L_15, NULL);
	}

IL_008e:
	{
		// if (this.ForceRecordingAndTransmission)
		bool L_17 = __this->___ForceRecordingAndTransmission_6;
		if (!L_17)
		{
			goto IL_00b8;
		}
	}
	{
		// this.photonVoiceView.RecorderInUse.RecordingEnabled = true;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_18 = __this->___photonVoiceView_5;
		NullCheck(L_18);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_19;
		L_19 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_18, NULL);
		NullCheck(L_19);
		Recorder_set_RecordingEnabled_mC3AE50280E0B44300FCFFE31E4B36BDACAE2694A(L_19, (bool)1, NULL);
		// this.photonVoiceView.RecorderInUse.TransmitEnabled = true;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_20 = __this->___photonVoiceView_5;
		NullCheck(L_20);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_21;
		L_21 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_20, NULL);
		NullCheck(L_21);
		Recorder_set_TransmitEnabled_mB6B4C554D91CC63D61DBAE8D0C9FA948CD1E1496(L_21, (bool)1, NULL);
	}

IL_00b8:
	{
		// if (this.DisableVad)
		bool L_22 = __this->___DisableVad_9;
		if (!L_22)
		{
			goto IL_00d1;
		}
	}
	{
		// this.photonVoiceView.RecorderInUse.VoiceDetection = false;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_23 = __this->___photonVoiceView_5;
		NullCheck(L_23);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_24;
		L_24 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_23, NULL);
		NullCheck(L_24);
		Recorder_set_VoiceDetection_m52AF86118A2E56181935DA2F77B7437CDD06CAD0(L_24, (bool)0, NULL);
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::CantHearYou()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_CantHearYou_m01ACDDF685C91D52B833741F47D32E92C60E54E8 (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0992D3165D8489C42C7461FA83DBC4B3639330E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D4DA4488413E8C1FACD06BD54997CC4BCD9612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8718556EB9DCBD2575098EAB4C86419472AC7614);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PunVoiceClient.Instance.Client.InRoom)
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0;
		L_0 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_0);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_1;
		L_1 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = LoadBalancingClient_get_InRoom_m94253789BA5BD9C81534C4F9682B5E707EF08E78(L_1, NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError("local voice client is not joined to a voice room");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral8718556EB9DCBD2575098EAB4C86419472AC7614, NULL);
		return;
	}

IL_001c:
	{
		// if (!this.photonVoiceView.SpeakerInUse.IsLinked)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_3 = __this->___photonVoiceView_5;
		NullCheck(L_3);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_4;
		L_4 = PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Speaker_get_IsLinked_mF2F75BD8170F70E4E151117F1CBB059A67B1426C(L_4, NULL);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		// Debug.LogError("locally speaker not linked, trying late linking & asking anyway");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0992D3165D8489C42C7461FA83DBC4B3639330E8, NULL);
	}

IL_0038:
	{
		// this.photonView.RPC("CantHearYou", this.photonView.Owner, PunVoiceClient.Instance.Client.CurrentRoom.Name, PunVoiceClient.Instance.Client.LoadBalancingPeer.ServerIpAddress, PunVoiceClient.Instance.Client.AppVersion);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_6;
		L_6 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_7;
		L_7 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_7);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_8;
		L_8 = PhotonView_get_Owner_m99D611AD5C17B06E4490F75CFAC02C26AABC4A21_inline(L_7, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_11;
		L_11 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_11);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_12;
		L_12 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_11, NULL);
		NullCheck(L_12);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_13;
		L_13 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline(L_13, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_10;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_16;
		L_16 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_16);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_17;
		L_17 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_16, NULL);
		NullCheck(L_17);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_18;
		L_18 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = PhotonPeer_get_ServerIpAddress_m39ED914DE2093FDAE8B264A3AD9D3A97A02ED59D(L_18, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_19);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_15;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_21;
		L_21 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_21);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_22;
		L_22 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_21, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline(L_22, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		NullCheck(L_6);
		PhotonView_RPC_m985C1C00D88C33FABAE7B0C51AAB32C67A9D010B(L_6, _stringLiteral62D4DA4488413E8C1FACD06BD54997CC4BCD9612, L_8, L_20, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::CantHearYou(System.String,System.String,System.String,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_CantHearYou_mDB6CAF40DFA8618703797A58F620B73AC0FBDD63 (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, String_t* ___0_roomName, String_t* ___1_serverIp, String_t* ___2_appVersion, PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA ___3_photonMessageInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09AF8992981BCC4085724E4E3D0CF09319FCE9D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AAD5240183043F2AC9BF73F3688D7989AA5DD58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AB9A62FEB121241DAF6E027F68F70D4A6625235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2354DE780A5B69C0FEED47C58F7AAB3C88099215);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F5590E4C612C6C361CC9B6A7D645EEF121B6BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B2DA86F8E43CCF02C50633D307C27C7B2BBB4AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45CC5DDEA8717A99A5B870EE5DABECF5F7C7046A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5395A2F08284F5EAE81B1C322B82D7E19E4D4CF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral566067E3C1339B5F41E264C307AFED1E012B8F76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E7DA8E8875DDA9664D612DF021FC38E6BA46578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F700A67A6310E33DD094AAC545BF1871B6D467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBA0771AC72CD21EFF386416E9F6F5302398353F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0942E93D883771539D99BE72A7DDCB8AE98CDC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0C669958BFD1AB4581DA8AE8C62EA5A5074640C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD898110020367A3C85DFC02C4633ED3E8B6CE172);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (!PunVoiceClient.Instance.Client.InRoom)
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0;
		L_0 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_0);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_1;
		L_1 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = LoadBalancingClient_get_InRoom_m94253789BA5BD9C81534C4F9682B5E707EF08E78(L_1, NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// why = "voice client not in a room";
		V_0 = _stringLiteral5E7DA8E8875DDA9664D612DF021FC38E6BA46578;
		goto IL_02ec;
	}

IL_001c:
	{
		// else if (!PunVoiceClient.Instance.Client.CurrentRoom.Name.Equals(roomName))
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_3;
		L_3 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_3);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_4;
		L_4 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_3, NULL);
		NullCheck(L_4);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_5;
		L_5 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline(L_5, NULL);
		String_t* L_7 = ___0_roomName;
		NullCheck(L_6);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		// why = string.Format("voice client is on another room {0} != {1}",
		//     PunVoiceClient.Instance.Client.CurrentRoom.Name, roomName);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_9;
		L_9 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_9);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_10;
		L_10 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_9, NULL);
		NullCheck(L_10);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_11;
		L_11 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline(L_11, NULL);
		String_t* L_13 = ___0_roomName;
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0AAD5240183043F2AC9BF73F3688D7989AA5DD58, L_12, L_13, NULL);
		V_0 = L_14;
		goto IL_02ec;
	}

IL_005d:
	{
		// else if (!PunVoiceClient.Instance.Client.LoadBalancingPeer.ServerIpAddress.Equals(serverIp))
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_15;
		L_15 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_15);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_16;
		L_16 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_15, NULL);
		NullCheck(L_16);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_17;
		L_17 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = PhotonPeer_get_ServerIpAddress_m39ED914DE2093FDAE8B264A3AD9D3A97A02ED59D(L_17, NULL);
		String_t* L_19 = ___1_serverIp;
		NullCheck(L_18);
		bool L_20;
		L_20 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_18, L_19, NULL);
		if (L_20)
		{
			goto IL_009e;
		}
	}
	{
		// why = string.Format("voice client is on another server {0} != {1}, maybe different Photon Cloud regions",
		//     PunVoiceClient.Instance.Client.LoadBalancingPeer.ServerIpAddress, serverIp);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_21;
		L_21 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_21);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_22;
		L_22 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_21, NULL);
		NullCheck(L_22);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_23;
		L_23 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_22, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = PhotonPeer_get_ServerIpAddress_m39ED914DE2093FDAE8B264A3AD9D3A97A02ED59D(L_23, NULL);
		String_t* L_25 = ___1_serverIp;
		String_t* L_26;
		L_26 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2B2DA86F8E43CCF02C50633D307C27C7B2BBB4AB, L_24, L_25, NULL);
		V_0 = L_26;
		goto IL_02ec;
	}

IL_009e:
	{
		// else if (!PunVoiceClient.Instance.Client.AppVersion.Equals(appVersion))
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_27;
		L_27 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_27);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_28;
		L_28 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_27, NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline(L_28, NULL);
		String_t* L_30 = ___2_appVersion;
		NullCheck(L_29);
		bool L_31;
		L_31 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00d5;
		}
	}
	{
		// why = string.Format("voice client uses different AppVersion {0} != {1}",
		//     PunVoiceClient.Instance.Client.AppVersion, appVersion);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_32;
		L_32 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		NullCheck(L_32);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_33;
		L_33 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_32, NULL);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline(L_33, NULL);
		String_t* L_35 = ___2_appVersion;
		String_t* L_36;
		L_36 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD898110020367A3C85DFC02C4633ED3E8B6CE172, L_34, L_35, NULL);
		V_0 = L_36;
		goto IL_02ec;
	}

IL_00d5:
	{
		// else if (this.photonVoiceView.RecorderInUse == null)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_37 = __this->___photonVoiceView_5;
		NullCheck(L_37);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_38;
		L_38 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_00f3;
		}
	}
	{
		// why = "recorder not setup (yet?)";
		V_0 = _stringLiteral5395A2F08284F5EAE81B1C322B82D7E19E4D4CF3;
		goto IL_02ec;
	}

IL_00f3:
	{
		// else if (!this.photonVoiceView.RecorderInUse.RecordingEnabled)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_40 = __this->___photonVoiceView_5;
		NullCheck(L_40);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_41;
		L_41 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_40, NULL);
		NullCheck(L_41);
		bool L_42;
		L_42 = Recorder_get_RecordingEnabled_mEDEDC73670D1A7D991F8341AF27A1B268329D0FA_inline(L_41, NULL);
		if (L_42)
		{
			goto IL_0121;
		}
	}
	{
		// why = "recorder is not recording";
		V_0 = _stringLiteral2354DE780A5B69C0FEED47C58F7AAB3C88099215;
		// this.photonVoiceView.RecorderInUse.RecordingEnabled = true;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_43 = __this->___photonVoiceView_5;
		NullCheck(L_43);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_44;
		L_44 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_43, NULL);
		NullCheck(L_44);
		Recorder_set_RecordingEnabled_mC3AE50280E0B44300FCFFE31E4B36BDACAE2694A(L_44, (bool)1, NULL);
		goto IL_02ec;
	}

IL_0121:
	{
		// else if (!this.photonVoiceView.RecorderInUse.TransmitEnabled)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_45 = __this->___photonVoiceView_5;
		NullCheck(L_45);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_46;
		L_46 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_45, NULL);
		NullCheck(L_46);
		bool L_47;
		L_47 = Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline(L_46, NULL);
		if (L_47)
		{
			goto IL_014f;
		}
	}
	{
		// why = "recorder is not transmitting";
		V_0 = _stringLiteral566067E3C1339B5F41E264C307AFED1E012B8F76;
		// this.photonVoiceView.RecorderInUse.TransmitEnabled = true;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_48 = __this->___photonVoiceView_5;
		NullCheck(L_48);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_49;
		L_49 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_48, NULL);
		NullCheck(L_49);
		Recorder_set_TransmitEnabled_mB6B4C554D91CC63D61DBAE8D0C9FA948CD1E1496(L_49, (bool)1, NULL);
		goto IL_02ec;
	}

IL_014f:
	{
		// else if (this.photonVoiceView.RecorderInUse.InterestGroup != 0)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_50 = __this->___photonVoiceView_5;
		NullCheck(L_50);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_51;
		L_51 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_50, NULL);
		NullCheck(L_51);
		uint8_t L_52;
		L_52 = Recorder_get_InterestGroup_m766F1E89F3428A4B72F2FECA2A6D500B42D75D0F(L_51, NULL);
		if (!L_52)
		{
			goto IL_017d;
		}
	}
	{
		// why = "recorder.InterestGroup is not zero? is this on purpose? switching it back to zero";
		V_0 = _stringLiteralD0942E93D883771539D99BE72A7DDCB8AE98CDC8;
		// this.photonVoiceView.RecorderInUse.InterestGroup = 0;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_53 = __this->___photonVoiceView_5;
		NullCheck(L_53);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_54;
		L_54 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_53, NULL);
		NullCheck(L_54);
		Recorder_set_InterestGroup_mE20323891F9FA5B34039167207D72DA97017C353(L_54, (uint8_t)0, NULL);
		goto IL_02ec;
	}

IL_017d:
	{
		// else if (!(this.photonVoiceView.RecorderInUse.UserData is int) || (int)this.photonVoiceView.RecorderInUse.UserData != this.photonView.ViewID)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_55 = __this->___photonVoiceView_5;
		NullCheck(L_55);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_56;
		L_56 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_55, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = Recorder_get_UserData_m5D5FA3E69ABD3F5CAB96102519995BDF1C488BF7_inline(L_56, NULL);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_57, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_01b6;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_58 = __this->___photonVoiceView_5;
		NullCheck(L_58);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_59;
		L_59 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_58, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = Recorder_get_UserData_m5D5FA3E69ABD3F5CAB96102519995BDF1C488BF7_inline(L_59, NULL);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_61;
		L_61 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_61);
		int32_t L_62;
		L_62 = PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline(L_61, NULL);
		if ((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_60, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) == ((int32_t)L_62)))
		{
			goto IL_0217;
		}
	}

IL_01b6:
	{
		// why = string.Format("recorder.UserData ({0}) != photonView.ViewID ({1}), fixing it now", this.photonVoiceView.RecorderInUse.UserData, this.photonView.ViewID);
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_63 = __this->___photonVoiceView_5;
		NullCheck(L_63);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_64;
		L_64 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_63, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = Recorder_get_UserData_m5D5FA3E69ABD3F5CAB96102519995BDF1C488BF7_inline(L_64, NULL);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_66;
		L_66 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_66);
		int32_t L_67;
		L_67 = PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline(L_66, NULL);
		int32_t L_68 = L_67;
		RuntimeObject* L_69 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_68);
		String_t* L_70;
		L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0AB9A62FEB121241DAF6E027F68F70D4A6625235, L_65, L_69, NULL);
		V_0 = L_70;
		// this.photonVoiceView.RecorderInUse.UserData = this.photonView.ViewID;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_71 = __this->___photonVoiceView_5;
		NullCheck(L_71);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_72;
		L_72 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_71, NULL);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_73;
		L_73 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_73);
		int32_t L_74;
		L_74 = PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline(L_73, NULL);
		int32_t L_75 = L_74;
		RuntimeObject* L_76 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_72);
		Recorder_set_UserData_m1C4EEB773903B76FAA6A48AD20B670189237CDE0(L_72, L_76, NULL);
		// this.photonVoiceView.RecorderInUse.RestartRecording();
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_77 = __this->___photonVoiceView_5;
		NullCheck(L_77);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_78;
		L_78 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_77, NULL);
		NullCheck(L_78);
		bool L_79;
		L_79 = Recorder_RestartRecording_m98ABD12F631A9BD6CD54384C04B2CF0D85A03E2C(L_78, NULL);
		goto IL_02ec;
	}

IL_0217:
	{
		// else if (this.photonVoiceView.RecorderInUse.VoiceDetection && this.DisableVad) // todo: check WebRtcAudioDsp.VAD
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_80 = __this->___photonVoiceView_5;
		NullCheck(L_80);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_81;
		L_81 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_80, NULL);
		NullCheck(L_81);
		bool L_82;
		L_82 = Recorder_get_VoiceDetection_mF217F20782F7563928EF8A09B5283FF3D5B58F52_inline(L_81, NULL);
		if (!L_82)
		{
			goto IL_024d;
		}
	}
	{
		bool L_83 = __this->___DisableVad_9;
		if (!L_83)
		{
			goto IL_024d;
		}
	}
	{
		// why = "recorder vad is enabled, disable it for testing";
		V_0 = _stringLiteralC5F700A67A6310E33DD094AAC545BF1871B6D467;
		// this.photonVoiceView.RecorderInUse.VoiceDetection = false;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_84 = __this->___photonVoiceView_5;
		NullCheck(L_84);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_85;
		L_85 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_84, NULL);
		NullCheck(L_85);
		Recorder_set_VoiceDetection_m52AF86118A2E56181935DA2F77B7437CDD06CAD0(L_85, (bool)0, NULL);
		goto IL_02ec;
	}

IL_024d:
	{
		// else if (this.photonView.OwnerActorNr == photonMessageInfo.Sender.ActorNumber)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_86;
		L_86 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_86);
		int32_t L_87;
		L_87 = PhotonView_get_OwnerActorNr_mD9C14958B5CC4A817C6720FD0BF37A9B61A47FDF_inline(L_86, NULL);
		PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA L_88 = ___3_photonMessageInfo;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_89 = L_88.___Sender_1;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_89, NULL);
		if ((!(((uint32_t)L_87) == ((uint32_t)L_90))))
		{
			goto IL_02d5;
		}
	}
	{
		// if (this.LocalDebug)
		bool L_91 = __this->___LocalDebug_11;
		if (!L_91)
		{
			goto IL_02cd;
		}
	}
	{
		// if (this.photonVoiceView.SpeakerInUse != null)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_92 = __this->___photonVoiceView_5;
		NullCheck(L_92);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_93;
		L_93 = PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline(L_92, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_93, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_94)
		{
			goto IL_029a;
		}
	}
	{
		// why = "no idea why!, should be working (1)";
		V_0 = _stringLiteralD0C669958BFD1AB4581DA8AE8C62EA5A5074640C;
		// this.photonVoiceView.RecorderInUse.RestartRecording();
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_95 = __this->___photonVoiceView_5;
		NullCheck(L_95);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_96;
		L_96 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_95, NULL);
		NullCheck(L_96);
		bool L_97;
		L_97 = Recorder_RestartRecording_m98ABD12F631A9BD6CD54384C04B2CF0D85A03E2C(L_96, NULL);
		goto IL_02ec;
	}

IL_029a:
	{
		// else if (!this.photonVoiceView.RecorderInUse.DebugEchoMode)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_98 = __this->___photonVoiceView_5;
		NullCheck(L_98);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_99;
		L_99 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_98, NULL);
		NullCheck(L_99);
		bool L_100;
		L_100 = Recorder_get_DebugEchoMode_m727853F9D824E99FE754C56FAE427434E308563F_inline(L_99, NULL);
		if (L_100)
		{
			goto IL_02c5;
		}
	}
	{
		// why = "recorder debug echo mode not enabled, enabling it now";
		V_0 = _stringLiteralCBA0771AC72CD21EFF386416E9F6F5302398353F;
		// this.photonVoiceView.RecorderInUse.DebugEchoMode = true;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_101 = __this->___photonVoiceView_5;
		NullCheck(L_101);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_102;
		L_102 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_101, NULL);
		NullCheck(L_102);
		Recorder_set_DebugEchoMode_mF63CA073EC931A8ED3323261BC44A984B158765C(L_102, (bool)1, NULL);
		goto IL_02ec;
	}

IL_02c5:
	{
		// why = "locally not speaker (yet?) (2)";
		V_0 = _stringLiteral45CC5DDEA8717A99A5B870EE5DABECF5F7C7046A;
		goto IL_02ec;
	}

IL_02cd:
	{
		// why = "local object, are you trying to hear yourself? (feedback DebugEcho), LocalDebug is disabled, enable it if you want to diagnose this";
		V_0 = _stringLiteral09AF8992981BCC4085724E4E3D0CF09319FCE9D9;
		goto IL_02ec;
	}

IL_02d5:
	{
		// why = "no idea why!, should be working (2)";
		V_0 = _stringLiteral24F5590E4C612C6C361CC9B6A7D645EEF121B6BD;
		// this.photonVoiceView.RecorderInUse.RestartRecording();
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_103 = __this->___photonVoiceView_5;
		NullCheck(L_103);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_104;
		L_104 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_103, NULL);
		NullCheck(L_104);
		bool L_105;
		L_105 = Recorder_RestartRecording_m98ABD12F631A9BD6CD54384C04B2CF0D85A03E2C(L_104, NULL);
	}

IL_02ec:
	{
		// this.Reply(why, photonMessageInfo.Sender);
		String_t* L_106 = V_0;
		PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA L_107 = ___3_photonMessageInfo;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_108 = L_107.___Sender_1;
		VoiceDebugScript_Reply_mC62DA59510C6110A9240288DD4FC39CEDA900FD0(__this, L_106, L_108, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::Reply(System.String,Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_Reply_mC62DA59510C6110A9240288DD4FC39CEDA900FD0 (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, String_t* ___0_why, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___1_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F11D7FD924312A01D1434E6B6C15C14D50960BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.photonView.RPC("HeresWhy", player, why);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___1_player;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_why;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		PhotonView_RPC_m985C1C00D88C33FABAE7B0C51AAB32C67A9D010B(L_0, _stringLiteral1F11D7FD924312A01D1434E6B6C15C14D50960BC, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::HeresWhy(System.String,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_HeresWhy_m7F555EE870ACD4FA64233C006262C9DA5B21FC33 (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, String_t* ___0_why, PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA ___1_photonMessageInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADAA9081239C97382D9F0956300A807BE35143E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogErrorFormat("Player {0} replied to my CantHearYou message with {1}", photonMessageInfo.Sender, why);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA L_2 = ___1_photonMessageInfo;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_3 = L_2.___Sender_1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_1;
		String_t* L_5 = ___0_why;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral0ADAA9081239C97382D9F0956300A807BE35143E, L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::MaxLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_MaxLogs_mC5F627CE9ED3A19418607F0FE7F3F6ACB05A1DB5 (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisVoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7_m9E90F79547159D4772C6D0365B27D0B2C132A345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceLoggerU5BU5D_t2EAAFCE8EAC2A25FE8F16DDF75F3FCD04D846410* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (this.IncreaseLogLevels)
		bool L_0 = __this->___IncreaseLogLevels_10;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// foreach (var l in FindObjectsOfType<VoiceLogger>())
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceLoggerU5BU5D_t2EAAFCE8EAC2A25FE8F16DDF75F3FCD04D846410* L_1;
		L_1 = Object_FindObjectsOfType_TisVoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7_m9E90F79547159D4772C6D0365B27D0B2C132A345(Object_FindObjectsOfType_TisVoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7_m9E90F79547159D4772C6D0365B27D0B2C132A345_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		// foreach (var l in FindObjectsOfType<VoiceLogger>())
		VoiceLoggerU5BU5D_t2EAAFCE8EAC2A25FE8F16DDF75F3FCD04D846410* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// l.LogLevel = DebugLevel.ALL;
		NullCheck(L_5);
		L_5->___LogLevel_4 = 5;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		// foreach (var l in FindObjectsOfType<VoiceLogger>())
		int32_t L_7 = V_1;
		VoiceLoggerU5BU5D_t2EAAFCE8EAC2A25FE8F16DDF75F3FCD04D846410* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0012;
		}
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript__ctor_m0269E26C7BDB17ADB0A007CCC8CE1053B17208A2 (VoiceDebugScript_t4AA28FE575EF14AC7BBA68FAFBB0F70E8F503315* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = __this->___U3CSpeakerInUseU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = __this->___U3CRecorderInUseU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsMine { get; private set; }
		bool L_0 = __this->___U3CIsMineU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.transmitEnabled; }
		bool L_0 = __this->___transmitEnabled_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) 
{
	{
		// return this.viewIdField;
		int32_t L_0 = __this->___viewIdField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// get => this.primaryRecorder;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = __this->___primaryRecorder_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonVoiceView_set_RecorderInUse_m5AB337A396F56EED36C91A6E3346BFD8F5207284_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = ___0_value;
		__this->___U3CRecorderInUseU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRecorderInUseU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* VoiceConnection_get_SpeakerPrefab_m826BAD6BF3DBF46103C4E21FFB9A164D9BBCF997_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// get => this.speakerPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___speakerPrefab_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonVoiceView_set_SpeakerInUse_mB96442AF8DEDD8481ACF2E4F0E0E54F560017B38_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = ___0_value;
		__this->___U3CSpeakerInUseU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSpeakerInUseU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// public new LoadBalancingTransport Client { get { return this.client; } }
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_0 = __this->___client_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceConnection_get_UsePrimaryRecorder_m50587F8EEAE8AA3D379D8738E72F9128EE2B41C5_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePrimaryRecorder => this.usePrimaryRecorder;
		bool L_0 = __this->___usePrimaryRecorder_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_DisconnectedCause_m7A948064631F3E7A5D1BFA24CCA308852AB8C08D_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public DisconnectCause DisconnectedCause { get; protected set; }
		int32_t L_0 = __this->___U3CDisconnectedCauseU3Ek__BackingField_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	{
		// return this.name;
		String_t* L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___name_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PunVoiceClient_get_UsePunAuthValues_m64D747A136589F274AC4CC9EB70192843760D51F_inline (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) 
{
	{
		// return this.usePunAuthValues;
		bool L_0 = __this->___usePunAuthValues_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_0 = __this->___U3CAuthValuesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadBalancingClient_set_AuthValues_mAFB66C3CFA04587CBA1A60711581B2BA6C6FD84C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_0 = ___0_value;
		__this->___U3CAuthValuesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthValuesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonNetwork_get_OfflineMode_m57596042EE764187C75DEAC48E6F420799C192C2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return offlineMode;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___offlineMode_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0 = __this->___U3CCurrentRoomU3Ek__BackingField_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_m5D9ACD84A11FD6E37F023C2181653923AEE7AB25_inline (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = ___0_value;
		__this->___isVisible_0 = L_0;
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* PhotonView_get_Owner_m99D611AD5C17B06E4490F75CFAC02C26AABC4A21_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) 
{
	{
		// public Player Owner { get; private set; }
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = __this->___U3COwnerU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_0 = __this->___U3CLoadBalancingPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->___U3CAppVersionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_RecordingEnabled_mEDEDC73670D1A7D991F8341AF27A1B268329D0FA_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) 
{
	{
		// return this.recordingEnabled;
		bool L_0 = __this->___recordingEnabled_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Recorder_get_UserData_m5D5FA3E69ABD3F5CAB96102519995BDF1C488BF7_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.userData; }
		RuntimeObject* L_0 = __this->___userData_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_VoiceDetection_mF217F20782F7563928EF8A09B5283FF3D5B58F52_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) 
{
	{
		// return this.voiceDetection;
		bool L_0 = __this->___voiceDetection_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_OwnerActorNr_mD9C14958B5CC4A817C6720FD0BF37A9B61A47FDF_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.ownerActorNr; }
		int32_t L_0 = __this->___ownerActorNr_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.actorNumber; }
		int32_t L_0 = __this->___actorNumber_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_DebugEchoMode_m727853F9D824E99FE754C56FAE427434E308563F_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) 
{
	{
		// return this.debugEchoMode;
		bool L_0 = __this->___debugEchoMode_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}

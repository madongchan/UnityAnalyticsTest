#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String>
struct Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>>
struct Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>>
struct IEnumerable_1_t9F82E084A7072A9C998BF0319D87A777A70365D7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t79E12DC27E32E788D60D392563070099BEDACA6D;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct IReadOnlyDictionary_2_t716F45354D8FE57925A2F26675770D906A746745;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// Unity.Services.Core.Configuration.CloudProjectId
struct CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// Unity.Services.Core.Configuration.ConfigurationEntry
struct ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// Unity.Services.Core.Configuration.ExternalUserId
struct ExternalUserId_tBCE85188124C17D544F70F78E1FC787B044AE32B;
// Unity.Services.Core.ExternalUserIdProperty
struct ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Unity.Services.Core.Configuration.IConfigurationLoader
struct IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_tF6D23F20037CB923F00229219D395611C3132340;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Unity.Services.Core.Internal.Serialization.IJsonSerializer
struct IJsonSerializer_tB9E3D0B15DCB7D9ABC9D612815BCDE87F8DD095C;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t8D5E95333B7A0C054D252BCFFBBE07284E7B5880;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t246767FC431AA0EA92CBA91F07913E176E1D7B5B;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t11532C2AA9DF19B24AB4420081CEF2CCE598F6AF;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer
struct NewtonsoftSerializer_t6AC54B3B1A46C7BFDA7B7880863E43B97D8ED56C;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader
struct StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Services.Core.Configuration.ProjectConfiguration/<>c
struct U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t716F45354D8FE57925A2F26675770D906A746745_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewtonsoftSerializer_t6AC54B3B1A46C7BFDA7B7880863E43B97D8ED56C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BABD447B478833BDA1B9F70E833040EF5CFF2C9;
IL2CPP_EXTERN_C String_t* _stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630;
IL2CPP_EXTERN_C String_t* _stringLiteral562CEAFE746CF9C5A3294C09EBB603054B01D9A3;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_mA5DF99BFDD7A6F08F8D8CE27311168A268AEE0F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m44FA1495FBC36C567F4DD324B0E7D4AE6E1ADC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m61D6A2697FDB19AC63CE644417DA4ED26C02A879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisKeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444_TisString_t_TisString_t_m6D08B4C62960F61A2FCA19BC1EBD35D79A0C45E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBF1E9DE2F68A26A755BCB8BC83DDAE9B45F3AB16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJsonSerializer_DeserializeObject_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_m7B92C3199AB34CFFD1B94ED89CF86C926D4C08F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJsonSerializer_SerializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m985381777D11E26BD19F500C32633D40B2696BA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB5E6E15DC1D9331B242E2D27D9836DA23213E8C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m381235236BD1373F2E07E5793DC06A5205DFBCD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToJsonU3Eb__10_0_mFE95E8C6FF59D4B6180CA472495A385E924BED23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToJsonU3Eb__10_1_m04803A271F72F53E1F82AFA881C6C3CEEBDFB3F8_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t197DAAB3889AD384C4F53CC506E63848F26D7B02 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Services.Core.Configuration.CloudProjectId
struct CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Configuration.ConfigurationCollectionHelper
struct ConfigurationCollectionHelper_t95CFD00D1C787ECD563FD81D028204D4B1371E65  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Configuration.ConfigurationEntry
struct ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Configuration.ConfigurationEntry::m_Value
	String_t* ___m_Value_0;
	// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::m_IsReadOnly
	bool ___m_IsReadOnly_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6, ___m_Value_0)); }
	inline String_t* get_m_Value_0() const { return ___m_Value_0; }
	inline String_t** get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(String_t* value)
	{
		___m_Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsReadOnly_1() { return static_cast<int32_t>(offsetof(ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6, ___m_IsReadOnly_1)); }
	inline bool get_m_IsReadOnly_1() const { return ___m_IsReadOnly_1; }
	inline bool* get_address_of_m_IsReadOnly_1() { return &___m_IsReadOnly_1; }
	inline void set_m_IsReadOnly_1(bool value)
	{
		___m_IsReadOnly_1 = value;
	}
};


// Unity.Services.Core.Configuration.ConfigurationUtils
struct ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782  : public RuntimeObject
{
public:

public:
};

struct ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields
{
public:
	// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::<ConfigurationLoader>k__BackingField
	RuntimeObject* ___U3CConfigurationLoaderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CConfigurationLoaderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields, ___U3CConfigurationLoaderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CConfigurationLoaderU3Ek__BackingField_0() const { return ___U3CConfigurationLoaderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CConfigurationLoaderU3Ek__BackingField_0() { return &___U3CConfigurationLoaderU3Ek__BackingField_0; }
	inline void set_U3CConfigurationLoaderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CConfigurationLoaderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationLoaderU3Ek__BackingField_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Unity.Services.Core.Configuration.ExternalUserId
struct ExternalUserId_tBCE85188124C17D544F70F78E1FC787B044AE32B  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.ExternalUserIdProperty
struct ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C  : public RuntimeObject
{
public:
	// System.Action`1<System.String> Unity.Services.Core.ExternalUserIdProperty::UserIdChanged
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___UserIdChanged_0;
	// System.String Unity.Services.Core.ExternalUserIdProperty::m_UserId
	String_t* ___m_UserId_1;

public:
	inline static int32_t get_offset_of_UserIdChanged_0() { return static_cast<int32_t>(offsetof(ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C, ___UserIdChanged_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_UserIdChanged_0() const { return ___UserIdChanged_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_UserIdChanged_0() { return &___UserIdChanged_0; }
	inline void set_UserIdChanged_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___UserIdChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserIdChanged_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserId_1() { return static_cast<int32_t>(offsetof(ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C, ___m_UserId_1)); }
	inline String_t* get_m_UserId_1() const { return ___m_UserId_1; }
	inline String_t** get_address_of_m_UserId_1() { return &___m_UserId_1; }
	inline void set_m_UserId_1(String_t* value)
	{
		___m_UserId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserId_1), (void*)value);
	}
};


// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::<Values>k__BackingField
	RuntimeObject* ___U3CValuesU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValuesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268, ___U3CValuesU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CValuesU3Ek__BackingField_0() const { return ___U3CValuesU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CValuesU3Ek__BackingField_0() { return &___U3CValuesU3Ek__BackingField_0; }
	inline void set_U3CValuesU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CValuesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValuesU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer
struct NewtonsoftSerializer_t6AC54B3B1A46C7BFDA7B7880863E43B97D8ED56C  : public RuntimeObject
{
public:
	// Newtonsoft.Json.JsonSerializer Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer::m_Serializer
	JsonSerializer_t11532C2AA9DF19B24AB4420081CEF2CCE598F6AF * ___m_Serializer_0;

public:
	inline static int32_t get_offset_of_m_Serializer_0() { return static_cast<int32_t>(offsetof(NewtonsoftSerializer_t6AC54B3B1A46C7BFDA7B7880863E43B97D8ED56C, ___m_Serializer_0)); }
	inline JsonSerializer_t11532C2AA9DF19B24AB4420081CEF2CCE598F6AF * get_m_Serializer_0() const { return ___m_Serializer_0; }
	inline JsonSerializer_t11532C2AA9DF19B24AB4420081CEF2CCE598F6AF ** get_address_of_m_Serializer_0() { return &___m_Serializer_0; }
	inline void set_m_Serializer_0(JsonSerializer_t11532C2AA9DF19B24AB4420081CEF2CCE598F6AF * value)
	{
		___m_Serializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serializer_0), (void*)value);
	}
};


// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Configuration.ProjectConfiguration::m_JsonCache
	String_t* ___m_JsonCache_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry> Unity.Services.Core.Configuration.ProjectConfiguration::m_ConfigValues
	RuntimeObject* ___m_ConfigValues_1;
	// Unity.Services.Core.Internal.Serialization.IJsonSerializer Unity.Services.Core.Configuration.ProjectConfiguration::<Serializer>k__BackingField
	RuntimeObject* ___U3CSerializerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_JsonCache_0() { return static_cast<int32_t>(offsetof(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05, ___m_JsonCache_0)); }
	inline String_t* get_m_JsonCache_0() const { return ___m_JsonCache_0; }
	inline String_t** get_address_of_m_JsonCache_0() { return &___m_JsonCache_0; }
	inline void set_m_JsonCache_0(String_t* value)
	{
		___m_JsonCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_JsonCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigValues_1() { return static_cast<int32_t>(offsetof(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05, ___m_ConfigValues_1)); }
	inline RuntimeObject* get_m_ConfigValues_1() const { return ___m_ConfigValues_1; }
	inline RuntimeObject** get_address_of_m_ConfigValues_1() { return &___m_ConfigValues_1; }
	inline void set_m_ConfigValues_1(RuntimeObject* value)
	{
		___m_ConfigValues_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigValues_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05, ___U3CSerializerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CSerializerU3Ek__BackingField_2() const { return ___U3CSerializerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CSerializerU3Ek__BackingField_2() { return &___U3CSerializerU3Ek__BackingField_2; }
	inline void set_U3CSerializerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CSerializerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerializerU3Ek__BackingField_2), (void*)value);
	}
};


// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader
struct StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA  : public RuntimeObject
{
public:
	// Unity.Services.Core.Internal.Serialization.IJsonSerializer Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::m_Serializer
	RuntimeObject* ___m_Serializer_0;

public:
	inline static int32_t get_offset_of_m_Serializer_0() { return static_cast<int32_t>(offsetof(StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA, ___m_Serializer_0)); }
	inline RuntimeObject* get_m_Serializer_0() const { return ___m_Serializer_0; }
	inline RuntimeObject** get_address_of_m_Serializer_0() { return &___m_Serializer_0; }
	inline void set_m_Serializer_0(RuntimeObject* value)
	{
		___m_Serializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serializer_0), (void*)value);
	}
};


// Unity.Services.Core.Configuration.StreamingAssetsUtils
struct StreamingAssetsUtils_t14EB2A8F35BF58C83FF1FAFCC330185D3E70082C  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Unity.Services.Core.UnityServices
struct UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2  : public RuntimeObject
{
public:

public:
};

struct UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields
{
public:
	// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::<InstantiationCompletion>k__BackingField
	TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ___U3CInstantiationCompletionU3Ek__BackingField_1;
	// Unity.Services.Core.ExternalUserIdProperty Unity.Services.Core.UnityServices::ExternalUserIdProperty
	ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C * ___ExternalUserIdProperty_2;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstantiationCompletionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields, ___U3CInstantiationCompletionU3Ek__BackingField_1)); }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * get_U3CInstantiationCompletionU3Ek__BackingField_1() const { return ___U3CInstantiationCompletionU3Ek__BackingField_1; }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 ** get_address_of_U3CInstantiationCompletionU3Ek__BackingField_1() { return &___U3CInstantiationCompletionU3Ek__BackingField_1; }
	inline void set_U3CInstantiationCompletionU3Ek__BackingField_1(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * value)
	{
		___U3CInstantiationCompletionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstantiationCompletionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_ExternalUserIdProperty_2() { return static_cast<int32_t>(offsetof(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields, ___ExternalUserIdProperty_2)); }
	inline ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C * get_ExternalUserIdProperty_2() const { return ___ExternalUserIdProperty_2; }
	inline ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C ** get_address_of_ExternalUserIdProperty_2() { return &___ExternalUserIdProperty_2; }
	inline void set_ExternalUserIdProperty_2(ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C * value)
	{
		___ExternalUserIdProperty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExternalUserIdProperty_2), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.Services.Core.Configuration.ProjectConfiguration/<>c
struct U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields
{
public:
	// Unity.Services.Core.Configuration.ProjectConfiguration/<>c Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<>9
	U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String> Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<>9__10_0
	Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * ___U3CU3E9__10_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String> Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<>9__10_1
	Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * ___U3CU3E9__10_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields, ___U3CU3E9__10_1_2)); }
	inline Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * get_U3CU3E9__10_1_2() const { return ___U3CU3E9__10_1_2; }
	inline Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 ** get_address_of_U3CU3E9__10_1_2() { return &___U3CU3E9__10_1_2; }
	inline void set_U3CU3E9__10_1_2(Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * value)
	{
		___U3CU3E9__10_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_1_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444, ___value_1)); }
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * get_value_1() const { return ___value_1; }
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B 
{
public:
	// System.String[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Keys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Keys_0;
	// Unity.Services.Core.Configuration.ConfigurationEntry[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Values
	ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* ___Values_1;

public:
	inline static int32_t get_offset_of_Keys_0() { return static_cast<int32_t>(offsetof(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B, ___Keys_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Keys_0() const { return ___Keys_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Keys_0() { return &___Keys_0; }
	inline void set_Keys_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B, ___Values_1)); }
	inline ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* get_Values_1() const { return ___Values_1; }
	inline ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8** get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* value)
	{
		___Values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_pinvoke
{
	char** ___Keys_0;
	ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* ___Values_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_com
{
	Il2CppChar** ___Keys_0;
	ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* ___Values_1;
};

// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B, ___m_task_2)); }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// Newtonsoft.Json.ConstructorHandling
struct ConstructorHandling_t8EF2C9D50692D63B8A50928AADD5C1EDF8A3E7DC 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstructorHandling_t8EF2C9D50692D63B8A50928AADD5C1EDF8A3E7DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t7D368A07EDDD2F4E105A094FC7A5B80D6539EB5A 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_t7D368A07EDDD2F4E105A094FC7A5B80D6539EB5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_tF32DF55E7B72FCFC1AD190A6AA1323D74D8498ED 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_tF32DF55E7B72FCFC1AD190A6AA1323D74D8498ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_t1B4712A9FBACAC4CDE007353B5E2AEFAA5682314 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t1B4712A9FBACAC4CDE007353B5E2AEFAA5682314, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t64F11A79D0A8AC61B4EF63FE24918795C2826E77 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t64F11A79D0A8AC61B4EF63FE24918795C2826E77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t885E8AF11DB7C62862372A8A4E40626885C5960E 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t885E8AF11DB7C62862372A8A4E40626885C5960E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_t145124DF9867E684C9794F16A0B1F1E463BE4E34 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t145124DF9867E684C9794F16A0B1F1E463BE4E34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct Formatting_t0249052BCF9F7E782EC05863A164CF7CED128094 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_t0249052BCF9F7E782EC05863A164CF7CED128094, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MetadataPropertyHandling
struct MetadataPropertyHandling_tC63DA3BC10CD4946359D1AF0308531CCB7926D71 
{
public:
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetadataPropertyHandling_tC63DA3BC10CD4946359D1AF0308531CCB7926D71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MissingMemberHandling
struct MissingMemberHandling_tEB1745E775089F63B48F3837F4378CFDA324410E 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMemberHandling_tEB1745E775089F63B48F3837F4378CFDA324410E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_t7E853B68E9812ACD6766B3E6B53917CD1D4699C1 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_t7E853B68E9812ACD6766B3E6B53917CD1D4699C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_t809FC2764FB7157E1538E37F2117A5568BA5AB2E 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t809FC2764FB7157E1538E37F2117A5568BA5AB2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.PreserveReferencesHandling
struct PreserveReferencesHandling_tCF08DBF34C71CD009B91C89CCA75278A6847A372 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_tCF08DBF34C71CD009B91C89CCA75278A6847A372, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_tD534709B6BE8FEEABEB98318D08943307CE7C9E5 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_tD534709B6BE8FEEABEB98318D08943307CE7C9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t6FD2495C1B6393CFD174FBBA0B1684CB6BA8D624 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t6FD2495C1B6393CFD174FBBA0B1684CB6BA8D624, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Newtonsoft.Json.TypeNameAssemblyFormatHandling
struct TypeNameAssemblyFormatHandling_tF408387942F5B366F9ED2EFD1897CBC4703C6F92 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameAssemblyFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameAssemblyFormatHandling_tF408387942F5B366F9ED2EFD1897CBC4703C6F92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t72E983B53732E4FEF0527D64396BBA288EB13F81 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t72E983B53732E4FEF0527D64396BBA288EB13F81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7, ___m_result_22)); }
	inline SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  get_m_result_22() const { return ___m_result_22; }
	inline SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___Keys_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___Values_1), (void*)NULL);
		#endif
	}
};

struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_22)); }
	inline String_t* get_m_result_22() const { return ___m_result_22; }
	inline String_t** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(String_t* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2
struct U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE 
{
public:
	// System.Int32 Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2::<>t__builder
	AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  ___U3CU3Et__builder_1;
	// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2::<>4__this
	StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE, ___U3CU3E4__this_2)); }
	inline StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String>
struct Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15 
{
public:
	// T System.Nullable`1::value
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15, ___value_0)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_value_0() const { return ___value_0; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D  ____formatting_2;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7  ____dateFormatHandling_3;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4  ____dateTimeZoneHandling_4;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C  ____dateParseHandling_5;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E  ____floatFormatHandling_6;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209  ____floatParseHandling_7;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2  ____stringEscapeHandling_8;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_9;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____checkAdditionalContent_10;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_11;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_12;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_13;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_14;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984  ____typeNameAssemblyFormatHandling_15;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115  ____defaultValueHandling_16;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022  ____preserveReferencesHandling_17;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F  ____nullValueHandling_18;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B  ____objectCreationHandling_19;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E  ____missingMemberHandling_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  ____referenceLoopHandling_21;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  ____context_22;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A  ____constructorHandling_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  ____typeNameHandling_24;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8  ____metadataPropertyHandling_25;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_26;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_27;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_28;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B * ___U3CReferenceResolverProviderU3Ek__BackingField_29;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_30;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_31;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2 * ___U3CErrorU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__formatting_2() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____formatting_2)); }
	inline Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D  get__formatting_2() const { return ____formatting_2; }
	inline Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D * get_address_of__formatting_2() { return &____formatting_2; }
	inline void set__formatting_2(Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D  value)
	{
		____formatting_2 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateFormatHandling_3)); }
	inline Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7  get__dateFormatHandling_3() const { return ____dateFormatHandling_3; }
	inline Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7 * get_address_of__dateFormatHandling_3() { return &____dateFormatHandling_3; }
	inline void set__dateFormatHandling_3(Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7  value)
	{
		____dateFormatHandling_3 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateTimeZoneHandling_4)); }
	inline Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4  get__dateTimeZoneHandling_4() const { return ____dateTimeZoneHandling_4; }
	inline Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4 * get_address_of__dateTimeZoneHandling_4() { return &____dateTimeZoneHandling_4; }
	inline void set__dateTimeZoneHandling_4(Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4  value)
	{
		____dateTimeZoneHandling_4 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateParseHandling_5)); }
	inline Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C  get__dateParseHandling_5() const { return ____dateParseHandling_5; }
	inline Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C * get_address_of__dateParseHandling_5() { return &____dateParseHandling_5; }
	inline void set__dateParseHandling_5(Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C  value)
	{
		____dateParseHandling_5 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____floatFormatHandling_6)); }
	inline Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E  get__floatFormatHandling_6() const { return ____floatFormatHandling_6; }
	inline Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E * get_address_of__floatFormatHandling_6() { return &____floatFormatHandling_6; }
	inline void set__floatFormatHandling_6(Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E  value)
	{
		____floatFormatHandling_6 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____floatParseHandling_7)); }
	inline Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209  get__floatParseHandling_7() const { return ____floatParseHandling_7; }
	inline Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209 * get_address_of__floatParseHandling_7() { return &____floatParseHandling_7; }
	inline void set__floatParseHandling_7(Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209  value)
	{
		____floatParseHandling_7 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____stringEscapeHandling_8)); }
	inline Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2  get__stringEscapeHandling_8() const { return ____stringEscapeHandling_8; }
	inline Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2 * get_address_of__stringEscapeHandling_8() { return &____stringEscapeHandling_8; }
	inline void set__stringEscapeHandling_8(Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2  value)
	{
		____stringEscapeHandling_8 = value;
	}

	inline static int32_t get_offset_of__culture_9() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____culture_9)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_9() const { return ____culture_9; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_9() { return &____culture_9; }
	inline void set__culture_9(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_9), (void*)value);
	}

	inline static int32_t get_offset_of__checkAdditionalContent_10() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____checkAdditionalContent_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__checkAdditionalContent_10() const { return ____checkAdditionalContent_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__checkAdditionalContent_10() { return &____checkAdditionalContent_10; }
	inline void set__checkAdditionalContent_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____checkAdditionalContent_10 = value;
	}

	inline static int32_t get_offset_of__maxDepth_11() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____maxDepth_11)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_11() const { return ____maxDepth_11; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_11() { return &____maxDepth_11; }
	inline void set__maxDepth_11(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_11 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_12() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____maxDepthSet_12)); }
	inline bool get__maxDepthSet_12() const { return ____maxDepthSet_12; }
	inline bool* get_address_of__maxDepthSet_12() { return &____maxDepthSet_12; }
	inline void set__maxDepthSet_12(bool value)
	{
		____maxDepthSet_12 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_13() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateFormatString_13)); }
	inline String_t* get__dateFormatString_13() const { return ____dateFormatString_13; }
	inline String_t** get_address_of__dateFormatString_13() { return &____dateFormatString_13; }
	inline void set__dateFormatString_13(String_t* value)
	{
		____dateFormatString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_13), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_14() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateFormatStringSet_14)); }
	inline bool get__dateFormatStringSet_14() const { return ____dateFormatStringSet_14; }
	inline bool* get_address_of__dateFormatStringSet_14() { return &____dateFormatStringSet_14; }
	inline void set__dateFormatStringSet_14(bool value)
	{
		____dateFormatStringSet_14 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormatHandling_15() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____typeNameAssemblyFormatHandling_15)); }
	inline Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984  get__typeNameAssemblyFormatHandling_15() const { return ____typeNameAssemblyFormatHandling_15; }
	inline Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984 * get_address_of__typeNameAssemblyFormatHandling_15() { return &____typeNameAssemblyFormatHandling_15; }
	inline void set__typeNameAssemblyFormatHandling_15(Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984  value)
	{
		____typeNameAssemblyFormatHandling_15 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_16() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____defaultValueHandling_16)); }
	inline Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115  get__defaultValueHandling_16() const { return ____defaultValueHandling_16; }
	inline Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115 * get_address_of__defaultValueHandling_16() { return &____defaultValueHandling_16; }
	inline void set__defaultValueHandling_16(Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115  value)
	{
		____defaultValueHandling_16 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_17() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____preserveReferencesHandling_17)); }
	inline Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022  get__preserveReferencesHandling_17() const { return ____preserveReferencesHandling_17; }
	inline Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022 * get_address_of__preserveReferencesHandling_17() { return &____preserveReferencesHandling_17; }
	inline void set__preserveReferencesHandling_17(Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022  value)
	{
		____preserveReferencesHandling_17 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____nullValueHandling_18)); }
	inline Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F  get__nullValueHandling_18() const { return ____nullValueHandling_18; }
	inline Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F * get_address_of__nullValueHandling_18() { return &____nullValueHandling_18; }
	inline void set__nullValueHandling_18(Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F  value)
	{
		____nullValueHandling_18 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____objectCreationHandling_19)); }
	inline Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B  get__objectCreationHandling_19() const { return ____objectCreationHandling_19; }
	inline Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B * get_address_of__objectCreationHandling_19() { return &____objectCreationHandling_19; }
	inline void set__objectCreationHandling_19(Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B  value)
	{
		____objectCreationHandling_19 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____missingMemberHandling_20)); }
	inline Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E  get__missingMemberHandling_20() const { return ____missingMemberHandling_20; }
	inline Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E * get_address_of__missingMemberHandling_20() { return &____missingMemberHandling_20; }
	inline void set__missingMemberHandling_20(Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E  value)
	{
		____missingMemberHandling_20 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____referenceLoopHandling_21)); }
	inline Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  get__referenceLoopHandling_21() const { return ____referenceLoopHandling_21; }
	inline Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F * get_address_of__referenceLoopHandling_21() { return &____referenceLoopHandling_21; }
	inline void set__referenceLoopHandling_21(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  value)
	{
		____referenceLoopHandling_21 = value;
	}

	inline static int32_t get_offset_of__context_22() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____context_22)); }
	inline Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  get__context_22() const { return ____context_22; }
	inline Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15 * get_address_of__context_22() { return &____context_22; }
	inline void set__context_22(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  value)
	{
		____context_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____context_22))->___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__constructorHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____constructorHandling_23)); }
	inline Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A  get__constructorHandling_23() const { return ____constructorHandling_23; }
	inline Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A * get_address_of__constructorHandling_23() { return &____constructorHandling_23; }
	inline void set__constructorHandling_23(Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A  value)
	{
		____constructorHandling_23 = value;
	}

	inline static int32_t get_offset_of__typeNameHandling_24() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____typeNameHandling_24)); }
	inline Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  get__typeNameHandling_24() const { return ____typeNameHandling_24; }
	inline Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866 * get_address_of__typeNameHandling_24() { return &____typeNameHandling_24; }
	inline void set__typeNameHandling_24(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  value)
	{
		____typeNameHandling_24 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_25() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____metadataPropertyHandling_25)); }
	inline Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8  get__metadataPropertyHandling_25() const { return ____metadataPropertyHandling_25; }
	inline Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8 * get_address_of__metadataPropertyHandling_25() { return &____metadataPropertyHandling_25; }
	inline void set__metadataPropertyHandling_25(Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8  value)
	{
		____metadataPropertyHandling_25 = value;
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CConvertersU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CConvertersU3Ek__BackingField_26() const { return ___U3CConvertersU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CConvertersU3Ek__BackingField_26() { return &___U3CConvertersU3Ek__BackingField_26; }
	inline void set_U3CConvertersU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CConvertersU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConvertersU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContractResolverU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CContractResolverU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CContractResolverU3Ek__BackingField_27() const { return ___U3CContractResolverU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CContractResolverU3Ek__BackingField_27() { return &___U3CContractResolverU3Ek__BackingField_27; }
	inline void set_U3CContractResolverU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CContractResolverU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractResolverU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEqualityComparerU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CEqualityComparerU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEqualityComparerU3Ek__BackingField_28() const { return ___U3CEqualityComparerU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEqualityComparerU3Ek__BackingField_28() { return &___U3CEqualityComparerU3Ek__BackingField_28; }
	inline void set_U3CEqualityComparerU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEqualityComparerU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEqualityComparerU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CReferenceResolverProviderU3Ek__BackingField_29)); }
	inline Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B * get_U3CReferenceResolverProviderU3Ek__BackingField_29() const { return ___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B ** get_address_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return &___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline void set_U3CReferenceResolverProviderU3Ek__BackingField_29(Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B * value)
	{
		___U3CReferenceResolverProviderU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReferenceResolverProviderU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTraceWriterU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CTraceWriterU3Ek__BackingField_30)); }
	inline RuntimeObject* get_U3CTraceWriterU3Ek__BackingField_30() const { return ___U3CTraceWriterU3Ek__BackingField_30; }
	inline RuntimeObject** get_address_of_U3CTraceWriterU3Ek__BackingField_30() { return &___U3CTraceWriterU3Ek__BackingField_30; }
	inline void set_U3CTraceWriterU3Ek__BackingField_30(RuntimeObject* value)
	{
		___U3CTraceWriterU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTraceWriterU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializationBinderU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CSerializationBinderU3Ek__BackingField_31)); }
	inline RuntimeObject* get_U3CSerializationBinderU3Ek__BackingField_31() const { return ___U3CSerializationBinderU3Ek__BackingField_31; }
	inline RuntimeObject** get_address_of_U3CSerializationBinderU3Ek__BackingField_31() { return &___U3CSerializationBinderU3Ek__BackingField_31; }
	inline void set_U3CSerializationBinderU3Ek__BackingField_31(RuntimeObject* value)
	{
		___U3CSerializationBinderU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerializationBinderU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CErrorU3Ek__BackingField_32)); }
	inline EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2 * get_U3CErrorU3Ek__BackingField_32() const { return ___U3CErrorU3Ek__BackingField_32; }
	inline EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2 ** get_address_of_U3CErrorU3Ek__BackingField_32() { return &___U3CErrorU3Ek__BackingField_32; }
	inline void set_U3CErrorU3Ek__BackingField_32(EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2 * value)
	{
		___U3CErrorU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_32), (void*)value);
	}
};

struct JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8_StaticFields
{
public:
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___DefaultContext_0;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___DefaultCulture_1;

public:
	inline static int32_t get_offset_of_DefaultContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8_StaticFields, ___DefaultContext_0)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_DefaultContext_0() const { return ___DefaultContext_0; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_DefaultContext_0() { return &___DefaultContext_0; }
	inline void set_DefaultContext_0(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___DefaultContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultContext_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_DefaultCulture_1() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8_StaticFields, ___DefaultCulture_1)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_DefaultCulture_1() const { return ___DefaultCulture_1; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_DefaultCulture_1() { return &___DefaultCulture_1; }
	inline void set_DefaultCulture_1(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___DefaultCulture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultCulture_1), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * m_Items[1];

public:
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m63767C2AD1295D9C38EBAD72A237C0A5A3D18A71_gshared (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * Enumerable_ToDictionary_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisRuntimeObject_TisRuntimeObject_mBDF6C6DD35A92D9E746EF77831C3819959A60050_gshared (RuntimeObject* ___source0, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___keySelector1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___elementSelector2, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m61D6A2697FDB19AC63CE644417DA4ED26C02A879_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m0A00E1B12EC8C8EC78E900D54470C1C079CE66CB_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.String UnityEngine.Application::get_cloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_cloudProjectId_m4428D3F30727F38D42D63962932341043560E43D (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::SetOrCreateEntry(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String,Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_SetOrCreateEntry_m02712DDC35D8AA7A92265B5307CC8A2452176AF2 (RuntimeObject* ___self0, String_t* ___key1, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ___entry2, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m7DCAFF9B9A7F5729B15CB4E3D2E128AD6328CC36_inline (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m76907E327BF16DC37142EAE2D8F461CECD6DE4EB (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// Unity.Services.Core.Configuration.ConfigurationEntry Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ConfigurationEntry_op_Implicit_m6673309A77303555BB112DFA786C9B8079BB48A8 (String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_op_Implicit_mAB2DECA59966A045CB115C66AC338E7C2EFCCB48 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ___entry0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::TrySetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationEntry_TrySetValue_mAB6B3FCFBCCAA62DE2964BD3F79510C7EBD3C9C5 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreLogger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogWarning_m324CE62EFBFC9487C9887F40734A3F0187480B9C (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::get_IsReadOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfigurationEntry_get_IsReadOnly_m1A946D6DCA365C1DB33FA92F1F1609DE42EF2746_inline (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method);
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011_inline (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.ConfigurationEntry::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationEntry__ctor_m219AA70B213D204EE35413E503586F8CCF5A56DE (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, String_t* ___value0, bool ___isReadOnly1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer::.ctor(Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewtonsoftSerializer__ctor_mD60DDB945FB57C1990CAC3687364E1C401CF854B (NewtonsoftSerializer_t6AC54B3B1A46C7BFDA7B7880863E43B97D8ED56C * __this, JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 * ___settings0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::.ctor(Unity.Services.Core.Internal.Serialization.IJsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingAssetsConfigurationLoader__ctor_mE559B37BDD838557C51247ACE85EB63885C6F03B (StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * __this, RuntimeObject* ___serializer0, const RuntimeMethod* method);
// System.String Unity.Services.Core.ExternalUserIdProperty::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExternalUserIdProperty_get_UserId_mAFEBA84C3900C8ADF7BAA429739D1AD74F7C7A58_inline (ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C * __this, const RuntimeMethod* method);
// System.String Unity.Services.Core.Configuration.ProjectConfiguration::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProjectConfiguration_GetString_m04D6676C63EC7EAAEC7B262391BAC0E11C6CA5D1 (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method);
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m083F8EB6F0A07B24C26310648CB2380C3D3AAEE7 (String_t* ___value0, bool* ___result1, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBF1E9DE2F68A26A755BCB8BC83DDAE9B45F3AB16 (Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m63767C2AD1295D9C38EBAD72A237C0A5A3D18A71_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * Enumerable_ToDictionary_TisKeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444_TisString_t_TisString_t_m6D08B4C62960F61A2FCA19BC1EBD35D79A0C45E7 (RuntimeObject* ___source0, Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * ___keySelector1, Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*) (RuntimeObject*, Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 *, Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 *, const RuntimeMethod*))Enumerable_ToDictionary_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisRuntimeObject_TisRuntimeObject_mBDF6C6DD35A92D9E746EF77831C3819959A60050_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// Unity.Services.Core.Internal.Serialization.IJsonSerializer Unity.Services.Core.Configuration.ProjectConfiguration::get_Serializer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProjectConfiguration_get_Serializer_m29007D27299EC7B89FA0C256CD233E81774FA37C_inline (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.String>()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0[] System.Array::Empty<Unity.Services.Core.Configuration.ConfigurationEntry>()
inline ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* Array_Empty_TisConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_mA5DF99BFDD7A6F08F8D8CE27311168A268AEE0F5_inline (const RuntimeMethod* method)
{
	return ((  ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m61D6A2697FDB19AC63CE644417DA4ED26C02A879 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m61D6A2697FDB19AC63CE644417DA4ED26C02A879_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Internal.UnityWebRequestUtils::GetTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * UnityWebRequestUtils_GetTextAsync_m7B78C307821739ECB32B0B1AB752DA886256C6AB (String_t* ___uri0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m166AFF884DF1D7038231FEAE88B3F7084C9E2BD9 (U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mB5E6E15DC1D9331B242E2D27D9836DA23213E8C3_inline (KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::get_Value()
inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * KeyValuePair_2_get_Value_m381235236BD1373F2E07E5793DC06A5205DFBCD1_inline (KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444 * __this, const RuntimeMethod* method)
{
	return ((  ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * (*) (KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Configuration.StreamingAssetsUtils::GetFileTextFromStreamingAssetsAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * StreamingAssetsUtils_GetFileTextFromStreamingAssetsAsync_m3889E5A0492F8F632A6E4F9A3DF33D067218EFC8 (String_t* ___path0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m44FA1495FBC36C567F4DD324B0E7D4AE6E1ADC78 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m0A00E1B12EC8C8EC78E900D54470C1C079CE66CB_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895 (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B , const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__2_MoveNext_m2D3E8DDDCBD5C405ED9F2238BCCFF49820C70E2F (U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__2_SetStateMachine_m61C2EE47EEA0D36AFEEA350522DA80226F3576D1 (U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.String Unity.Services.Core.Configuration.CloudProjectId::GetCloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CloudProjectId_GetCloudProjectId_mC63F8F73A4CC2606F0D28E36DD8C311F7FA88214 (CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5 * __this, const RuntimeMethod* method)
{
	{
		// return Application.cloudProjectId;
		String_t* L_0;
		L_0 = Application_get_cloudProjectId_m4428D3F30727F38D42D63962932341043560E43D(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Configuration.CloudProjectId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudProjectId__ctor_m78F6E314F7DD32F391CEE187C9812C61FC6FDFB8 (CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.Configuration.SerializableProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_m5108DA7E7876453FEE4E030AD578C513313446CB (RuntimeObject* ___self0, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___config1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * V_2 = NULL;
	{
		// for (var i = 0; i < config.Keys.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// var entryKey = config.Keys[i];
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_0 = ___config1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0.get_Keys_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var entryValue = config.Values[i];
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_5 = ___config1;
		ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* L_6 = L_5.get_Values_1();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// self.SetOrCreateEntry(entryKey, entryValue);
		RuntimeObject* L_10 = ___self0;
		String_t* L_11 = V_1;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_12 = V_2;
		ConfigurationCollectionHelper_SetOrCreateEntry_m02712DDC35D8AA7A92265B5307CC8A2452176AF2(L_10, L_11, L_12, /*hidden argument*/NULL);
		// for (var i = 0; i < config.Keys.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0022:
	{
		// for (var i = 0; i < config.Keys.Length; i++)
		int32_t L_14 = V_0;
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_15 = ___config1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15.get_Keys_0();
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_m36219B38089B98238B7FB691ABF4754AB31CA170 (RuntimeObject* ___self0, InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var option in options.Values)
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_0 = ___options1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InitializationOptions_get_Values_m7DCAFF9B9A7F5729B15CB4E3D2E128AD6328CC36_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_000e:
		{
			// foreach (var option in options.Values)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_4;
			L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			// var optionValue = Convert.ToString(option.Value, CultureInfo.InvariantCulture);
			RuntimeObject * L_5;
			L_5 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_6;
			L_6 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
			String_t* L_7;
			L_7 = Convert_ToString_m76907E327BF16DC37142EAE2D8F461CECD6DE4EB(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			// self.SetOrCreateEntry(option.Key, optionValue);
			RuntimeObject* L_8 = ___self0;
			String_t* L_9;
			L_9 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			String_t* L_10 = V_2;
			ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_11;
			L_11 = ConfigurationEntry_op_Implicit_m6673309A77303555BB112DFA786C9B8079BB48A8(L_10, /*hidden argument*/NULL);
			ConfigurationCollectionHelper_SetOrCreateEntry_m02712DDC35D8AA7A92265B5307CC8A2452176AF2(L_8, L_9, L_11, /*hidden argument*/NULL);
		}

IL_003a:
		{
			// foreach (var option in options.Values)
			RuntimeObject* L_12 = V_0;
			NullCheck(L_12);
			bool L_13;
			L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_000e;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_0;
			if (!L_14)
			{
				goto IL_004d;
			}
		}

IL_0047:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_004d:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::SetOrCreateEntry(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String,Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_SetOrCreateEntry_m02712DDC35D8AA7A92265B5307CC8A2452176AF2 (RuntimeObject* ___self0, String_t* ___key1, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ___entry2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BABD447B478833BDA1B9F70E833040EF5CFF2C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral562CEAFE746CF9C5A3294C09EBB603054B01D9A3);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * V_0 = NULL;
	{
		// if (self.TryGetValue(key, out var existingEntry))
		RuntimeObject* L_0 = ___self0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** >::Invoke(5 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::TryGetValue(!0,!1&) */, IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var, L_0, L_1, (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 **)(&V_0));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// if (!existingEntry.TrySetValue(entry))
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_3 = V_0;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_4 = ___entry2;
		String_t* L_5;
		L_5 = ConfigurationEntry_op_Implicit_mAB2DECA59966A045CB115C66AC338E7C2EFCCB48(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = ConfigurationEntry_TrySetValue_mAB6B3FCFBCCAA62DE2964BD3F79510C7EBD3C9C5(L_3, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		// CoreLogger.LogWarning(
		//     $"You are attempting to initialize Operate Solution SDK with an option \"{key}\"" +
		//     " which is readonly at runtime and can be modified only through Project Settings." +
		//     " The value provided as initialization option will be ignored." +
		//     $" Please update {nameof(InitializationOptions)} in order to remove this warning.");
		String_t* L_7 = ___key1;
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral0BABD447B478833BDA1B9F70E833040EF5CFF2C9, L_7, _stringLiteral562CEAFE746CF9C5A3294C09EBB603054B01D9A3, /*hidden argument*/NULL);
		CoreLogger_LogWarning_m324CE62EFBFC9487C9887F40734A3F0187480B9C(L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002f:
	{
		// self[key] = entry;
		RuntimeObject* L_9 = ___self0;
		String_t* L_10 = ___key1;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_11 = ___entry2;
		NullCheck(L_9);
		InterfaceActionInvoker2< String_t*, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::set_Item(!0,!1) */, IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var, L_9, L_10, L_11);
	}

IL_0037:
	{
		// }
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
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// public string Value => m_Value;
		String_t* L_0 = __this->get_m_Value_0();
		return L_0;
	}
}
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationEntry_get_IsReadOnly_m1A946D6DCA365C1DB33FA92F1F1609DE42EF2746 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// get => m_IsReadOnly;
		bool L_0 = __this->get_m_IsReadOnly_1();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationEntry__ctor_m0FF48E86A3FAD0EFBACE9EEBBF4D0A647D2B73F4 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// public ConfigurationEntry() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public ConfigurationEntry() {}
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationEntry::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationEntry__ctor_m219AA70B213D204EE35413E503586F8CCF5A56DE (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, String_t* ___value0, bool ___isReadOnly1, const RuntimeMethod* method)
{
	{
		// public ConfigurationEntry(string value, bool isReadOnly = false)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Value = value;
		String_t* L_0 = ___value0;
		__this->set_m_Value_0(L_0);
		// m_IsReadOnly = isReadOnly;
		bool L_1 = ___isReadOnly1;
		__this->set_m_IsReadOnly_1(L_1);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::TrySetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationEntry_TrySetValue_mAB6B3FCFBCCAA62DE2964BD3F79510C7EBD3C9C5 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// if (IsReadOnly)
		bool L_0;
		L_0 = ConfigurationEntry_get_IsReadOnly_m1A946D6DCA365C1DB33FA92F1F1609DE42EF2746_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// m_Value = value;
		String_t* L_1 = ___value0;
		__this->set_m_Value_0(L_1);
		// return true;
		return (bool)1;
	}
}
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_op_Implicit_mAB2DECA59966A045CB115C66AC338E7C2EFCCB48 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ___entry0, const RuntimeMethod* method)
{
	{
		// public static implicit operator string(ConfigurationEntry entry) => entry.Value;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_0 = ___entry0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Services.Core.Configuration.ConfigurationEntry Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ConfigurationEntry_op_Implicit_m6673309A77303555BB112DFA786C9B8079BB48A8 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static implicit operator ConfigurationEntry(string value) => new ConfigurationEntry(value);
		String_t* L_0 = ___value0;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_1 = (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 *)il2cpp_codegen_object_new(ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_il2cpp_TypeInfo_var);
		ConfigurationEntry__ctor_m219AA70B213D204EE35413E503586F8CCF5A56DE(L_1, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
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
// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::get_ConfigurationLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationUtils_get_ConfigurationLoader_m43E1A55F93B27A5203B0E706C204FDB315E15A91 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IConfigurationLoader ConfigurationLoader { get; internal set; }
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var))->get_U3CConfigurationLoaderU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationUtils__cctor_m5C4DA03820D2A7A10FDE0B2B269FC45BCD031042 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewtonsoftSerializer_t6AC54B3B1A46C7BFDA7B7880863E43B97D8ED56C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// = new StreamingAssetsConfigurationLoader(new NewtonsoftSerializer());
		NewtonsoftSerializer_t6AC54B3B1A46C7BFDA7B7880863E43B97D8ED56C * L_0 = (NewtonsoftSerializer_t6AC54B3B1A46C7BFDA7B7880863E43B97D8ED56C *)il2cpp_codegen_object_new(NewtonsoftSerializer_t6AC54B3B1A46C7BFDA7B7880863E43B97D8ED56C_il2cpp_TypeInfo_var);
		NewtonsoftSerializer__ctor_mD60DDB945FB57C1990CAC3687364E1C401CF854B(L_0, (JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 *)NULL, /*hidden argument*/NULL);
		StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * L_1 = (StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA *)il2cpp_codegen_object_new(StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA_il2cpp_TypeInfo_var);
		StreamingAssetsConfigurationLoader__ctor_mE559B37BDD838557C51247ACE85EB63885C6F03B(L_1, L_0, /*hidden argument*/NULL);
		((ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var))->set_U3CConfigurationLoaderU3Ek__BackingField_0(L_1);
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
// System.String Unity.Services.Core.Configuration.ExternalUserId::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalUserId_get_UserId_m9BF1F51F9EF719B77237EA7377D66426A8F1B325 (ExternalUserId_tBCE85188124C17D544F70F78E1FC787B044AE32B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string UserId => UnityServices.ExternalUserIdProperty.UserId;
		IL2CPP_RUNTIME_CLASS_INIT(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var);
		ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C * L_0 = ((UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var))->get_ExternalUserIdProperty_2();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ExternalUserIdProperty_get_UserId_mAFEBA84C3900C8ADF7BAA429739D1AD74F7C7A58_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Core.Configuration.ExternalUserId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserId__ctor_m55DF218F540CA6AB61D74B685023E643BE4DAC10 (ExternalUserId_tBCE85188124C17D544F70F78E1FC787B044AE32B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Unity.Services.Core.Internal.Serialization.IJsonSerializer Unity.Services.Core.Configuration.ProjectConfiguration::get_Serializer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProjectConfiguration_get_Serializer_m29007D27299EC7B89FA0C256CD233E81774FA37C (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, const RuntimeMethod* method)
{
	{
		// internal IJsonSerializer Serializer { get; }
		RuntimeObject* L_0 = __this->get_U3CSerializerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.Internal.Serialization.IJsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectConfiguration__ctor_mB8A4479889F693F513D4C0EC4B32CFEDB0C30D9A (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, RuntimeObject* ___configValues0, RuntimeObject* ___serializer1, const RuntimeMethod* method)
{
	{
		// public ProjectConfiguration(
		//     IReadOnlyDictionary<string, ConfigurationEntry> configValues, IJsonSerializer serializer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_ConfigValues = configValues;
		RuntimeObject* L_0 = ___configValues0;
		__this->set_m_ConfigValues_1(L_0);
		// Serializer = serializer;
		RuntimeObject* L_1 = ___serializer1;
		__this->set_U3CSerializerU3Ek__BackingField_2(L_1);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Configuration.ProjectConfiguration::GetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProjectConfiguration_GetBool_mC0085796616F43874DEEB00730C18A7CC989250B (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, String_t* ___key0, bool ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var stringConfig = GetString(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = ProjectConfiguration_GetString_m04D6676C63EC7EAAEC7B262391BAC0E11C6CA5D1(__this, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		// return bool.TryParse(stringConfig, out var parsedValue)
		//     ? parsedValue
		//     : defaultValue;
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Boolean_TryParse_m083F8EB6F0A07B24C26310648CB2380C3D3AAEE7(L_1, (bool*)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		bool L_3 = ___defaultValue1;
		return L_3;
	}

IL_0013:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Unity.Services.Core.Configuration.ProjectConfiguration::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProjectConfiguration_GetInt_m4E9963ED86AA4A19F178BE12B7268BE19E30F999 (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var stringConfig = GetString(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = ProjectConfiguration_GetString_m04D6676C63EC7EAAEC7B262391BAC0E11C6CA5D1(__this, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		// return int.TryParse(stringConfig, out var parsedValue)
		//     ? parsedValue
		//     : defaultValue;
		bool L_2;
		L_2 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = ___defaultValue1;
		return L_3;
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProjectConfiguration_GetString_m04D6676C63EC7EAAEC7B262391BAC0E11C6CA5D1 (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t716F45354D8FE57925A2F26675770D906A746745_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * V_0 = NULL;
	{
		// return m_ConfigValues.TryGetValue(key, out var configValue)
		//     ? configValue.Value
		//     : defaultValue;
		RuntimeObject* L_0 = __this->get_m_ConfigValues_1();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::TryGetValue(!0,!1&) */, IReadOnlyDictionary_2_t716F45354D8FE57925A2F26675770D906A746745_il2cpp_TypeInfo_var, L_0, L_1, (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 **)(&V_0));
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_3 = ___defaultValue1;
		return L_3;
	}

IL_0012:
	{
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011_inline(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProjectConfiguration_ToJson_m62245E46D1F69725650608FD1ED7020A680A534B (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisKeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444_TisString_t_TisString_t_m6D08B4C62960F61A2FCA19BC1EBD35D79A0C45E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mBF1E9DE2F68A26A755BCB8BC83DDAE9B45F3AB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonSerializer_SerializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m985381777D11E26BD19F500C32633D40B2696BA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToJsonU3Eb__10_0_mFE95E8C6FF59D4B6180CA472495A385E924BED23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToJsonU3Eb__10_1_m04803A271F72F53E1F82AFA881C6C3CEEBDFB3F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_0 = NULL;
	Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * G_B5_0 = NULL;
	Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * G_B4_0 = NULL;
	Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	{
		// if (m_JsonCache == null)
		String_t* L_0 = __this->get_m_JsonCache_0();
		if (L_0)
		{
			goto IL_0064;
		}
	}
	{
		// var dict = m_ConfigValues.ToDictionary(pair => pair.Key, pair => pair.Value.Value);
		RuntimeObject* L_1 = __this->get_m_ConfigValues_1();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var);
		Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * L_2 = ((U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var))->get_U3CU3E9__10_0_1();
		Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * L_4 = ((U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * L_5 = (Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 *)il2cpp_codegen_object_new(Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65_il2cpp_TypeInfo_var);
		Func_2__ctor_mBF1E9DE2F68A26A755BCB8BC83DDAE9B45F3AB16(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CToJsonU3Eb__10_0_mFE95E8C6FF59D4B6180CA472495A385E924BED23_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBF1E9DE2F68A26A755BCB8BC83DDAE9B45F3AB16_RuntimeMethod_var);
		Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * L_6 = L_5;
		((U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var))->set_U3CU3E9__10_0_1(L_6);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_1;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var);
		Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * L_7 = ((U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var))->get_U3CU3E9__10_1_2();
		Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * L_8 = L_7;
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		if (L_8)
		{
			G_B5_0 = L_8;
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * L_9 = ((U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * L_10 = (Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 *)il2cpp_codegen_object_new(Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65_il2cpp_TypeInfo_var);
		Func_2__ctor_mBF1E9DE2F68A26A755BCB8BC83DDAE9B45F3AB16(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CToJsonU3Eb__10_1_m04803A271F72F53E1F82AFA881C6C3CEEBDFB3F8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBF1E9DE2F68A26A755BCB8BC83DDAE9B45F3AB16_RuntimeMethod_var);
		Func_2_t630A7FF299548CC975A9572BF5C3B6D608102C65 * L_11 = L_10;
		((U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var))->set_U3CU3E9__10_1_2(L_11);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_004c:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_12;
		L_12 = Enumerable_ToDictionary_TisKeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444_TisString_t_TisString_t_m6D08B4C62960F61A2FCA19BC1EBD35D79A0C45E7(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/Enumerable_ToDictionary_TisKeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444_TisString_t_TisString_t_m6D08B4C62960F61A2FCA19BC1EBD35D79A0C45E7_RuntimeMethod_var);
		V_0 = L_12;
		// m_JsonCache = Serializer.SerializeObject(dict);
		RuntimeObject* L_13;
		L_13 = ProjectConfiguration_get_Serializer_m29007D27299EC7B89FA0C256CD233E81774FA37C_inline(__this, /*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker1< String_t*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(IJsonSerializer_SerializeObject_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_m985381777D11E26BD19F500C32633D40B2696BA1_RuntimeMethod_var, L_13, L_14);
		__this->set_m_JsonCache_0(L_15);
	}

IL_0064:
	{
		// return m_JsonCache;
		String_t* L_16 = __this->get_m_JsonCache_0();
		return L_16;
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
// Conversion methods for marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_pinvoke(const SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B& unmarshaled, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_pinvoke_back(const SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_pinvoke& marshaled, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B& unmarshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_pinvoke_cleanup(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_com(const SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B& unmarshaled, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_com& marshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_com_back(const SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_com& marshaled, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B& unmarshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_com_cleanup(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_com& marshaled)
{
}
// Unity.Services.Core.Configuration.SerializableProjectConfiguration Unity.Services.Core.Configuration.SerializableProjectConfiguration::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  SerializableProjectConfiguration_get_Empty_m82FCFB758A9B72A0A875F64C007D32B9BE207BDA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_mA5DF99BFDD7A6F08F8D8CE27311168A268AEE0F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//     => new SerializableProjectConfiguration
		// {
		//     Keys = Array.Empty<string>(),
		//     Values = Array.Empty<ConfigurationEntry>(),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B ));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		(&V_0)->set_Keys_0(L_0);
		ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* L_1;
		L_1 = Array_Empty_TisConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_mA5DF99BFDD7A6F08F8D8CE27311168A268AEE0F5_inline(/*hidden argument*/Array_Empty_TisConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_mA5DF99BFDD7A6F08F8D8CE27311168A268AEE0F5_RuntimeMethod_var);
		(&V_0)->set_Values_1(L_1);
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_2 = V_0;
		return L_2;
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
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::.ctor(Unity.Services.Core.Internal.Serialization.IJsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingAssetsConfigurationLoader__ctor_mE559B37BDD838557C51247ACE85EB63885C6F03B (StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * __this, RuntimeObject* ___serializer0, const RuntimeMethod* method)
{
	{
		// public StreamingAssetsConfigurationLoader(IJsonSerializer serializer) => m_Serializer = serializer;
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public StreamingAssetsConfigurationLoader(IJsonSerializer serializer) => m_Serializer = serializer;
		RuntimeObject* L_0 = ___serializer0;
		__this->set_m_Serializer_0(L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::GetConfigAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * StreamingAssetsConfigurationLoader_GetConfigAsync_mC3B423304E7E1ECBCFD725B5995784E49F0E78D3 (StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m61D6A2697FDB19AC63CE644417DA4ED26C02A879_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE  L_1 = V_0;
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m61D6A2697FDB19AC63CE644417DA4ED26C02A879((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)(&V_1), (U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m61D6A2697FDB19AC63CE644417DA4ED26C02A879_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var);
		return L_4;
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
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Configuration.StreamingAssetsUtils::GetFileTextFromStreamingAssetsAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * StreamingAssetsUtils_GetFileTextFromStreamingAssetsAsync_m3889E5A0492F8F632A6E4F9A3DF33D067218EFC8 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var fullPath = Path.Combine(Application.streamingAssetsPath, path);
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, L_1, /*hidden argument*/NULL);
		// return UnityWebRequestUtils.GetTextAsync(fullPath);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_3;
		L_3 = UnityWebRequestUtils_GetTextAsync_m7B78C307821739ECB32B0B1AB752DA886256C6AB(L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC9C7A0F030BFC3F4C4C94E1634727F0A689FAE20 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * L_0 = (U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A *)il2cpp_codegen_object_new(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m166AFF884DF1D7038231FEAE88B3F7084C9E2BD9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m166AFF884DF1D7038231FEAE88B3F7084C9E2BD9 (U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<ToJson>b__10_0(System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToJsonU3Eb__10_0_mFE95E8C6FF59D4B6180CA472495A385E924BED23 (U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * __this, KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB5E6E15DC1D9331B242E2D27D9836DA23213E8C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var dict = m_ConfigValues.ToDictionary(pair => pair.Key, pair => pair.Value.Value);
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mB5E6E15DC1D9331B242E2D27D9836DA23213E8C3_inline((KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444 *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Key_mB5E6E15DC1D9331B242E2D27D9836DA23213E8C3_RuntimeMethod_var);
		return L_0;
	}
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<ToJson>b__10_1(System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToJsonU3Eb__10_1_m04803A271F72F53E1F82AFA881C6C3CEEBDFB3F8 (U3CU3Ec_tDC47547D6928A2FFDA7F1B48FE119288F7F7316A * __this, KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m381235236BD1373F2E07E5793DC06A5205DFBCD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var dict = m_ConfigValues.ToDictionary(pair => pair.Key, pair => pair.Value.Value);
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_0;
		L_0 = KeyValuePair_2_get_Value_m381235236BD1373F2E07E5793DC06A5205DFBCD1_inline((KeyValuePair_2_tA531EC395316E844D55D024C79274C4FA0F71444 *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Value_m381235236BD1373F2E07E5793DC06A5205DFBCD1_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011_inline(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__2_MoveNext_m2D3E8DDDCBD5C405ED9F2238BCCFF49820C70E2F (U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m44FA1495FBC36C567F4DD324B0E7D4AE6E1ADC78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonSerializer_DeserializeObject_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_m7B92C3199AB34CFFD1B94ED89CF86C926D4C08F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * V_1 = NULL;
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004c;
			}
		}

IL_0011:
		{
			// var jsonConfig = await StreamingAssetsUtils.GetFileTextFromStreamingAssetsAsync(
			//     ConfigurationUtils.ConfigFileName);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_3;
			L_3 = StreamingAssetsUtils_GetFileTextFromStreamingAssetsAsync_m3889E5A0492F8F632A6E4F9A3DF33D067218EFC8(_stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_4;
			L_4 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_3, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_4 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0069;
			}
		}

IL_002b:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_7 = V_4;
			__this->set_U3CU3Eu__1_3(L_7);
			AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m44FA1495FBC36C567F4DD324B0E7D4AE6E1ADC78((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_8, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), (U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE_m44FA1495FBC36C567F4DD324B0E7D4AE6E1ADC78_RuntimeMethod_var);
			goto IL_00ad;
		}

IL_004c:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_9 = __this->get_U3CU3Eu__1_3();
			V_4 = L_9;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_10 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0069:
		{
			String_t* L_12;
			L_12 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			V_3 = L_12;
			// var config = m_Serializer.DeserializeObject<SerializableProjectConfiguration>(jsonConfig);
			StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * L_13 = V_1;
			NullCheck(L_13);
			RuntimeObject* L_14 = L_13->get_m_Serializer_0();
			String_t* L_15 = V_3;
			NullCheck(L_14);
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_16;
			L_16 = GenericInterfaceFuncInvoker1< SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B , String_t* >::Invoke(IJsonSerializer_DeserializeObject_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_m7B92C3199AB34CFFD1B94ED89CF86C926D4C08F4_RuntimeMethod_var, L_14, L_15);
			// return config;
			V_2 = L_16;
			goto IL_0099;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0080;
		}
		throw e;
	}

CATCH_0080:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_17, L_18, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ad;
	} // end catch (depth: 1)

IL_0099:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_20 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_19, L_20, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var);
	}

IL_00ad:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetConfigAsyncU3Ed__2_MoveNext_m2D3E8DDDCBD5C405ED9F2238BCCFF49820C70E2F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * _thisAdjusted = reinterpret_cast<U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE *>(__this + _offset);
	U3CGetConfigAsyncU3Ed__2_MoveNext_m2D3E8DDDCBD5C405ED9F2238BCCFF49820C70E2F(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__2_SetStateMachine_m61C2EE47EEA0D36AFEEA350522DA80226F3576D1 (U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetConfigAsyncU3Ed__2_SetStateMachine_m61C2EE47EEA0D36AFEEA350522DA80226F3576D1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE * _thisAdjusted = reinterpret_cast<U3CGetConfigAsyncU3Ed__2_t4EC7FA7DC8E59A5910EA42DBF340F9E373D51DAE *>(__this + _offset);
	U3CGetConfigAsyncU3Ed__2_SetStateMachine_m61C2EE47EEA0D36AFEEA350522DA80226F3576D1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m7DCAFF9B9A7F5729B15CB4E3D2E128AD6328CC36_inline (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * __this, const RuntimeMethod* method)
{
	{
		// internal IDictionary<string, object> Values { get; }
		RuntimeObject* L_0 = __this->get_U3CValuesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfigurationEntry_get_IsReadOnly_m1A946D6DCA365C1DB33FA92F1F1609DE42EF2746_inline (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// get => m_IsReadOnly;
		bool L_0 = __this->get_m_IsReadOnly_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011_inline (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// public string Value => m_Value;
		String_t* L_0 = __this->get_m_Value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExternalUserIdProperty_get_UserId_mAFEBA84C3900C8ADF7BAA429739D1AD74F7C7A58_inline (ExternalUserIdProperty_tED6EC061CAA11E835C929D26A8FD488502E10D4C * __this, const RuntimeMethod* method)
{
	{
		// get => m_UserId;
		String_t* L_0 = __this->get_m_UserId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProjectConfiguration_get_Serializer_m29007D27299EC7B89FA0C256CD233E81774FA37C_inline (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, const RuntimeMethod* method)
{
	{
		// internal IJsonSerializer Serializer { get; }
		RuntimeObject* L_0 = __this->get_U3CSerializerU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}

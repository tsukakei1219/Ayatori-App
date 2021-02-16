#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>
struct List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TensorFlowLite.IGpuDelegate
struct IGpuDelegate_t5F0B1D3295BB08DFB01DACE1068F21D6A513CA95;
// TensorFlowLite.IGpuDelegate[]
struct IGpuDelegateU5BU5D_t3073A19EC7DB90B074E1A684A7060E029269D552;
// TensorFlowLite.Interpreter
struct Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D;
// TensorFlowLite.InterpreterOptions
struct InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6;
// TensorFlowLite.InterpreterOptions/ErrorReporterDelegate
struct ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD;

IL2CPP_EXTERN_C RuntimeClass* DataType_tA58D9447339155C617CDEC15FC22BA38E6305CEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGpuDelegate_t5F0B1D3295BB08DFB01DACE1068F21D6A513CA95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral053E9E8EF27D691F00E6B3BFCE1CC940BDFDAFE1;
IL2CPP_EXTERN_C String_t* _stringLiteral1A089B255E8E5C042333CDC2C11B772AF238C954;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4991EF73DB22DBF956AEBCCF74505187363A2D;
IL2CPP_EXTERN_C String_t* _stringLiteral346E3665D3189F53CA92548A12EE8795E25D86E8;
IL2CPP_EXTERN_C String_t* _stringLiteral4B945B591F1D71B3150D943026FDF2AC35E52FFF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral60BA4B2DAA4ED4D070FEC06687E249E0E6F9EE45;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A;
IL2CPP_EXTERN_C String_t* _stringLiteralD7E665F7809ED29B9598EE13E5AFDD0335AF8E6E;
IL2CPP_EXTERN_C String_t* _stringLiteralED72D33E8B986626616E2C6145982F41E650F943;
IL2CPP_EXTERN_C String_t* _stringLiteralF6CAE680E9067BA224F3AB51101D2591DABC4A02;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3E9526943E310EC2821811A10501ADAC68D48AD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8BB90F7837C46C7BEFE5A262F3354736EF536366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m95690165FF66001E44CBA9DF3DC71504FB226304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterpreterOptions_OnErrorReporter_m6110B5D8F4D729DAC7D69BDD89104EEE67C47C21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interpreter__ctor_m1A43DB9387D8C7BDC079E2AC3763068AD9A33079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0FD91930C49833146658EA6AE952E259207EB945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE837156EBDD3006CF9997930A657D0E1803C1180_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB194CA433F7ED9FD278C87A0B2FC0AD65CC1EB7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFFC193716A55394BB04BAA9621B2BB23F4073CFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4CACB6ACA10555CE7B69D1B285797F3F6843FD42_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ErrorReporterDelegate_BeginInvoke_m713665CB9D7752A04093ED7DD854A7EE43820170_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterpreterOptions_AddGpuDelegate_mA6E34E7ECDA48A7E12CA417008B99B372540AFAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterpreterOptions_CreateGpuDelegate_m7C4BDB2589970BD48E718FE0F10F60EFA78B2A29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterpreterOptions_Dispose_mA64A85AF79E71AEBC9087CF578854B6590EB1900_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterpreterOptions_OnErrorReporter_m6110B5D8F4D729DAC7D69BDD89104EEE67C47C21_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterpreterOptions__ctor_m5B1CA65B5154E8C3C29CA054C40C913BFF2A2576_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Interpreter_Dispose_m9B2E5AD1BE82D301D68466F2B8B30DFC43BB0BC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Interpreter_GetTensorInfo_m6C95AA9C946EDD07107CC7F34C64CB0EF684F68A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Interpreter_GetTensorName_m2FAEB45F5C88561D38300900B6594AC29D33EFDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Interpreter__ctor_m1A43DB9387D8C7BDC079E2AC3763068AD9A33079_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QuantizationParams_ToString_m1CF5F12CF56F7F7989EF8879B2A4EA5362A8245D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TensorInfo_ToString_m0535A4EDDCCC121E15280E48008A528FAD0F93BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1B1657119573DE268DFD3464B2A154072B11204D 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>
struct  List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IGpuDelegateU5BU5D_t3073A19EC7DB90B074E1A684A7060E029269D552* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393, ____items_1)); }
	inline IGpuDelegateU5BU5D_t3073A19EC7DB90B074E1A684A7060E029269D552* get__items_1() const { return ____items_1; }
	inline IGpuDelegateU5BU5D_t3073A19EC7DB90B074E1A684A7060E029269D552** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IGpuDelegateU5BU5D_t3073A19EC7DB90B074E1A684A7060E029269D552* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IGpuDelegateU5BU5D_t3073A19EC7DB90B074E1A684A7060E029269D552* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393_StaticFields, ____emptyArray_5)); }
	inline IGpuDelegateU5BU5D_t3073A19EC7DB90B074E1A684A7060E029269D552* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IGpuDelegateU5BU5D_t3073A19EC7DB90B074E1A684A7060E029269D552** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IGpuDelegateU5BU5D_t3073A19EC7DB90B074E1A684A7060E029269D552* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<TensorFlowLite.IGpuDelegate>
struct  Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1, ___list_0)); }
	inline List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * get_list_0() const { return ___list_0; }
	inline List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// TensorFlowLite.Interpreter_QuantizationParams
struct  QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879 
{
public:
	// System.Single TensorFlowLite.Interpreter_QuantizationParams::scale
	float ___scale_0;
	// System.Int32 TensorFlowLite.Interpreter_QuantizationParams::zeroPoint
	int32_t ___zeroPoint_1;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879, ___scale_0)); }
	inline float get_scale_0() const { return ___scale_0; }
	inline float* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(float value)
	{
		___scale_0 = value;
	}

	inline static int32_t get_offset_of_zeroPoint_1() { return static_cast<int32_t>(offsetof(QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879, ___zeroPoint_1)); }
	inline int32_t get_zeroPoint_1() const { return ___zeroPoint_1; }
	inline int32_t* get_address_of_zeroPoint_1() { return &___zeroPoint_1; }
	inline void set_zeroPoint_1(int32_t value)
	{
		___zeroPoint_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.Interpreter
struct  Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D  : public RuntimeObject
{
public:
	// System.IntPtr TensorFlowLite.Interpreter::model
	intptr_t ___model_0;
	// System.IntPtr TensorFlowLite.Interpreter::interpreter
	intptr_t ___interpreter_1;
	// TensorFlowLite.InterpreterOptions TensorFlowLite.Interpreter::options
	InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * ___options_2;

public:
	inline static int32_t get_offset_of_model_0() { return static_cast<int32_t>(offsetof(Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D, ___model_0)); }
	inline intptr_t get_model_0() const { return ___model_0; }
	inline intptr_t* get_address_of_model_0() { return &___model_0; }
	inline void set_model_0(intptr_t value)
	{
		___model_0 = value;
	}

	inline static int32_t get_offset_of_interpreter_1() { return static_cast<int32_t>(offsetof(Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D, ___interpreter_1)); }
	inline intptr_t get_interpreter_1() const { return ___interpreter_1; }
	inline intptr_t* get_address_of_interpreter_1() { return &___interpreter_1; }
	inline void set_interpreter_1(intptr_t value)
	{
		___interpreter_1 = value;
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D, ___options_2)); }
	inline InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * get_options_2() const { return ___options_2; }
	inline InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_2), (void*)value);
	}
};


// TensorFlowLite.Interpreter_DataType
struct  DataType_tA58D9447339155C617CDEC15FC22BA38E6305CEA 
{
public:
	// System.Int32 TensorFlowLite.Interpreter_DataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataType_tA58D9447339155C617CDEC15FC22BA38E6305CEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.Interpreter_Status
struct  Status_t094BC25912A7460FA64D4AEF865241EA9C5FF9BE 
{
public:
	// System.Int32 TensorFlowLite.Interpreter_Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t094BC25912A7460FA64D4AEF865241EA9C5FF9BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.InterpreterOptions
struct  InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6  : public RuntimeObject
{
public:
	// System.IntPtr TensorFlowLite.InterpreterOptions::nativePtr
	intptr_t ___nativePtr_0;
	// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate> TensorFlowLite.InterpreterOptions::delegates
	List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * ___delegates_1;
	// System.Int32 TensorFlowLite.InterpreterOptions::_threads
	int32_t ____threads_2;
	// System.Boolean TensorFlowLite.InterpreterOptions::_useNNAPI
	bool ____useNNAPI_3;

public:
	inline static int32_t get_offset_of_nativePtr_0() { return static_cast<int32_t>(offsetof(InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6, ___nativePtr_0)); }
	inline intptr_t get_nativePtr_0() const { return ___nativePtr_0; }
	inline intptr_t* get_address_of_nativePtr_0() { return &___nativePtr_0; }
	inline void set_nativePtr_0(intptr_t value)
	{
		___nativePtr_0 = value;
	}

	inline static int32_t get_offset_of_delegates_1() { return static_cast<int32_t>(offsetof(InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6, ___delegates_1)); }
	inline List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * get_delegates_1() const { return ___delegates_1; }
	inline List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 ** get_address_of_delegates_1() { return &___delegates_1; }
	inline void set_delegates_1(List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * value)
	{
		___delegates_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_1), (void*)value);
	}

	inline static int32_t get_offset_of__threads_2() { return static_cast<int32_t>(offsetof(InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6, ____threads_2)); }
	inline int32_t get__threads_2() const { return ____threads_2; }
	inline int32_t* get_address_of__threads_2() { return &____threads_2; }
	inline void set__threads_2(int32_t value)
	{
		____threads_2 = value;
	}

	inline static int32_t get_offset_of__useNNAPI_3() { return static_cast<int32_t>(offsetof(InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6, ____useNNAPI_3)); }
	inline bool get__useNNAPI_3() const { return ____useNNAPI_3; }
	inline bool* get_address_of__useNNAPI_3() { return &____useNNAPI_3; }
	inline void set__useNNAPI_3(bool value)
	{
		____useNNAPI_3 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// TensorFlowLite.Interpreter_TensorInfo
struct  TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 
{
public:
	// System.String TensorFlowLite.Interpreter_TensorInfo::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// TensorFlowLite.Interpreter_DataType TensorFlowLite.Interpreter_TensorInfo::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;
	// System.Int32[] TensorFlowLite.Interpreter_TensorInfo::<shape>k__BackingField
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___U3CshapeU3Ek__BackingField_2;
	// TensorFlowLite.Interpreter_QuantizationParams TensorFlowLite.Interpreter_TensorInfo::<quantizationParams>k__BackingField
	QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  ___U3CquantizationParamsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CshapeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078, ___U3CshapeU3Ek__BackingField_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_U3CshapeU3Ek__BackingField_2() const { return ___U3CshapeU3Ek__BackingField_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_U3CshapeU3Ek__BackingField_2() { return &___U3CshapeU3Ek__BackingField_2; }
	inline void set_U3CshapeU3Ek__BackingField_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___U3CshapeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshapeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CquantizationParamsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078, ___U3CquantizationParamsU3Ek__BackingField_3)); }
	inline QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  get_U3CquantizationParamsU3Ek__BackingField_3() const { return ___U3CquantizationParamsU3Ek__BackingField_3; }
	inline QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879 * get_address_of_U3CquantizationParamsU3Ek__BackingField_3() { return &___U3CquantizationParamsU3Ek__BackingField_3; }
	inline void set_U3CquantizationParamsU3Ek__BackingField_3(QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  value)
	{
		___U3CquantizationParamsU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TensorFlowLite.Interpreter/TensorInfo
struct TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	int32_t ___U3CtypeU3Ek__BackingField_1;
	Il2CppSafeArray/*NONE*/* ___U3CshapeU3Ek__BackingField_2;
	QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  ___U3CquantizationParamsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of TensorFlowLite.Interpreter/TensorInfo
struct TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	int32_t ___U3CtypeU3Ek__BackingField_1;
	Il2CppSafeArray/*NONE*/* ___U3CshapeU3Ek__BackingField_2;
	QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  ___U3CquantizationParamsU3Ek__BackingField_3;
};

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// TensorFlowLite.InterpreterOptions_ErrorReporterDelegate
struct  ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4CACB6ACA10555CE7B69D1B285797F3F6843FD42_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.Interpreter::TfLiteModelCreate(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteModelCreate_mA46E7607B62078E0D2E010D4EC02730271E521D9 (intptr_t ___model_data0, int32_t ___model_size1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterCreate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterCreate_mC7A0D4FEB08AD9CB11DDED77AF74ACFBC1D604C4 (intptr_t ___model0, intptr_t ___optional_options1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter::TfLiteInterpreterDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteInterpreterDelete_m2423D2A1C651B8225D497604A6EC095E4D2658BD (intptr_t ___interpreter0, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter::TfLiteModelDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteModelDelete_m48BDCF1D59812B32258AA660D4FE33DFDCB757B7 (intptr_t ___model0, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_Dispose_mA64A85AF79E71AEBC9087CF578854B6590EB1900 (InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * __this, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterInvoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterInvoke_m3FF8ADDE8AAB4837EA16766BA4936ADFE0D036FA (intptr_t ___interpreter0, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter::ThrowIfError(TensorFlowLite.Interpreter/Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E (int32_t ___status0, const RuntimeMethod* method);
// System.Int32 TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensorCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterGetInputTensorCount_m854A424EBE00EE42E3EFAF622369F020D58BBD3C (intptr_t ___interpreter0, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetInputTensor_m26532664F52990529108C201444FF8F9539935BB (intptr_t ___interpreter0, int32_t ___input_index1, const RuntimeMethod* method);
// System.Int32 System.Buffer::ByteLength(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Buffer_ByteLength_m32E578C5A2F2E27327E83B6F9D3EB404F29656E8 (RuntimeArray * ___array0, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyFromBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyFromBuffer_mC5FE238835CAC634FCABF6D98BFB098644B3076D (intptr_t ___tensor0, intptr_t ___input_data1, int32_t ___input_data_size2, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterResizeInputTensor(System.IntPtr,System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterResizeInputTensor_mFAC85ACC0485323EA6C7F3F4C0BFDAD904F154EC (intptr_t ___interpreter0, int32_t ___input_index1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___input_dims2, int32_t ___input_dims_size3, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterAllocateTensors(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterAllocateTensors_m79533589669386983ED0B7D153857C78C028A1FC (intptr_t ___interpreter0, const RuntimeMethod* method);
// System.Int32 TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensorCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterGetOutputTensorCount_mDDBAC66DDC3071403D567FA10BC2186057ED746E (intptr_t ___interpreter0, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetOutputTensor_mD07695B3662A9C48F52BED82E5F82E090B7B4841 (intptr_t ___interpreter0, int32_t ___output_index1, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyToBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyToBuffer_m2FFAB7A9BD9B367EF7F3580E2B4B20E145B2ADC0 (intptr_t ___tensor0, intptr_t ___output_data1, int32_t ___output_data_size2, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/TensorInfo TensorFlowLite.Interpreter::GetTensorInfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078  Interpreter_GetTensorInfo_m6C95AA9C946EDD07107CC7F34C64CB0EF684F68A (intptr_t ___tensor0, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.Interpreter::TfLiteTensorName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteTensorName_m8F1D44C84F81673CF8C275CD242CCF8743EDF2AD (intptr_t ___tensor0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Int32 TensorFlowLite.Interpreter::TfLiteTensorNumDims(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorNumDims_m86B139DB9349BDBAF7FAC766563FB9C712550755 (intptr_t ___tensor0, const RuntimeMethod* method);
// System.Int32 TensorFlowLite.Interpreter::TfLiteTensorDim(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorDim_m71C7E164BEE0E1620128FBDC42D838F8FFE78092 (intptr_t ___tensor0, int32_t ___dim_index1, const RuntimeMethod* method);
// System.String TensorFlowLite.Interpreter::GetTensorName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Interpreter_GetTensorName_m2FAEB45F5C88561D38300900B6594AC29D33EFDB (intptr_t ___tensor0, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_name(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TensorInfo_set_name_m95BF31B0823F22BC9F0D2D5E8AED7891F5206A40_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, String_t* ___value0, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/DataType TensorFlowLite.Interpreter::TfLiteTensorType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorType_m59BE15CC30C17E80460764A9618E89DF867F622D (intptr_t ___tensor0, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_type(TensorFlowLite.Interpreter/DataType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TensorInfo_set_type_mFA3E29ADA3C65B5C5D33470896483A4CC28AF86A_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_shape(System.Int32[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TensorInfo_set_shape_m817DF49CB60C301183BF4969894C5C5B3F26281F_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___value0, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/QuantizationParams TensorFlowLite.Interpreter::TfLiteTensorQuantizationParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  Interpreter_TfLiteTensorQuantizationParams_m2894A1E8CA740F0B55E68DA17A401120B117FF77 (intptr_t ___tensor0, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_quantizationParams(TensorFlowLite.Interpreter/QuantizationParams)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TensorInfo_set_quantizationParams_m1F928F5F5DC803255E88E918FA6D2DF4C0429946_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String TensorFlowLite.Interpreter/QuantizationParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuantizationParams_ToString_m1CF5F12CF56F7F7989EF8879B2A4EA5362A8245D (QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879 * __this, const RuntimeMethod* method);
// System.String TensorFlowLite.Interpreter/TensorInfo::get_name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* TensorInfo_get_name_m12A02BBE5498510F8514582311EC92EF40ACA4E3_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/DataType TensorFlowLite.Interpreter/TensorInfo::get_type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TensorInfo_get_type_m2AF23871CBF5611839C7CC8749D4030D944449A1_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method);
// System.Int32[] TensorFlowLite.Interpreter/TensorInfo::get_shape()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* TensorInfo_get_shape_mF1FE12BDCDED824AD6F6776024A9DB90E0AF5214_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/QuantizationParams TensorFlowLite.Interpreter/TensorInfo::get_quantizationParams()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  TensorInfo_get_quantizationParams_m9786D5A995A4FCEF5F5DF62DCC23A277FD86E80E_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method);
// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
inline String_t* String_Join_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4CACB6ACA10555CE7B69D1B285797F3F6843FD42 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4CACB6ACA10555CE7B69D1B285797F3F6843FD42_gshared)(___separator0, ___values1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String TensorFlowLite.Interpreter/TensorInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TensorInfo_ToString_m0535A4EDDCCC121E15280E48008A528FAD0F93BB (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::OnErrorReporter(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_OnErrorReporter_m6110B5D8F4D729DAC7D69BDD89104EEE67C47C21 (intptr_t ___userData0, String_t* ___format1, intptr_t ___args2, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetNumThreads(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_m932D3ED9A984DAE40EBBBD806C88D839BDEE6C1A (intptr_t ___options0, int32_t ___num_threads1, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterpreterOptions_TfLiteInterpreterOptionsCreate_m752C0FB6F3EF2D8C96FD223F04C59A41B4E46000 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::.ctor()
inline void List_1__ctor_mFFC193716A55394BB04BAA9621B2BB23F4073CFF (List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate__ctor_m78BDB1627D3C8D15A4690945FE9802CAF889D9F0 (ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetErrorReporter(System.IntPtr,TensorFlowLite.InterpreterOptions/ErrorReporterDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetErrorReporter_mE1161446AD6D1B4C5BC2390C9EE8091B6A80237D (intptr_t ___options0, ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD * ___errorReporter1, intptr_t ___user_data2, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsDelete_mF1E8E47388F49BA6D208651422102D30BA1CE572 (intptr_t ___options0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::GetEnumerator()
inline Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1  List_1_GetEnumerator_mB194CA433F7ED9FD278C87A0B2FC0AD65CC1EB7B (List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1  (*) (List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m95690165FF66001E44CBA9DF3DC71504FB226304_inline (Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>::MoveNext()
inline bool Enumerator_MoveNext_m8BB90F7837C46C7BEFE5A262F3354736EF536366 (Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>::Dispose()
inline void Enumerator_Dispose_m3E9526943E310EC2821811A10501ADAC68D48AD6 (Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::Clear()
inline void List_1_Clear_mE837156EBDD3006CF9997930A657D0E1803C1180 (List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// TensorFlowLite.IGpuDelegate TensorFlowLite.InterpreterOptions::CreateGpuDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterpreterOptions_CreateGpuDelegate_m7C4BDB2589970BD48E718FE0F10F60EFA78B2A29 (const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsAddDelegate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsAddDelegate_m0C39F574280706800167BADE96CA1E1830C21F4C (intptr_t ___options0, intptr_t ____delegate1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::Add(!0)
inline void List_1_Add_m0FD91930C49833146658EA6AE952E259207EB945 (List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
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
// System.Void TensorFlowLite.Interpreter::.ctor(System.Byte[],TensorFlowLite.InterpreterOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter__ctor_m1A43DB9387D8C7BDC079E2AC3763068AD9A33079 (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___modelData0, InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Interpreter__ctor_m1A43DB9387D8C7BDC079E2AC3763068AD9A33079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// private TfLiteModel model = IntPtr.Zero;
		__this->set_model_0((intptr_t)(0));
		// private TfLiteInterpreter interpreter = IntPtr.Zero;
		__this->set_interpreter_1((intptr_t)(0));
		// public Interpreter(byte[] modelData, InterpreterOptions options)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// GCHandle modelDataHandle = GCHandle.Alloc(modelData, GCHandleType.Pinned);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___modelData0;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr modelDataPtr = modelDataHandle.AddrOfPinnedObject();
		intptr_t L_2 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// model = TfLiteModelCreate(modelDataPtr, modelData.Length);
		intptr_t L_3 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___modelData0;
		NullCheck(L_4);
		intptr_t L_5 = Interpreter_TfLiteModelCreate_mA46E7607B62078E0D2E010D4EC02730271E521D9((intptr_t)L_3, (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), /*hidden argument*/NULL);
		__this->set_model_0((intptr_t)L_5);
		// if (model == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Model");
		intptr_t L_6 = __this->get_model_0();
		bool L_7 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// if (model == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Model");
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_8, _stringLiteral346E3665D3189F53CA92548A12EE8795E25D86E8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, Interpreter__ctor_m1A43DB9387D8C7BDC079E2AC3763068AD9A33079_RuntimeMethod_var);
	}

IL_0058:
	{
		// this.options = options;
		InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * L_9 = ___options1;
		__this->set_options_2(L_9);
		// interpreter = TfLiteInterpreterCreate(model, options.nativePtr);
		intptr_t L_10 = __this->get_model_0();
		InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * L_11 = ___options1;
		NullCheck(L_11);
		intptr_t L_12 = L_11->get_nativePtr_0();
		intptr_t L_13 = Interpreter_TfLiteInterpreterCreate_mC7A0D4FEB08AD9CB11DDED77AF74ACFBC1D604C4((intptr_t)L_10, (intptr_t)L_12, /*hidden argument*/NULL);
		__this->set_interpreter_1((intptr_t)L_13);
		// if (interpreter == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Interpreter");
		intptr_t L_14 = __this->get_interpreter_1();
		bool L_15 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_14, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0093;
		}
	}
	{
		// if (interpreter == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Interpreter");
		Exception_t * L_16 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_16, _stringLiteral1A089B255E8E5C042333CDC2C11B772AF238C954, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, Interpreter__ctor_m1A43DB9387D8C7BDC079E2AC3763068AD9A33079_RuntimeMethod_var);
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_Dispose_m9B2E5AD1BE82D301D68466F2B8B30DFC43BB0BC3 (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Interpreter_Dispose_m9B2E5AD1BE82D301D68466F2B8B30DFC43BB0BC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interpreter != IntPtr.Zero) TfLiteInterpreterDelete(interpreter);
		intptr_t L_0 = __this->get_interpreter_1();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (interpreter != IntPtr.Zero) TfLiteInterpreterDelete(interpreter);
		intptr_t L_2 = __this->get_interpreter_1();
		Interpreter_TfLiteInterpreterDelete_m2423D2A1C651B8225D497604A6EC095E4D2658BD((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// interpreter = IntPtr.Zero;
		__this->set_interpreter_1((intptr_t)(0));
		// if (model != IntPtr.Zero) TfLiteModelDelete(model);
		intptr_t L_3 = __this->get_model_0();
		bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// if (model != IntPtr.Zero) TfLiteModelDelete(model);
		intptr_t L_5 = __this->get_model_0();
		Interpreter_TfLiteModelDelete_m48BDCF1D59812B32258AA660D4FE33DFDCB757B7((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// model = IntPtr.Zero;
		__this->set_model_0((intptr_t)(0));
		// if (options != null) options.Dispose();
		InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * L_6 = __this->get_options_2();
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		// if (options != null) options.Dispose();
		InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * L_7 = __this->get_options_2();
		NullCheck(L_7);
		InterpreterOptions_Dispose_mA64A85AF79E71AEBC9087CF578854B6590EB1900(L_7, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_Invoke_m27BEB82CC3D116D041DADB806C4CB658440ED575 (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, const RuntimeMethod* method)
{
	{
		// ThrowIfError(TfLiteInterpreterInvoke(interpreter));
		intptr_t L_0 = __this->get_interpreter_1();
		int32_t L_1 = Interpreter_TfLiteInterpreterInvoke_m3FF8ADDE8AAB4837EA16766BA4936ADFE0D036FA((intptr_t)L_0, /*hidden argument*/NULL);
		Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 TensorFlowLite.Interpreter::GetInputTensorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_GetInputTensorCount_m3A22CB3AAEC0FE41385B1E5BCB85313579288BEA (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, const RuntimeMethod* method)
{
	{
		// return TfLiteInterpreterGetInputTensorCount(interpreter);
		intptr_t L_0 = __this->get_interpreter_1();
		int32_t L_1 = Interpreter_TfLiteInterpreterGetInputTensorCount_m854A424EBE00EE42E3EFAF622369F020D58BBD3C((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TensorFlowLite.Interpreter::SetInputTensorData(System.Int32,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_SetInputTensorData_m2AC0ACBD2C6EAC1A1EFE1A68E853D89216F61494 (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, int32_t ___inputTensorIndex0, RuntimeArray * ___inputTensorData1, const RuntimeMethod* method)
{
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GCHandle tensorDataHandle = GCHandle.Alloc(inputTensorData, GCHandleType.Pinned);
		RuntimeArray * L_0 = ___inputTensorData1;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E(L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr tensorDataPtr = tensorDataHandle.AddrOfPinnedObject();
		intptr_t L_2 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// TfLiteTensor tensor = TfLiteInterpreterGetInputTensor(interpreter, inputTensorIndex);
		intptr_t L_3 = __this->get_interpreter_1();
		int32_t L_4 = ___inputTensorIndex0;
		intptr_t L_5 = Interpreter_TfLiteInterpreterGetInputTensor_m26532664F52990529108C201444FF8F9539935BB((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		// ThrowIfError(TfLiteTensorCopyFromBuffer(
		//     tensor, tensorDataPtr, Buffer.ByteLength(inputTensorData)));
		intptr_t L_6 = V_1;
		RuntimeArray * L_7 = ___inputTensorData1;
		int32_t L_8 = Buffer_ByteLength_m32E578C5A2F2E27327E83B6F9D3EB404F29656E8(L_7, /*hidden argument*/NULL);
		int32_t L_9 = Interpreter_TfLiteTensorCopyFromBuffer_mC5FE238835CAC634FCABF6D98BFB098644B3076D((intptr_t)L_5, (intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::ResizeInputTensor(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_ResizeInputTensor_m943CE79727660A8C2CEF98883A529D6222F7D1F7 (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, int32_t ___inputTensorIndex0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___inputTensorShape1, const RuntimeMethod* method)
{
	{
		// ThrowIfError(TfLiteInterpreterResizeInputTensor(
		//     interpreter, inputTensorIndex, inputTensorShape, inputTensorShape.Length));
		intptr_t L_0 = __this->get_interpreter_1();
		int32_t L_1 = ___inputTensorIndex0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ___inputTensorShape1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = ___inputTensorShape1;
		NullCheck(L_3);
		int32_t L_4 = Interpreter_TfLiteInterpreterResizeInputTensor_mFAC85ACC0485323EA6C7F3F4C0BFDAD904F154EC((intptr_t)L_0, L_1, L_2, (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))), /*hidden argument*/NULL);
		Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::AllocateTensors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_AllocateTensors_m13947A279A64A11DA57BF5A461A4B14D1B560B5F (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, const RuntimeMethod* method)
{
	{
		// ThrowIfError(TfLiteInterpreterAllocateTensors(interpreter));
		intptr_t L_0 = __this->get_interpreter_1();
		int32_t L_1 = Interpreter_TfLiteInterpreterAllocateTensors_m79533589669386983ED0B7D153857C78C028A1FC((intptr_t)L_0, /*hidden argument*/NULL);
		Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 TensorFlowLite.Interpreter::GetOutputTensorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_GetOutputTensorCount_mEB2167D1BF746067147F86FC14CD9F689B18E391 (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, const RuntimeMethod* method)
{
	{
		// return TfLiteInterpreterGetOutputTensorCount(interpreter);
		intptr_t L_0 = __this->get_interpreter_1();
		int32_t L_1 = Interpreter_TfLiteInterpreterGetOutputTensorCount_mDDBAC66DDC3071403D567FA10BC2186057ED746E((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TensorFlowLite.Interpreter::GetOutputTensorData(System.Int32,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_GetOutputTensorData_m95B9AC154860D6D9D0B8BE8A9D32FEF0E9EA78BF (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, int32_t ___outputTensorIndex0, RuntimeArray * ___outputTensorData1, const RuntimeMethod* method)
{
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GCHandle tensorDataHandle = GCHandle.Alloc(outputTensorData, GCHandleType.Pinned);
		RuntimeArray * L_0 = ___outputTensorData1;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E(L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr tensorDataPtr = tensorDataHandle.AddrOfPinnedObject();
		intptr_t L_2 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// TfLiteTensor tensor = TfLiteInterpreterGetOutputTensor(interpreter, outputTensorIndex);
		intptr_t L_3 = __this->get_interpreter_1();
		int32_t L_4 = ___outputTensorIndex0;
		intptr_t L_5 = Interpreter_TfLiteInterpreterGetOutputTensor_mD07695B3662A9C48F52BED82E5F82E090B7B4841((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		// ThrowIfError(TfLiteTensorCopyToBuffer(
		//     tensor, tensorDataPtr, Buffer.ByteLength(outputTensorData)));
		intptr_t L_6 = V_1;
		RuntimeArray * L_7 = ___outputTensorData1;
		int32_t L_8 = Buffer_ByteLength_m32E578C5A2F2E27327E83B6F9D3EB404F29656E8(L_7, /*hidden argument*/NULL);
		int32_t L_9 = Interpreter_TfLiteTensorCopyToBuffer_m2FFAB7A9BD9B367EF7F3580E2B4B20E145B2ADC0((intptr_t)L_5, (intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// TensorFlowLite.Interpreter_TensorInfo TensorFlowLite.Interpreter::GetInputTensorInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078  Interpreter_GetInputTensorInfo_mC539E236C437E48D35DD0E1AE15A51201BD2B6D6 (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// TfLiteTensor tensor = TfLiteInterpreterGetInputTensor(interpreter, index);
		intptr_t L_0 = __this->get_interpreter_1();
		int32_t L_1 = ___index0;
		intptr_t L_2 = Interpreter_TfLiteInterpreterGetInputTensor_m26532664F52990529108C201444FF8F9539935BB((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// return GetTensorInfo(tensor);
		TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078  L_3 = Interpreter_GetTensorInfo_m6C95AA9C946EDD07107CC7F34C64CB0EF684F68A((intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// TensorFlowLite.Interpreter_TensorInfo TensorFlowLite.Interpreter::GetOutputTensorInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078  Interpreter_GetOutputTensorInfo_mD6E66AE52A6F674E44F7A6C229A3F1DCB06D7EF7 (Interpreter_tE9CE49573F82A75A3843E877FF52862587B8925D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// TfLiteTensor tensor = TfLiteInterpreterGetOutputTensor(interpreter, index);
		intptr_t L_0 = __this->get_interpreter_1();
		int32_t L_1 = ___index0;
		intptr_t L_2 = Interpreter_TfLiteInterpreterGetOutputTensor_mD07695B3662A9C48F52BED82E5F82E090B7B4841((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// return GetTensorInfo(tensor);
		TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078  L_3 = Interpreter_GetTensorInfo_m6C95AA9C946EDD07107CC7F34C64CB0EF684F68A((intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String TensorFlowLite.Interpreter::GetTensorName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Interpreter_GetTensorName_m2FAEB45F5C88561D38300900B6594AC29D33EFDB (intptr_t ___tensor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Interpreter_GetTensorName_m2FAEB45F5C88561D38300900B6594AC29D33EFDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Marshal.PtrToStringAnsi(TfLiteTensorName(tensor));
		intptr_t L_0 = ___tensor0;
		intptr_t L_1 = Interpreter_TfLiteTensorName_m8F1D44C84F81673CF8C275CD242CCF8743EDF2AD((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		String_t* L_2 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// TensorFlowLite.Interpreter_TensorInfo TensorFlowLite.Interpreter::GetTensorInfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078  Interpreter_GetTensorInfo_m6C95AA9C946EDD07107CC7F34C64CB0EF684F68A (intptr_t ___tensor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Interpreter_GetTensorInfo_m6C95AA9C946EDD07107CC7F34C64CB0EF684F68A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	int32_t V_1 = 0;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int[] dimensions = new int[TfLiteTensorNumDims(tensor)];
		intptr_t L_0 = ___tensor0;
		int32_t L_1 = Interpreter_TfLiteTensorNumDims_m86B139DB9349BDBAF7FAC766563FB9C712550755((intptr_t)L_0, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (int i = 0; i < dimensions.Length; i++)
		V_1 = 0;
		goto IL_001e;
	}

IL_0010:
	{
		// dimensions[i] = TfLiteTensorDim(tensor, i);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = V_0;
		int32_t L_4 = V_1;
		intptr_t L_5 = ___tensor0;
		int32_t L_6 = V_1;
		int32_t L_7 = Interpreter_TfLiteTensorDim_m71C7E164BEE0E1620128FBDC42D838F8FFE78092((intptr_t)L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_7);
		// for (int i = 0; i < dimensions.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < dimensions.Length; i++)
		int32_t L_9 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		// return new TensorInfo()
		// {
		//     name = GetTensorName(tensor),
		//     type = TfLiteTensorType(tensor),
		//     shape = dimensions,
		//     quantizationParams = TfLiteTensorQuantizationParams(tensor),
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 ));
		intptr_t L_11 = ___tensor0;
		String_t* L_12 = Interpreter_GetTensorName_m2FAEB45F5C88561D38300900B6594AC29D33EFDB((intptr_t)L_11, /*hidden argument*/NULL);
		TensorInfo_set_name_m95BF31B0823F22BC9F0D2D5E8AED7891F5206A40_inline((TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *)(&V_2), L_12, /*hidden argument*/NULL);
		intptr_t L_13 = ___tensor0;
		int32_t L_14 = Interpreter_TfLiteTensorType_m59BE15CC30C17E80460764A9618E89DF867F622D((intptr_t)L_13, /*hidden argument*/NULL);
		TensorInfo_set_type_mFA3E29ADA3C65B5C5D33470896483A4CC28AF86A_inline((TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *)(&V_2), L_14, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = V_0;
		TensorInfo_set_shape_m817DF49CB60C301183BF4969894C5C5B3F26281F_inline((TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *)(&V_2), L_15, /*hidden argument*/NULL);
		intptr_t L_16 = ___tensor0;
		QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  L_17 = Interpreter_TfLiteTensorQuantizationParams_m2894A1E8CA740F0B55E68DA17A401120B117FF77((intptr_t)L_16, /*hidden argument*/NULL);
		TensorInfo_set_quantizationParams_m1F928F5F5DC803255E88E918FA6D2DF4C0429946_inline((TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *)(&V_2), L_17, /*hidden argument*/NULL);
		TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078  L_18 = V_2;
		return L_18;
	}
}
// System.Void TensorFlowLite.Interpreter::ThrowIfError(TensorFlowLite.Interpreter_Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E (int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (status == Status.Error) throw new Exception("TensorFlowLite operation failed.");
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// if (status == Status.Error) throw new Exception("TensorFlowLite operation failed.");
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_1, _stringLiteralD7E665F7809ED29B9598EE13E5AFDD0335AF8E6E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E_RuntimeMethod_var);
	}

IL_000f:
	{
		// if (status == Status.DelegateError) throw new Exception("TensorFlowLite delegage operation failed.");
		int32_t L_2 = ___status0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		// if (status == Status.DelegateError) throw new Exception("TensorFlowLite delegage operation failed.");
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_3, _stringLiteral2A4991EF73DB22DBF956AEBCCF74505187363A2D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Interpreter_ThrowIfError_m312857D297E506696B0870E8101521DAD360EC4E_RuntimeMethod_var);
	}

IL_001e:
	{
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteModelCreate(intptr_t, int32_t);
#endif
// System.IntPtr TensorFlowLite.Interpreter::TfLiteModelCreate(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteModelCreate_mA46E7607B62078E0D2E010D4EC02730271E521D9 (intptr_t ___model_data0, int32_t ___model_size1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteModelCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteModelCreate)(___model_data0, ___model_size1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___model_data0, ___model_size1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteModelDelete(intptr_t);
#endif
// System.Void TensorFlowLite.Interpreter::TfLiteModelDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteModelDelete_m48BDCF1D59812B32258AA660D4FE33DFDCB757B7 (intptr_t ___model0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteModelDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteModelDelete)(___model0);
	#else
	il2cppPInvokeFunc(___model0);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterCreate(intptr_t, intptr_t);
#endif
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterCreate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterCreate_mC7A0D4FEB08AD9CB11DDED77AF74ACFBC1D604C4 (intptr_t ___model0, intptr_t ___optional_options1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterCreate)(___model0, ___optional_options1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___model0, ___optional_options1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterDelete(intptr_t);
#endif
// System.Void TensorFlowLite.Interpreter::TfLiteInterpreterDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteInterpreterDelete_m2423D2A1C651B8225D497604A6EC095E4D2658BD (intptr_t ___interpreter0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterDelete)(___interpreter0);
	#else
	il2cppPInvokeFunc(___interpreter0);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterGetInputTensorCount(intptr_t);
#endif
// System.Int32 TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensorCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterGetInputTensorCount_m854A424EBE00EE42E3EFAF622369F020D58BBD3C (intptr_t ___interpreter0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetInputTensorCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetInputTensorCount)(___interpreter0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___interpreter0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterGetInputTensor(intptr_t, int32_t);
#endif
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetInputTensor_m26532664F52990529108C201444FF8F9539935BB (intptr_t ___interpreter0, int32_t ___input_index1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetInputTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetInputTensor)(___interpreter0, ___input_index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___interpreter0, ___input_index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterResizeInputTensor(intptr_t, int32_t, int32_t*, int32_t);
#endif
// TensorFlowLite.Interpreter_Status TensorFlowLite.Interpreter::TfLiteInterpreterResizeInputTensor(System.IntPtr,System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterResizeInputTensor_mFAC85ACC0485323EA6C7F3F4C0BFDAD904F154EC (intptr_t ___interpreter0, int32_t ___input_index1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___input_dims2, int32_t ___input_dims_size3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterResizeInputTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___input_dims2' to native representation
	int32_t* ____input_dims2_marshaled = NULL;
	if (___input_dims2 != NULL)
	{
		____input_dims2_marshaled = reinterpret_cast<int32_t*>((___input_dims2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterResizeInputTensor)(___interpreter0, ___input_index1, ____input_dims2_marshaled, ___input_dims_size3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___interpreter0, ___input_index1, ____input_dims2_marshaled, ___input_dims_size3);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterAllocateTensors(intptr_t);
#endif
// TensorFlowLite.Interpreter_Status TensorFlowLite.Interpreter::TfLiteInterpreterAllocateTensors(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterAllocateTensors_m79533589669386983ED0B7D153857C78C028A1FC (intptr_t ___interpreter0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterAllocateTensors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterAllocateTensors)(___interpreter0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___interpreter0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterInvoke(intptr_t);
#endif
// TensorFlowLite.Interpreter_Status TensorFlowLite.Interpreter::TfLiteInterpreterInvoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterInvoke_m3FF8ADDE8AAB4837EA16766BA4936ADFE0D036FA (intptr_t ___interpreter0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterInvoke", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterInvoke)(___interpreter0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___interpreter0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterGetOutputTensorCount(intptr_t);
#endif
// System.Int32 TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensorCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterGetOutputTensorCount_mDDBAC66DDC3071403D567FA10BC2186057ED746E (intptr_t ___interpreter0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetOutputTensorCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetOutputTensorCount)(___interpreter0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___interpreter0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterGetOutputTensor(intptr_t, int32_t);
#endif
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetOutputTensor_mD07695B3662A9C48F52BED82E5F82E090B7B4841 (intptr_t ___interpreter0, int32_t ___output_index1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetOutputTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetOutputTensor)(___interpreter0, ___output_index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___interpreter0, ___output_index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorType(intptr_t);
#endif
// TensorFlowLite.Interpreter_DataType TensorFlowLite.Interpreter::TfLiteTensorType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorType_m59BE15CC30C17E80460764A9618E89DF867F622D (intptr_t ___tensor0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorType)(___tensor0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___tensor0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorNumDims(intptr_t);
#endif
// System.Int32 TensorFlowLite.Interpreter::TfLiteTensorNumDims(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorNumDims_m86B139DB9349BDBAF7FAC766563FB9C712550755 (intptr_t ___tensor0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorNumDims", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorNumDims)(___tensor0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___tensor0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorDim(intptr_t, int32_t);
#endif
// System.Int32 TensorFlowLite.Interpreter::TfLiteTensorDim(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorDim_m71C7E164BEE0E1620128FBDC42D838F8FFE78092 (intptr_t ___tensor0, int32_t ___dim_index1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorDim", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorDim)(___tensor0, ___dim_index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___tensor0, ___dim_index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteTensorName(intptr_t);
#endif
// System.IntPtr TensorFlowLite.Interpreter::TfLiteTensorName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteTensorName_m8F1D44C84F81673CF8C275CD242CCF8743EDF2AD (intptr_t ___tensor0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorName)(___tensor0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___tensor0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  DEFAULT_CALL TfLiteTensorQuantizationParams(intptr_t);
#endif
// TensorFlowLite.Interpreter_QuantizationParams TensorFlowLite.Interpreter::TfLiteTensorQuantizationParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  Interpreter_TfLiteTensorQuantizationParams_m2894A1E8CA740F0B55E68DA17A401120B117FF77 (intptr_t ___tensor0, const RuntimeMethod* method)
{
	typedef QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorQuantizationParams", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorQuantizationParams)(___tensor0);
	#else
	QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  returnValue = il2cppPInvokeFunc(___tensor0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorCopyFromBuffer(intptr_t, intptr_t, int32_t);
#endif
// TensorFlowLite.Interpreter_Status TensorFlowLite.Interpreter::TfLiteTensorCopyFromBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyFromBuffer_mC5FE238835CAC634FCABF6D98BFB098644B3076D (intptr_t ___tensor0, intptr_t ___input_data1, int32_t ___input_data_size2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorCopyFromBuffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorCopyFromBuffer)(___tensor0, ___input_data1, ___input_data_size2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___tensor0, ___input_data1, ___input_data_size2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorCopyToBuffer(intptr_t, intptr_t, int32_t);
#endif
// TensorFlowLite.Interpreter_Status TensorFlowLite.Interpreter::TfLiteTensorCopyToBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyToBuffer_m2FFAB7A9BD9B367EF7F3580E2B4B20E145B2ADC0 (intptr_t ___tensor0, intptr_t ___output_data1, int32_t ___output_data_size2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorCopyToBuffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorCopyToBuffer)(___tensor0, ___output_data1, ___output_data_size2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___tensor0, ___output_data1, ___output_data_size2);
	#endif

	return returnValue;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String TensorFlowLite.Interpreter_QuantizationParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuantizationParams_ToString_m1CF5F12CF56F7F7989EF8879B2A4EA5362A8245D (QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuantizationParams_ToString_m1CF5F12CF56F7F7989EF8879B2A4EA5362A8245D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("scale: {0} zeroPoint: {1}", scale, zeroPoint);
		float L_0 = __this->get_scale_0();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->get_zeroPoint_1();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral4B945B591F1D71B3150D943026FDF2AC35E52FFF, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* QuantizationParams_ToString_m1CF5F12CF56F7F7989EF8879B2A4EA5362A8245D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879 * _thisAdjusted = reinterpret_cast<QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879 *>(__this + _offset);
	return QuantizationParams_ToString_m1CF5F12CF56F7F7989EF8879B2A4EA5362A8245D(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TensorFlowLite.Interpreter/TensorInfo
IL2CPP_EXTERN_C void TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshal_pinvoke(const TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078& unmarshaled, TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CnameU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CnameU3Ek__BackingField_0());
	marshaled.___U3CtypeU3Ek__BackingField_1 = unmarshaled.get_U3CtypeU3Ek__BackingField_1();
	marshaled.___U3CshapeU3Ek__BackingField_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_U3CshapeU3Ek__BackingField_2());
	marshaled.___U3CquantizationParamsU3Ek__BackingField_3 = unmarshaled.get_U3CquantizationParamsU3Ek__BackingField_3();
}
IL2CPP_EXTERN_C void TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshal_pinvoke_back(const TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshaled_pinvoke& marshaled, TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_U3CnameU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CnameU3Ek__BackingField_0));
	int32_t unmarshaled_U3CtypeU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CtypeU3Ek__BackingField_temp_1 = marshaled.___U3CtypeU3Ek__BackingField_1;
	unmarshaled.set_U3CtypeU3Ek__BackingField_1(unmarshaled_U3CtypeU3Ek__BackingField_temp_1);
	unmarshaled.set_U3CshapeU3Ek__BackingField_2((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, marshaled.___U3CshapeU3Ek__BackingField_2));
	QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3;
	memset((&unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3), 0, sizeof(unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3));
	unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3 = marshaled.___U3CquantizationParamsU3Ek__BackingField_3;
	unmarshaled.set_U3CquantizationParamsU3Ek__BackingField_3(unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: TensorFlowLite.Interpreter/TensorInfo
IL2CPP_EXTERN_C void TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshal_pinvoke_cleanup(TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CnameU3Ek__BackingField_0);
	marshaled.___U3CnameU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CshapeU3Ek__BackingField_2);
	marshaled.___U3CshapeU3Ek__BackingField_2 = NULL;
}
// Conversion methods for marshalling of: TensorFlowLite.Interpreter/TensorInfo
IL2CPP_EXTERN_C void TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshal_com(const TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078& unmarshaled, TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshaled_com& marshaled)
{
	marshaled.___U3CnameU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CnameU3Ek__BackingField_0());
	marshaled.___U3CtypeU3Ek__BackingField_1 = unmarshaled.get_U3CtypeU3Ek__BackingField_1();
	marshaled.___U3CshapeU3Ek__BackingField_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_U3CshapeU3Ek__BackingField_2());
	marshaled.___U3CquantizationParamsU3Ek__BackingField_3 = unmarshaled.get_U3CquantizationParamsU3Ek__BackingField_3();
}
IL2CPP_EXTERN_C void TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshal_com_back(const TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshaled_com& marshaled, TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_U3CnameU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CnameU3Ek__BackingField_0));
	int32_t unmarshaled_U3CtypeU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CtypeU3Ek__BackingField_temp_1 = marshaled.___U3CtypeU3Ek__BackingField_1;
	unmarshaled.set_U3CtypeU3Ek__BackingField_1(unmarshaled_U3CtypeU3Ek__BackingField_temp_1);
	unmarshaled.set_U3CshapeU3Ek__BackingField_2((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, marshaled.___U3CshapeU3Ek__BackingField_2));
	QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3;
	memset((&unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3), 0, sizeof(unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3));
	unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3 = marshaled.___U3CquantizationParamsU3Ek__BackingField_3;
	unmarshaled.set_U3CquantizationParamsU3Ek__BackingField_3(unmarshaled_U3CquantizationParamsU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: TensorFlowLite.Interpreter/TensorInfo
IL2CPP_EXTERN_C void TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshal_com_cleanup(TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CnameU3Ek__BackingField_0);
	marshaled.___U3CnameU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CshapeU3Ek__BackingField_2);
	marshaled.___U3CshapeU3Ek__BackingField_2 = NULL;
}
// System.String TensorFlowLite.Interpreter_TensorInfo::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TensorInfo_get_name_m12A02BBE5498510F8514582311EC92EF40ACA4E3 (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; internal set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* TensorInfo_get_name_m12A02BBE5498510F8514582311EC92EF40ACA4E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * _thisAdjusted = reinterpret_cast<TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *>(__this + _offset);
	return TensorInfo_get_name_m12A02BBE5498510F8514582311EC92EF40ACA4E3_inline(_thisAdjusted, method);
}
// System.Void TensorFlowLite.Interpreter_TensorInfo::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorInfo_set_name_m95BF31B0823F22BC9F0D2D5E8AED7891F5206A40 (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TensorInfo_set_name_m95BF31B0823F22BC9F0D2D5E8AED7891F5206A40_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * _thisAdjusted = reinterpret_cast<TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *>(__this + _offset);
	TensorInfo_set_name_m95BF31B0823F22BC9F0D2D5E8AED7891F5206A40_inline(_thisAdjusted, ___value0, method);
}
// TensorFlowLite.Interpreter_DataType TensorFlowLite.Interpreter_TensorInfo::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TensorInfo_get_type_m2AF23871CBF5611839C7CC8749D4030D944449A1 (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method)
{
	{
		// public DataType type { get; internal set; }
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TensorInfo_get_type_m2AF23871CBF5611839C7CC8749D4030D944449A1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * _thisAdjusted = reinterpret_cast<TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *>(__this + _offset);
	return TensorInfo_get_type_m2AF23871CBF5611839C7CC8749D4030D944449A1_inline(_thisAdjusted, method);
}
// System.Void TensorFlowLite.Interpreter_TensorInfo::set_type(TensorFlowLite.Interpreter_DataType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorInfo_set_type_mFA3E29ADA3C65B5C5D33470896483A4CC28AF86A (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public DataType type { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TensorInfo_set_type_mFA3E29ADA3C65B5C5D33470896483A4CC28AF86A_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * _thisAdjusted = reinterpret_cast<TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *>(__this + _offset);
	TensorInfo_set_type_mFA3E29ADA3C65B5C5D33470896483A4CC28AF86A_inline(_thisAdjusted, ___value0, method);
}
// System.Int32[] TensorFlowLite.Interpreter_TensorInfo::get_shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* TensorInfo_get_shape_mF1FE12BDCDED824AD6F6776024A9DB90E0AF5214 (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method)
{
	{
		// public int[] shape { get; internal set; }
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_U3CshapeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* TensorInfo_get_shape_mF1FE12BDCDED824AD6F6776024A9DB90E0AF5214_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * _thisAdjusted = reinterpret_cast<TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *>(__this + _offset);
	return TensorInfo_get_shape_mF1FE12BDCDED824AD6F6776024A9DB90E0AF5214_inline(_thisAdjusted, method);
}
// System.Void TensorFlowLite.Interpreter_TensorInfo::set_shape(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorInfo_set_shape_m817DF49CB60C301183BF4969894C5C5B3F26281F (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___value0, const RuntimeMethod* method)
{
	{
		// public int[] shape { get; internal set; }
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ___value0;
		__this->set_U3CshapeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TensorInfo_set_shape_m817DF49CB60C301183BF4969894C5C5B3F26281F_AdjustorThunk (RuntimeObject * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * _thisAdjusted = reinterpret_cast<TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *>(__this + _offset);
	TensorInfo_set_shape_m817DF49CB60C301183BF4969894C5C5B3F26281F_inline(_thisAdjusted, ___value0, method);
}
// TensorFlowLite.Interpreter_QuantizationParams TensorFlowLite.Interpreter_TensorInfo::get_quantizationParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  TensorInfo_get_quantizationParams_m9786D5A995A4FCEF5F5DF62DCC23A277FD86E80E (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method)
{
	{
		// public QuantizationParams quantizationParams { get; internal set; }
		QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  L_0 = __this->get_U3CquantizationParamsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  TensorInfo_get_quantizationParams_m9786D5A995A4FCEF5F5DF62DCC23A277FD86E80E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * _thisAdjusted = reinterpret_cast<TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *>(__this + _offset);
	return TensorInfo_get_quantizationParams_m9786D5A995A4FCEF5F5DF62DCC23A277FD86E80E_inline(_thisAdjusted, method);
}
// System.Void TensorFlowLite.Interpreter_TensorInfo::set_quantizationParams(TensorFlowLite.Interpreter_QuantizationParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorInfo_set_quantizationParams_m1F928F5F5DC803255E88E918FA6D2DF4C0429946 (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  ___value0, const RuntimeMethod* method)
{
	{
		// public QuantizationParams quantizationParams { get; internal set; }
		QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  L_0 = ___value0;
		__this->set_U3CquantizationParamsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TensorInfo_set_quantizationParams_m1F928F5F5DC803255E88E918FA6D2DF4C0429946_AdjustorThunk (RuntimeObject * __this, QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * _thisAdjusted = reinterpret_cast<TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *>(__this + _offset);
	TensorInfo_set_quantizationParams_m1F928F5F5DC803255E88E918FA6D2DF4C0429946_inline(_thisAdjusted, ___value0, method);
}
// System.String TensorFlowLite.Interpreter_TensorInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TensorInfo_ToString_m0535A4EDDCCC121E15280E48008A528FAD0F93BB (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TensorInfo_ToString_m0535A4EDDCCC121E15280E48008A528FAD0F93BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("name: {0}, type: {1}, dimensions: {2}, quantizationParams: {3}",
		//   name,
		//   type,
		//   "[" + string.Join(",", shape) + "]",
		//   "{" + quantizationParams + "}");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = TensorInfo_get_name_m12A02BBE5498510F8514582311EC92EF40ACA4E3_inline((TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		int32_t L_4 = TensorInfo_get_type_m2AF23871CBF5611839C7CC8749D4030D944449A1_inline((TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(DataType_tA58D9447339155C617CDEC15FC22BA38E6305CEA_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = TensorInfo_get_shape_mF1FE12BDCDED824AD6F6776024A9DB90E0AF5214_inline((TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *)__this, /*hidden argument*/NULL);
		String_t* L_9 = String_Join_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4CACB6ACA10555CE7B69D1B285797F3F6843FD42(_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, (RuntimeObject*)(RuntimeObject*)L_8, /*hidden argument*/String_Join_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4CACB6ACA10555CE7B69D1B285797F3F6843FD42_RuntimeMethod_var);
		String_t* L_10 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441, L_9, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  L_12 = TensorInfo_get_quantizationParams_m9786D5A995A4FCEF5F5DF62DCC23A277FD86E80E_inline((TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *)__this, /*hidden argument*/NULL);
		QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  L_13 = L_12;
		RuntimeObject * L_14 = Box(QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral60BA4B2DAA4ED4D070FEC06687E249E0E6F9EE45, L_14, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral053E9E8EF27D691F00E6B3BFCE1CC940BDFDAFE1, L_11, /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C  String_t* TensorInfo_ToString_m0535A4EDDCCC121E15280E48008A528FAD0F93BB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * _thisAdjusted = reinterpret_cast<TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 *>(__this + _offset);
	return TensorInfo_ToString_m0535A4EDDCCC121E15280E48008A528FAD0F93BB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_InterpreterOptions_OnErrorReporter_m6110B5D8F4D729DAC7D69BDD89104EEE67C47C21(intptr_t ___userData0, char* ___format1, intptr_t ___args2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___format1' to managed representation
	String_t* ____format1_unmarshaled = NULL;
	____format1_unmarshaled = il2cpp_codegen_marshal_string_result(___format1);

	// Managed method invocation
	InterpreterOptions_OnErrorReporter_m6110B5D8F4D729DAC7D69BDD89104EEE67C47C21(___userData0, ____format1_unmarshaled, ___args2, NULL);

}
// System.Void TensorFlowLite.InterpreterOptions::set_threads(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_set_threads_m2F9C92C8B6BF2D685110340BFB008C5C6CB6B9F2 (InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _threads = value;
		int32_t L_0 = ___value0;
		__this->set__threads_2(L_0);
		// TfLiteInterpreterOptionsSetNumThreads(nativePtr, value);
		intptr_t L_1 = __this->get_nativePtr_0();
		int32_t L_2 = ___value0;
		InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_m932D3ED9A984DAE40EBBBD806C88D839BDEE6C1A((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::set_useNNAPI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_set_useNNAPI_mC47357B62C5A967545AADA11896A3E2FF2D0CEDF (InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// _useNNAPI = value;
		bool L_0 = ___value0;
		__this->set__useNNAPI_3(L_0);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions__ctor_m5B1CA65B5154E8C3C29CA054C40C913BFF2A2576 (InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterpreterOptions__ctor_m5B1CA65B5154E8C3C29CA054C40C913BFF2A2576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InterpreterOptions()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// nativePtr = TfLiteInterpreterOptionsCreate();
		intptr_t L_0 = InterpreterOptions_TfLiteInterpreterOptionsCreate_m752C0FB6F3EF2D8C96FD223F04C59A41B4E46000(/*hidden argument*/NULL);
		__this->set_nativePtr_0((intptr_t)L_0);
		// delegates = new List<IGpuDelegate>();
		List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * L_1 = (List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 *)il2cpp_codegen_object_new(List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393_il2cpp_TypeInfo_var);
		List_1__ctor_mFFC193716A55394BB04BAA9621B2BB23F4073CFF(L_1, /*hidden argument*/List_1__ctor_mFFC193716A55394BB04BAA9621B2BB23F4073CFF_RuntimeMethod_var);
		__this->set_delegates_1(L_1);
		// TfLiteInterpreterOptionsSetErrorReporter(nativePtr, OnErrorReporter, IntPtr.Zero);
		intptr_t L_2 = __this->get_nativePtr_0();
		ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD * L_3 = (ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD *)il2cpp_codegen_object_new(ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD_il2cpp_TypeInfo_var);
		ErrorReporterDelegate__ctor_m78BDB1627D3C8D15A4690945FE9802CAF889D9F0(L_3, NULL, (intptr_t)((intptr_t)InterpreterOptions_OnErrorReporter_m6110B5D8F4D729DAC7D69BDD89104EEE67C47C21_RuntimeMethod_var), /*hidden argument*/NULL);
		InterpreterOptions_TfLiteInterpreterOptionsSetErrorReporter_mE1161446AD6D1B4C5BC2390C9EE8091B6A80237D((intptr_t)L_2, L_3, (intptr_t)(0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_Dispose_mA64A85AF79E71AEBC9087CF578854B6590EB1900 (InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterpreterOptions_Dispose_mA64A85AF79E71AEBC9087CF578854B6590EB1900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (nativePtr != IntPtr.Zero)
		intptr_t L_0 = __this->get_nativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// TfLiteInterpreterOptionsDelete(nativePtr);
		intptr_t L_2 = __this->get_nativePtr_0();
		InterpreterOptions_TfLiteInterpreterOptionsDelete_mF1E8E47388F49BA6D208651422102D30BA1CE572((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// foreach (var gpuDelegate in delegates)
		List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * L_3 = __this->get_delegates_1();
		NullCheck(L_3);
		Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1  L_4 = List_1_GetEnumerator_mB194CA433F7ED9FD278C87A0B2FC0AD65CC1EB7B(L_3, /*hidden argument*/List_1_GetEnumerator_mB194CA433F7ED9FD278C87A0B2FC0AD65CC1EB7B_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_002b:
		{
			// foreach (var gpuDelegate in delegates)
			RuntimeObject* L_5 = Enumerator_get_Current_m95690165FF66001E44CBA9DF3DC71504FB226304_inline((Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m95690165FF66001E44CBA9DF3DC71504FB226304_RuntimeMethod_var);
			// gpuDelegate.Dispose();
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_0037:
		{
			// foreach (var gpuDelegate in delegates)
			bool L_6 = Enumerator_MoveNext_m8BB90F7837C46C7BEFE5A262F3354736EF536366((Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8BB90F7837C46C7BEFE5A262F3354736EF536366_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_002b;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3E9526943E310EC2821811A10501ADAC68D48AD6((Enumerator_t29DD0D3ED9030C2BF4E5F9822AE37F2AA1EBCFC1 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m3E9526943E310EC2821811A10501ADAC68D48AD6_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// delegates.Clear();
		List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * L_7 = __this->get_delegates_1();
		NullCheck(L_7);
		List_1_Clear_mE837156EBDD3006CF9997930A657D0E1803C1180(L_7, /*hidden argument*/List_1_Clear_mE837156EBDD3006CF9997930A657D0E1803C1180_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::AddGpuDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_AddGpuDelegate_mA6E34E7ECDA48A7E12CA417008B99B372540AFAC (InterpreterOptions_t8E7F381B65D5DADBE898F2F36D2B1EF63C757FE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterpreterOptions_AddGpuDelegate_mA6E34E7ECDA48A7E12CA417008B99B372540AFAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var gpuDelegate = CreateGpuDelegate();
		RuntimeObject* L_0 = InterpreterOptions_CreateGpuDelegate_m7C4BDB2589970BD48E718FE0F10F60EFA78B2A29(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (gpuDelegate == null) return;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (gpuDelegate == null) return;
		return;
	}

IL_000a:
	{
		// TfLiteInterpreterOptionsAddDelegate(nativePtr, gpuDelegate.Delegate);
		intptr_t L_2 = __this->get_nativePtr_0();
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		intptr_t L_4 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr TensorFlowLite.IGpuDelegate::get_Delegate() */, IGpuDelegate_t5F0B1D3295BB08DFB01DACE1068F21D6A513CA95_il2cpp_TypeInfo_var, L_3);
		InterpreterOptions_TfLiteInterpreterOptionsAddDelegate_m0C39F574280706800167BADE96CA1E1830C21F4C((intptr_t)L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		// delegates.Add(gpuDelegate);
		List_1_t22E905802C61CCF4662B5D22206D0D34BF4E9393 * L_5 = __this->get_delegates_1();
		RuntimeObject* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_m0FD91930C49833146658EA6AE952E259207EB945(L_5, L_6, /*hidden argument*/List_1_Add_m0FD91930C49833146658EA6AE952E259207EB945_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::OnErrorReporter(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_OnErrorReporter_m6110B5D8F4D729DAC7D69BDD89104EEE67C47C21 (intptr_t ___userData0, String_t* ___format1, intptr_t ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterpreterOptions_OnErrorReporter_m6110B5D8F4D729DAC7D69BDD89104EEE67C47C21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// report = format;
		String_t* L_0 = ___format1;
		V_0 = L_0;
		// UnityEngine.Debug.LogWarning($"Interperter Warning: {report}");
		String_t* L_1 = V_0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF6CAE680E9067BA224F3AB51101D2591DABC4A02, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// TensorFlowLite.IGpuDelegate TensorFlowLite.InterpreterOptions::CreateGpuDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterpreterOptions_CreateGpuDelegate_m7C4BDB2589970BD48E718FE0F10F60EFA78B2A29 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterpreterOptions_CreateGpuDelegate_m7C4BDB2589970BD48E718FE0F10F60EFA78B2A29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning("GPU Delegate is not supported on this platform");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralED72D33E8B986626616E2C6145982F41E650F943, /*hidden argument*/NULL);
		// return null;
		return (RuntimeObject*)NULL;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterOptionsCreate();
#endif
// System.IntPtr TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterpreterOptions_TfLiteInterpreterOptionsCreate_m752C0FB6F3EF2D8C96FD223F04C59A41B4E46000 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsCreate)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsDelete(intptr_t);
#endif
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsDelete_mF1E8E47388F49BA6D208651422102D30BA1CE572 (intptr_t ___options0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsDelete)(___options0);
	#else
	il2cppPInvokeFunc(___options0);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsSetNumThreads(intptr_t, int32_t);
#endif
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetNumThreads(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_m932D3ED9A984DAE40EBBBD806C88D839BDEE6C1A (intptr_t ___options0, int32_t ___num_threads1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsSetNumThreads", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsSetNumThreads)(___options0, ___num_threads1);
	#else
	il2cppPInvokeFunc(___options0, ___num_threads1);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsAddDelegate(intptr_t, intptr_t);
#endif
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsAddDelegate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsAddDelegate_m0C39F574280706800167BADE96CA1E1830C21F4C (intptr_t ___options0, intptr_t ____delegate1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsAddDelegate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsAddDelegate)(___options0, ____delegate1);
	#else
	il2cppPInvokeFunc(___options0, ____delegate1);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL TfLiteInterpreterOptionsSetErrorReporter(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetErrorReporter(System.IntPtr,TensorFlowLite.InterpreterOptions_ErrorReporterDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetErrorReporter_mE1161446AD6D1B4C5BC2390C9EE8091B6A80237D (intptr_t ___options0, ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD * ___errorReporter1, intptr_t ___user_data2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsSetErrorReporter", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___errorReporter1' to native representation
	Il2CppMethodPointer ____errorReporter1_marshaled = NULL;
	____errorReporter1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___errorReporter1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsSetErrorReporter)(___options0, ____errorReporter1_marshaled, ___user_data2);
	#else
	il2cppPInvokeFunc(___options0, ____errorReporter1_marshaled, ___user_data2);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD (ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD * __this, intptr_t ___userData0, String_t* ___format1, intptr_t ___argsPtrs2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___format1' to native representation
	char* ____format1_marshaled = NULL;
	____format1_marshaled = il2cpp_codegen_marshal_string(___format1);

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ____format1_marshaled, ___argsPtrs2);

	// Marshaling cleanup of parameter '___format1' native representation
	il2cpp_codegen_marshal_free(____format1_marshaled);
	____format1_marshaled = NULL;

}
// System.Void TensorFlowLite.InterpreterOptions_ErrorReporterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate__ctor_m78BDB1627D3C8D15A4690945FE9802CAF889D9F0 (ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TensorFlowLite.InterpreterOptions_ErrorReporterDelegate::Invoke(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate_Invoke_m9FFBAC34D7D332DA958E343C148A8CC5F4F3B1AE (ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD * __this, intptr_t ___userData0, String_t* ___format1, intptr_t ___argsPtrs2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userData0, ___format1, ___argsPtrs2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___format1, ___argsPtrs2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___userData0, ___format1, ___argsPtrs2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___userData0, ___format1, ___argsPtrs2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___format1, ___argsPtrs2);
					else
						VirtActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___format1, ___argsPtrs2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___userData0) - 1), ___format1, ___argsPtrs2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___format1, ___argsPtrs2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TensorFlowLite.InterpreterOptions_ErrorReporterDelegate::BeginInvoke(System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorReporterDelegate_BeginInvoke_m713665CB9D7752A04093ED7DD854A7EE43820170 (ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD * __this, intptr_t ___userData0, String_t* ___format1, intptr_t ___argsPtrs2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorReporterDelegate_BeginInvoke_m713665CB9D7752A04093ED7DD854A7EE43820170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData0);
	__d_args[1] = ___format1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___argsPtrs2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void TensorFlowLite.InterpreterOptions_ErrorReporterDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate_EndInvoke_m2A272B9372AECC35FFEDC88CE15640ECB41DEC26 (ErrorReporterDelegate_tD5A5CB957FB1FAA7A719CF506711046F77B5EEFD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TensorInfo_set_name_m95BF31B0823F22BC9F0D2D5E8AED7891F5206A40_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TensorInfo_set_type_mFA3E29ADA3C65B5C5D33470896483A4CC28AF86A_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public DataType type { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TensorInfo_set_shape_m817DF49CB60C301183BF4969894C5C5B3F26281F_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___value0, const RuntimeMethod* method)
{
	{
		// public int[] shape { get; internal set; }
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ___value0;
		__this->set_U3CshapeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TensorInfo_set_quantizationParams_m1F928F5F5DC803255E88E918FA6D2DF4C0429946_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  ___value0, const RuntimeMethod* method)
{
	{
		// public QuantizationParams quantizationParams { get; internal set; }
		QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  L_0 = ___value0;
		__this->set_U3CquantizationParamsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* TensorInfo_get_name_m12A02BBE5498510F8514582311EC92EF40ACA4E3_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; internal set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TensorInfo_get_type_m2AF23871CBF5611839C7CC8749D4030D944449A1_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method)
{
	{
		// public DataType type { get; internal set; }
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* TensorInfo_get_shape_mF1FE12BDCDED824AD6F6776024A9DB90E0AF5214_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method)
{
	{
		// public int[] shape { get; internal set; }
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_U3CshapeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  TensorInfo_get_quantizationParams_m9786D5A995A4FCEF5F5DF62DCC23A277FD86E80E_inline (TensorInfo_tC6561BE576D0D3F5DD3E6BBA16714BF664EFC078 * __this, const RuntimeMethod* method)
{
	{
		// public QuantizationParams quantizationParams { get; internal set; }
		QuantizationParams_t3C095BE8DC7A2740A9CB6FCF90F3FC845E7C7879  L_0 = __this->get_U3CquantizationParamsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}

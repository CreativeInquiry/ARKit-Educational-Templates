#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

struct EVENT_FILTER_DESCRIPTOR_t24FD3DB96806FFE8C96FFDB38B1B8331EA0D72BB ;
struct Guid_t ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};


// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARWorldMappingStatus
struct  ARWorldMappingStatus_t1924A56B168ED7DDAA8FB935E53E56E56A893834 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARWorldMappingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMappingStatus_t1924A56B168ED7DDAA8FB935E53E56E56A893834, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate
struct  MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::primaryDirAndIntensity
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___primaryDirAndIntensity_0;
	// System.IntPtr UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::sphericalHarmonicCoefficientsPtr
	intptr_t ___sphericalHarmonicCoefficientsPtr_1;

public:
	inline static int32_t get_offset_of_primaryDirAndIntensity_0() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760, ___primaryDirAndIntensity_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_primaryDirAndIntensity_0() const { return ___primaryDirAndIntensity_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_primaryDirAndIntensity_0() { return &___primaryDirAndIntensity_0; }
	inline void set_primaryDirAndIntensity_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___primaryDirAndIntensity_0 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicCoefficientsPtr_1() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760, ___sphericalHarmonicCoefficientsPtr_1)); }
	inline intptr_t get_sphericalHarmonicCoefficientsPtr_1() const { return ___sphericalHarmonicCoefficientsPtr_1; }
	inline intptr_t* get_address_of_sphericalHarmonicCoefficientsPtr_1() { return &___sphericalHarmonicCoefficientsPtr_1; }
	inline void set_sphericalHarmonicCoefficientsPtr_1(intptr_t value)
	{
		___sphericalHarmonicCoefficientsPtr_1 = value;
	}
};


// UnityEngine.XR.iOS.UnityAREnvironmentTextureFormat
struct  UnityAREnvironmentTextureFormat_t07FF6BFA0EC9E3AA27514C2BD1C6FE64DF8B13BA 
{
public:
	// System.Int64 UnityEngine.XR.iOS.UnityAREnvironmentTextureFormat::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAREnvironmentTextureFormat_t07FF6BFA0EC9E3AA27514C2BD1C6FE64DF8B13BA, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARFaceGeometry
struct  UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::triangleIndices
	intptr_t ___triangleIndices_5;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}
};


// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column0_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column0_0() const { return ___column0_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column1_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column1_1() const { return ___column1_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column2_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column2_2() const { return ___column2_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column3_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column3_3() const { return ___column3_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column3_3 = value;
	}
};


// UnityEngine.XR.iOS.UnityARPlaneGeometry
struct  UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleIndices
	intptr_t ___triangleIndices_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertexCount
	int32_t ___boundaryVertexCount_6;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertices
	intptr_t ___boundaryVertices_7;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}

	inline static int32_t get_offset_of_boundaryVertexCount_6() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___boundaryVertexCount_6)); }
	inline int32_t get_boundaryVertexCount_6() const { return ___boundaryVertexCount_6; }
	inline int32_t* get_address_of_boundaryVertexCount_6() { return &___boundaryVertexCount_6; }
	inline void set_boundaryVertexCount_6(int32_t value)
	{
		___boundaryVertexCount_6 = value;
	}

	inline static int32_t get_offset_of_boundaryVertices_7() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___boundaryVertices_7)); }
	inline intptr_t get_boundaryVertices_7() const { return ___boundaryVertices_7; }
	inline intptr_t* get_address_of_boundaryVertices_7() { return &___boundaryVertices_7; }
	inline void set_boundaryVertices_7(intptr_t value)
	{
		___boundaryVertices_7 = value;
	}
};


// UnityEngine.XR.iOS.UnityARVideoFormat
struct  UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatPtr
	intptr_t ___videoFormatPtr_0;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionWidth
	float ___imageResolutionWidth_1;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionHeight
	float ___imageResolutionHeight_2;
	// System.Int32 UnityEngine.XR.iOS.UnityARVideoFormat::framesPerSecond
	int32_t ___framesPerSecond_3;

public:
	inline static int32_t get_offset_of_videoFormatPtr_0() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___videoFormatPtr_0)); }
	inline intptr_t get_videoFormatPtr_0() const { return ___videoFormatPtr_0; }
	inline intptr_t* get_address_of_videoFormatPtr_0() { return &___videoFormatPtr_0; }
	inline void set_videoFormatPtr_0(intptr_t value)
	{
		___videoFormatPtr_0 = value;
	}

	inline static int32_t get_offset_of_imageResolutionWidth_1() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___imageResolutionWidth_1)); }
	inline float get_imageResolutionWidth_1() const { return ___imageResolutionWidth_1; }
	inline float* get_address_of_imageResolutionWidth_1() { return &___imageResolutionWidth_1; }
	inline void set_imageResolutionWidth_1(float value)
	{
		___imageResolutionWidth_1 = value;
	}

	inline static int32_t get_offset_of_imageResolutionHeight_2() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___imageResolutionHeight_2)); }
	inline float get_imageResolutionHeight_2() const { return ___imageResolutionHeight_2; }
	inline float* get_address_of_imageResolutionHeight_2() { return &___imageResolutionHeight_2; }
	inline void set_imageResolutionHeight_2(float value)
	{
		___imageResolutionHeight_2 = value;
	}

	inline static int32_t get_offset_of_framesPerSecond_3() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___framesPerSecond_3)); }
	inline int32_t get_framesPerSecond_3() const { return ___framesPerSecond_3; }
	inline int32_t* get_address_of_framesPerSecond_3() { return &___framesPerSecond_3; }
	inline void set_framesPerSecond_3(int32_t value)
	{
		___framesPerSecond_3 = value;
	}
};

struct UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatsList
	List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * ___videoFormatsList_4;

public:
	inline static int32_t get_offset_of_videoFormatsList_4() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_StaticFields, ___videoFormatsList_4)); }
	inline List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * get_videoFormatsList_4() const { return ___videoFormatsList_4; }
	inline List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 ** get_address_of_videoFormatsList_4() { return &___videoFormatsList_4; }
	inline void set_videoFormatsList_4(List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * value)
	{
		___videoFormatsList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoFormatsList_4), (void*)value);
	}
};


// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};


// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___extent_4;
	// UnityEngine.XR.iOS.UnityARPlaneGeometry UnityEngine.XR.iOS.UnityARAnchorData::planeGeometry
	UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026  ___planeGeometry_5;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___transform_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___center_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_center_3() const { return ___center_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___extent_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_extent_4() const { return ___extent_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___extent_4 = value;
	}

	inline static int32_t get_offset_of_planeGeometry_5() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___planeGeometry_5)); }
	inline UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026  get_planeGeometry_5() const { return ___planeGeometry_5; }
	inline UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026 * get_address_of_planeGeometry_5() { return &___planeGeometry_5; }
	inline void set_planeGeometry_5(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026  value)
	{
		___planeGeometry_5 = value;
	}
};


// UnityEngine.XR.iOS.UnityAREnvironmentProbeCubemapData
struct  UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityAREnvironmentProbeCubemapData::cubemapPtr
	intptr_t ___cubemapPtr_0;
	// UnityEngine.XR.iOS.UnityAREnvironmentTextureFormat UnityEngine.XR.iOS.UnityAREnvironmentProbeCubemapData::textureFormat
	int64_t ___textureFormat_1;
	// System.Int32 UnityEngine.XR.iOS.UnityAREnvironmentProbeCubemapData::width
	int32_t ___width_2;
	// System.Int32 UnityEngine.XR.iOS.UnityAREnvironmentProbeCubemapData::height
	int32_t ___height_3;
	// System.Int32 UnityEngine.XR.iOS.UnityAREnvironmentProbeCubemapData::mipmapCount
	int32_t ___mipmapCount_4;

public:
	inline static int32_t get_offset_of_cubemapPtr_0() { return static_cast<int32_t>(offsetof(UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D, ___cubemapPtr_0)); }
	inline intptr_t get_cubemapPtr_0() const { return ___cubemapPtr_0; }
	inline intptr_t* get_address_of_cubemapPtr_0() { return &___cubemapPtr_0; }
	inline void set_cubemapPtr_0(intptr_t value)
	{
		___cubemapPtr_0 = value;
	}

	inline static int32_t get_offset_of_textureFormat_1() { return static_cast<int32_t>(offsetof(UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D, ___textureFormat_1)); }
	inline int64_t get_textureFormat_1() const { return ___textureFormat_1; }
	inline int64_t* get_address_of_textureFormat_1() { return &___textureFormat_1; }
	inline void set_textureFormat_1(int64_t value)
	{
		___textureFormat_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_mipmapCount_4() { return static_cast<int32_t>(offsetof(UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D, ___mipmapCount_4)); }
	inline int32_t get_mipmapCount_4() const { return ___mipmapCount_4; }
	inline int32_t* get_address_of_mipmapCount_4() { return &___mipmapCount_4; }
	inline void set_mipmapCount_4(int32_t value)
	{
		___mipmapCount_4 = value;
	}
};


// UnityEngine.XR.iOS.UnityARFaceAnchorData
struct  UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::transform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.UnityARFaceAnchorData::faceGeometry
	UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  ___faceGeometry_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::blendShapes
	intptr_t ___blendShapes_3;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::leftEyeTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___leftEyeTransform_4;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::rightEyeTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___rightEyeTransform_5;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARFaceAnchorData::lookAtPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPoint_6;
	// System.Boolean UnityEngine.XR.iOS.UnityARFaceAnchorData::isTracked
	bool ___isTracked_7;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___transform_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_faceGeometry_2() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___faceGeometry_2)); }
	inline UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  get_faceGeometry_2() const { return ___faceGeometry_2; }
	inline UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5 * get_address_of_faceGeometry_2() { return &___faceGeometry_2; }
	inline void set_faceGeometry_2(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  value)
	{
		___faceGeometry_2 = value;
	}

	inline static int32_t get_offset_of_blendShapes_3() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___blendShapes_3)); }
	inline intptr_t get_blendShapes_3() const { return ___blendShapes_3; }
	inline intptr_t* get_address_of_blendShapes_3() { return &___blendShapes_3; }
	inline void set_blendShapes_3(intptr_t value)
	{
		___blendShapes_3 = value;
	}

	inline static int32_t get_offset_of_leftEyeTransform_4() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___leftEyeTransform_4)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_leftEyeTransform_4() const { return ___leftEyeTransform_4; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_leftEyeTransform_4() { return &___leftEyeTransform_4; }
	inline void set_leftEyeTransform_4(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___leftEyeTransform_4 = value;
	}

	inline static int32_t get_offset_of_rightEyeTransform_5() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___rightEyeTransform_5)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_rightEyeTransform_5() const { return ___rightEyeTransform_5; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_rightEyeTransform_5() { return &___rightEyeTransform_5; }
	inline void set_rightEyeTransform_5(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___rightEyeTransform_5 = value;
	}

	inline static int32_t get_offset_of_lookAtPoint_6() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___lookAtPoint_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lookAtPoint_6() const { return ___lookAtPoint_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lookAtPoint_6() { return &___lookAtPoint_6; }
	inline void set_lookAtPoint_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lookAtPoint_6 = value;
	}

	inline static int32_t get_offset_of_isTracked_7() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___isTracked_7)); }
	inline bool get_isTracked_7() const { return ___isTracked_7; }
	inline bool* get_address_of_isTracked_7() { return &___isTracked_7; }
	inline void set_isTracked_7(bool value)
	{
		___isTracked_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARFaceAnchorData
struct UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1_marshaled_pinvoke
{
	intptr_t ___ptrIdentifier_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;
	UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  ___faceGeometry_2;
	intptr_t ___blendShapes_3;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___leftEyeTransform_4;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___rightEyeTransform_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPoint_6;
	int32_t ___isTracked_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARFaceAnchorData
struct UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1_marshaled_com
{
	intptr_t ___ptrIdentifier_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;
	UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  ___faceGeometry_2;
	intptr_t ___blendShapes_3;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___leftEyeTransform_4;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___rightEyeTransform_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPoint_6;
	int32_t ___isTracked_7;
};

// UnityEngine.XR.iOS.UnityARImageAnchorData
struct  UnityARImageAnchorData_t2EA02386DC32BBCA4A3EB205918BF28F7663B13E 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARImageAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARImageAnchorData::transform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;
	// System.IntPtr UnityEngine.XR.iOS.UnityARImageAnchorData::referenceImageNamePtr
	intptr_t ___referenceImageNamePtr_2;
	// System.Single UnityEngine.XR.iOS.UnityARImageAnchorData::referenceImagePhysicalSize
	float ___referenceImagePhysicalSize_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARImageAnchorData::isTracked
	int32_t ___isTracked_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARImageAnchorData_t2EA02386DC32BBCA4A3EB205918BF28F7663B13E, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARImageAnchorData_t2EA02386DC32BBCA4A3EB205918BF28F7663B13E, ___transform_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_referenceImageNamePtr_2() { return static_cast<int32_t>(offsetof(UnityARImageAnchorData_t2EA02386DC32BBCA4A3EB205918BF28F7663B13E, ___referenceImageNamePtr_2)); }
	inline intptr_t get_referenceImageNamePtr_2() const { return ___referenceImageNamePtr_2; }
	inline intptr_t* get_address_of_referenceImageNamePtr_2() { return &___referenceImageNamePtr_2; }
	inline void set_referenceImageNamePtr_2(intptr_t value)
	{
		___referenceImageNamePtr_2 = value;
	}

	inline static int32_t get_offset_of_referenceImagePhysicalSize_3() { return static_cast<int32_t>(offsetof(UnityARImageAnchorData_t2EA02386DC32BBCA4A3EB205918BF28F7663B13E, ___referenceImagePhysicalSize_3)); }
	inline float get_referenceImagePhysicalSize_3() const { return ___referenceImagePhysicalSize_3; }
	inline float* get_address_of_referenceImagePhysicalSize_3() { return &___referenceImagePhysicalSize_3; }
	inline void set_referenceImagePhysicalSize_3(float value)
	{
		___referenceImagePhysicalSize_3 = value;
	}

	inline static int32_t get_offset_of_isTracked_4() { return static_cast<int32_t>(offsetof(UnityARImageAnchorData_t2EA02386DC32BBCA4A3EB205918BF28F7663B13E, ___isTracked_4)); }
	inline int32_t get_isTracked_4() const { return ___isTracked_4; }
	inline int32_t* get_address_of_isTracked_4() { return &___isTracked_4; }
	inline void set_isTracked_4(int32_t value)
	{
		___isTracked_4 = value;
	}
};


// UnityEngine.XR.iOS.UnityARObjectAnchorData
struct  UnityARObjectAnchorData_t0FBFBB46ADB385CAD870834CAB7F892C8E2FEC57 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARObjectAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARObjectAnchorData::transform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;
	// System.IntPtr UnityEngine.XR.iOS.UnityARObjectAnchorData::referenceObjectNamePtr
	intptr_t ___referenceObjectNamePtr_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARObjectAnchorData::referenceObjectPtr
	intptr_t ___referenceObjectPtr_3;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARObjectAnchorData_t0FBFBB46ADB385CAD870834CAB7F892C8E2FEC57, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARObjectAnchorData_t0FBFBB46ADB385CAD870834CAB7F892C8E2FEC57, ___transform_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_referenceObjectNamePtr_2() { return static_cast<int32_t>(offsetof(UnityARObjectAnchorData_t0FBFBB46ADB385CAD870834CAB7F892C8E2FEC57, ___referenceObjectNamePtr_2)); }
	inline intptr_t get_referenceObjectNamePtr_2() const { return ___referenceObjectNamePtr_2; }
	inline intptr_t* get_address_of_referenceObjectNamePtr_2() { return &___referenceObjectNamePtr_2; }
	inline void set_referenceObjectNamePtr_2(intptr_t value)
	{
		___referenceObjectNamePtr_2 = value;
	}

	inline static int32_t get_offset_of_referenceObjectPtr_3() { return static_cast<int32_t>(offsetof(UnityARObjectAnchorData_t0FBFBB46ADB385CAD870834CAB7F892C8E2FEC57, ___referenceObjectPtr_3)); }
	inline intptr_t get_referenceObjectPtr_3() const { return ___referenceObjectPtr_3; }
	inline intptr_t* get_address_of_referenceObjectPtr_3() { return &___referenceObjectPtr_3; }
	inline void set_referenceObjectPtr_3(intptr_t value)
	{
		___referenceObjectPtr_3 = value;
	}
};


// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671, ___transform_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___transform_1 = value;
	}
};


// UnityEngine.XR.iOS.UnityMarshalLightData
struct  UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityMarshalLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arLightEstimate
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arDirectonalLightEstimate
	MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arDirectonalLightEstimate_2)); }
	inline MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 * get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  value)
	{
		___arDirectonalLightEstimate_2 = value;
	}
};


// UnityEngine.XR.iOS.UnityAREnvironmentProbeAnchorData
struct  UnityAREnvironmentProbeAnchorData_t211BF2642A51D3E86257F22D2E305F2DBE8FA649 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityAREnvironmentProbeAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityAREnvironmentProbeAnchorData::transform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;
	// UnityEngine.XR.iOS.UnityAREnvironmentProbeCubemapData UnityEngine.XR.iOS.UnityAREnvironmentProbeAnchorData::cubemapData
	UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D  ___cubemapData_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityAREnvironmentProbeAnchorData::probeExtent
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___probeExtent_3;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityAREnvironmentProbeAnchorData_t211BF2642A51D3E86257F22D2E305F2DBE8FA649, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityAREnvironmentProbeAnchorData_t211BF2642A51D3E86257F22D2E305F2DBE8FA649, ___transform_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_cubemapData_2() { return static_cast<int32_t>(offsetof(UnityAREnvironmentProbeAnchorData_t211BF2642A51D3E86257F22D2E305F2DBE8FA649, ___cubemapData_2)); }
	inline UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D  get_cubemapData_2() const { return ___cubemapData_2; }
	inline UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D * get_address_of_cubemapData_2() { return &___cubemapData_2; }
	inline void set_cubemapData_2(UnityAREnvironmentProbeCubemapData_tAAC438F3F93347041F96A3D34421514C235CA98D  value)
	{
		___cubemapData_2 = value;
	}

	inline static int32_t get_offset_of_probeExtent_3() { return static_cast<int32_t>(offsetof(UnityAREnvironmentProbeAnchorData_t211BF2642A51D3E86257F22D2E305F2DBE8FA649, ___probeExtent_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_probeExtent_3() const { return ___probeExtent_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_probeExtent_3() { return &___probeExtent_3; }
	inline void set_probeExtent_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___probeExtent_3 = value;
	}
};


// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityMarshalLightData UnityEngine.XR.iOS.internal_UnityARCamera::lightData
	UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	// System.IntPtr UnityEngine.XR.iOS.internal_UnityARCamera::pointCloud
	intptr_t ___pointCloud_7;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getLightEstimation
	uint32_t ___getLightEstimation_8;
	// UnityEngine.XR.iOS.ARWorldMappingStatus UnityEngine.XR.iOS.internal_UnityARCamera::worldMappngStatus
	int32_t ___worldMappngStatus_9;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___worldTransform_0)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___lightData_5)); }
	inline UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  get_lightData_5() const { return ___lightData_5; }
	inline UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___displayTransform_6)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloud_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___pointCloud_7)); }
	inline intptr_t get_pointCloud_7() const { return ___pointCloud_7; }
	inline intptr_t* get_address_of_pointCloud_7() { return &___pointCloud_7; }
	inline void set_pointCloud_7(intptr_t value)
	{
		___pointCloud_7 = value;
	}

	inline static int32_t get_offset_of_getLightEstimation_8() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___getLightEstimation_8)); }
	inline uint32_t get_getLightEstimation_8() const { return ___getLightEstimation_8; }
	inline uint32_t* get_address_of_getLightEstimation_8() { return &___getLightEstimation_8; }
	inline void set_getLightEstimation_8(uint32_t value)
	{
		___getLightEstimation_8 = value;
	}

	inline static int32_t get_offset_of_worldMappngStatus_9() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___worldMappngStatus_9)); }
	inline int32_t get_worldMappngStatus_9() const { return ___worldMappngStatus_9; }
	inline int32_t* get_address_of_worldMappngStatus_9() { return &___worldMappngStatus_9; }
	inline void set_worldMappngStatus_9(int32_t value)
	{
		___worldMappngStatus_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m32987ABF4E909DC5476F09C034714951CB4A8048(Guid_t * ___sourceId0, int32_t ___controlCode1, uint8_t ___setLevel2, int64_t ___anyKeyword3, int64_t ___allKeyword4, EVENT_FILTER_DESCRIPTOR_t24FD3DB96806FFE8C96FFDB38B1B8331EA0D72BB * ___filterData5, void* ___callbackContext6);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147(intptr_t ___arg0);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_mFD20677F91EBF121ACA3C4236C108B356BF376FA(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mC98CAEEAFE9482472AB4D5D78F733ADB7972A87C(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARFaceAnchor_AddElementToManagedDictionary_m9B3B31E5B68F4EC92CFC721909D2BAEADA04C00B(intptr_t ___keyPtr0, float ___value1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__envprobe_anchor_added_m8633A66EC4F3B88FAA5ECE41429B6C02AD02358D(UnityAREnvironmentProbeAnchorData_t211BF2642A51D3E86257F22D2E305F2DBE8FA649  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__envprobe_anchor_updated_mB7D8017126F1DBA2FEC4A9D3EC2430579110A75C(UnityAREnvironmentProbeAnchorData_t211BF2642A51D3E86257F22D2E305F2DBE8FA649  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__envprobe_anchor_removed_m449541373EAE2E503930FD3C4BC0BF9B17925900(UnityAREnvironmentProbeAnchorData_t211BF2642A51D3E86257F22D2E305F2DBE8FA649  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__object_anchor_added_m5E19F071A187084B58DA493F32BC95F3DBFE63B3(UnityARObjectAnchorData_t0FBFBB46ADB385CAD870834CAB7F892C8E2FEC57  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__object_anchor_updated_m7B07E540722E560A6D065E230D245573609D1CF9(UnityARObjectAnchorData_t0FBFBB46ADB385CAD870834CAB7F892C8E2FEC57  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__object_anchor_removed_mFABFC30CB948586789DB20668EE572EFE01BA02A(UnityARObjectAnchorData_t0FBFBB46ADB385CAD870834CAB7F892C8E2FEC57  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_ref_obj_extract_completion_handler_m2A345EC588649FA4495E8B3452D0322C4E05938B(intptr_t ___callbackPtr0, intptr_t ___referenceObjectPtr1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_get_world_map_completion_handler_m91F091C17DFE5C9FF2C66A04D9819FAF40EB95CB(intptr_t ___callbackPtr0, intptr_t ___worldMapPtr1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_get_environment_texture_completion_handler_m3CA2FA93468FC0205198B606AA961138D53040CB(intptr_t ___callbackPtr0, intptr_t ___texturePtr1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__frame_update_m7E9E0776881076EEAF54F8CE24680FF83E7DDCC4(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8  ___camera0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_tracking_changed_m5334FB7C81BB7219233154018CCE23FEF05631AC(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8  ___camera0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__anchor_added_mA8F1BFDC01F8610F0640C07381493CF6505D23E3(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__anchor_updated_m681144B4CA566A792DA325F268423EC57F2319F3(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__anchor_removed_mFB33C105ECB534DE854B9666ECF7FF87C8EC9D81(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__user_anchor_added_m430E2BD88762EFF29964066695FAA177F99C0E5B(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__user_anchor_updated_m7174C1B21C873627BE945ACB3D4A08E8D9882B2C(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__user_anchor_removed_m2368BCBC01224915F26BC7E991A77BE16F28982E(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__face_anchor_added_m215A9A24F4EE99CF7D21A4D94D60106CA452E13D(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1_marshaled_pinvoke ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__face_anchor_updated_m456C51448975531D6E47E5081E7A45FE939EB279(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1_marshaled_pinvoke ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__face_anchor_removed_mDE8D2673BF64E0002F26DFA5794E04F05F6F32C9(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1_marshaled_pinvoke ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__image_anchor_added_m64D4848D4BAC97A6454F68D6E05E3A047769B23C(UnityARImageAnchorData_t2EA02386DC32BBCA4A3EB205918BF28F7663B13E  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__image_anchor_updated_m0CF8B92C135674358EC69758154FE7189E654219(UnityARImageAnchorData_t2EA02386DC32BBCA4A3EB205918BF28F7663B13E  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__image_anchor_removed_m6F84E9C570DDEB64778601364AE0719C826AB987(UnityARImageAnchorData_t2EA02386DC32BBCA4A3EB205918BF28F7663B13E  ___anchor0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_failed_m42DC6CDFEDD058F6894D92424AE3D14C8FCF7EBA(char* ___error0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_interrupted_m3A9CB145422CAA8BAE90795858955D9E4D4B968D();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_interruption_ended_m874D4CB9724F4E7139489B8DAAADB45914905951();
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_should_relocalize_m098901994259481A57774FDD6FD6387286141068();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UnityARVideoFormat_AddToVFList_m04F1419BF4B5C0E5CF5A5998BAA18CE293B30683(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___newFormat0);


extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[33] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m32987ABF4E909DC5476F09C034714951CB4A8048),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_mFD20677F91EBF121ACA3C4236C108B356BF376FA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mC98CAEEAFE9482472AB4D5D78F733ADB7972A87C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARFaceAnchor_AddElementToManagedDictionary_m9B3B31E5B68F4EC92CFC721909D2BAEADA04C00B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__envprobe_anchor_added_m8633A66EC4F3B88FAA5ECE41429B6C02AD02358D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__envprobe_anchor_updated_mB7D8017126F1DBA2FEC4A9D3EC2430579110A75C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__envprobe_anchor_removed_m449541373EAE2E503930FD3C4BC0BF9B17925900),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__object_anchor_added_m5E19F071A187084B58DA493F32BC95F3DBFE63B3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__object_anchor_updated_m7B07E540722E560A6D065E230D245573609D1CF9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__object_anchor_removed_mFABFC30CB948586789DB20668EE572EFE01BA02A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_ref_obj_extract_completion_handler_m2A345EC588649FA4495E8B3452D0322C4E05938B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_get_world_map_completion_handler_m91F091C17DFE5C9FF2C66A04D9819FAF40EB95CB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_get_environment_texture_completion_handler_m3CA2FA93468FC0205198B606AA961138D53040CB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__frame_update_m7E9E0776881076EEAF54F8CE24680FF83E7DDCC4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_tracking_changed_m5334FB7C81BB7219233154018CCE23FEF05631AC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__anchor_added_mA8F1BFDC01F8610F0640C07381493CF6505D23E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__anchor_updated_m681144B4CA566A792DA325F268423EC57F2319F3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__anchor_removed_mFB33C105ECB534DE854B9666ECF7FF87C8EC9D81),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__user_anchor_added_m430E2BD88762EFF29964066695FAA177F99C0E5B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__user_anchor_updated_m7174C1B21C873627BE945ACB3D4A08E8D9882B2C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__user_anchor_removed_m2368BCBC01224915F26BC7E991A77BE16F28982E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__face_anchor_added_m215A9A24F4EE99CF7D21A4D94D60106CA452E13D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__face_anchor_updated_m456C51448975531D6E47E5081E7A45FE939EB279),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__face_anchor_removed_mDE8D2673BF64E0002F26DFA5794E04F05F6F32C9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__image_anchor_added_m64D4848D4BAC97A6454F68D6E05E3A047769B23C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__image_anchor_updated_m0CF8B92C135674358EC69758154FE7189E654219),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__image_anchor_removed_m6F84E9C570DDEB64778601364AE0719C826AB987),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_failed_m42DC6CDFEDD058F6894D92424AE3D14C8FCF7EBA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_interrupted_m3A9CB145422CAA8BAE90795858955D9E4D4B968D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_interruption_ended_m874D4CB9724F4E7139489B8DAAADB45914905951),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARSessionNativeInterface__ar_session_should_relocalize_m098901994259481A57774FDD6FD6387286141068),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityARVideoFormat_AddToVFList_m04F1419BF4B5C0E5CF5A5998BAA18CE293B30683),
};

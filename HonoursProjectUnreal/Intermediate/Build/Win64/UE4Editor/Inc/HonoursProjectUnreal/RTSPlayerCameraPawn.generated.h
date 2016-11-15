// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef HONOURSPROJECTUNREAL_RTSPlayerCameraPawn_generated_h
#error "RTSPlayerCameraPawn.generated.h already included, missing '#pragma once' in RTSPlayerCameraPawn.h"
#endif
#define HONOURSPROJECTUNREAL_RTSPlayerCameraPawn_generated_h

#define HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTurnCameraRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TurnCameraRight(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnCameraUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TurnCameraUp(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomCameraIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ZoomCameraIn(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraUp(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsolatedCameraYaw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetIsolatedCameraYaw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraRight(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraForward(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomCameraInInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ZoomCameraInInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraUpInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraUpInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraRightInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraRightInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraForwardInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraForwardInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastMoveInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FastMoveInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRepositionCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RepositionCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateDownByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateDownByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateUpByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateUpByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateRightByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateRightByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateLeftByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateLeftByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomOutByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ZoomOutByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomInByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ZoomInByWheel(); \
		P_NATIVE_END; \
	}


#define HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTurnCameraRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TurnCameraRight(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnCameraUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TurnCameraUp(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomCameraIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ZoomCameraIn(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraUp(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsolatedCameraYaw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetIsolatedCameraYaw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraRight(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraForward(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomCameraInInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ZoomCameraInInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraUpInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraUpInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraRightInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraRightInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveCameraForwardInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveCameraForwardInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastMoveInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FastMoveInput(Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRepositionCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RepositionCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateDownByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateDownByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateUpByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateUpByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateRightByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateRightByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateLeftByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotateLeftByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomOutByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ZoomOutByWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomInByWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ZoomInByWheel(); \
		P_NATIVE_END; \
	}


#define HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesARTSPlayerCameraPawn(); \
	friend HONOURSPROJECTUNREAL_API class UClass* Z_Construct_UClass_ARTSPlayerCameraPawn(); \
	public: \
	DECLARE_CLASS(ARTSPlayerCameraPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HonoursProjectUnreal"), NO_API) \
	DECLARE_SERIALIZER(ARTSPlayerCameraPawn) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesARTSPlayerCameraPawn(); \
	friend HONOURSPROJECTUNREAL_API class UClass* Z_Construct_UClass_ARTSPlayerCameraPawn(); \
	public: \
	DECLARE_CLASS(ARTSPlayerCameraPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HonoursProjectUnreal"), NO_API) \
	DECLARE_SERIALIZER(ARTSPlayerCameraPawn) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSPlayerCameraPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSPlayerCameraPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPlayerCameraPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPlayerCameraPawn); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ARTSPlayerCameraPawn(const ARTSPlayerCameraPawn& InCopy); \
public:


#define HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ARTSPlayerCameraPawn(const ARTSPlayerCameraPawn& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPlayerCameraPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPlayerCameraPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSPlayerCameraPawn)


#define HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_8_PROLOG
#define HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_RPC_WRAPPERS \
	HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_INCLASS \
	HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_INCLASS_NO_PURE_DECLS \
	HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HonoursProjectUnreal_Source_HonoursProjectUnreal_RTSPlayerCameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

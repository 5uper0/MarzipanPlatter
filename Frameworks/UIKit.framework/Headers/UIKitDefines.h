#if USE_UIKIT_PUBLIC_HEADERS || !__has_include(<UIKitCore/UIKitDefines.h>)
//
//  UIKitDefines.h
//  UIKit
//
//  Copyright (c) 2007-2017 Apple Inc. All rights reserved.
//

#import <Availability.h>

#ifdef __cplusplus
#define UIKIT_EXTERN		extern "C" __attribute__((visibility ("default")))
#else
#define UIKIT_EXTERN	        extern __attribute__((visibility ("default")))
#endif

#define UIKIT_STATIC_INLINE	static inline

#define UIKIT_AVAILABLE_IOS_ONLY(vers)
#define UIKIT_AVAILABLE_WATCHOS_ONLY(vers)
#define UIKIT_AVAILABLE_TVOS_ONLY(vers)
#define UIKIT_AVAILABLE_IOS_TVOS(_ios, _tvos)
#define UIKIT_AVAILABLE_IOS_WATCHOS_TVOS(_ios, _watchos, _tvos) __IOS_AVAILABLE(_ios) __WATCHOS_AVAILABLE(_watchos) __TVOS_AVAILABLE(_tvos)

#define UIKIT_CLASS_AVAILABLE_IOS_ONLY(vers)
#define UIKIT_CLASS_AVAILABLE_WATCHOS_ONLY(vers)
#define UIKIT_CLASS_AVAILABLE_TVOS_ONLY(vers) UIKIT_EXTERN
#define UIKIT_CLASS_AVAILABLE_IOS_TVOS(_ios, _tvos) UIKIT_EXTERN
#define UIKIT_CLASS_AVAILABLE_IOS_WATCHOS_TVOS(_ios, _watchos, _tvos)

#if (!defined(SWIFT_CLASS_EXTRA) || (defined(SWIFT_SDK_OVERLAY_UIKIT_EPOCH) && SWIFT_SDK_OVERLAY_UIKIT_EPOCH >= 1))
    #define UIKIT_DEFINE_AS_PROPERTIES 1
#else
    #define UIKIT_DEFINE_AS_PROPERTIES 0
#endif

#if (!defined(SWIFT_CLASS_EXTRA) || (defined(SWIFT_SDK_OVERLAY_UIKIT_EPOCH) && SWIFT_SDK_OVERLAY_UIKIT_EPOCH >= 1))
    #define UIKIT_REMOVE_ZERO_FROM_SWIFT 1
#else
    #define UIKIT_REMOVE_ZERO_FROM_SWIFT 0
#endif

#if ((defined(SWIFT_SDK_OVERLAY_UIKIT_EPOCH) && SWIFT_SDK_OVERLAY_UIKIT_EPOCH >= 2))
    #define UIKIT_STRING_ENUMS 1
#else
    #define UIKIT_STRING_ENUMS 0
#endif

#if __swift__
#define UIKIT_SWIFT_FORWARD_DECLARE(DECLARATION) DECLARATION;
#else
#define UIKIT_SWIFT_FORWARD_DECLARE(DECLARATION)
#endif

#else
#import <UIKitCore/UIKitDefines.h>
#endif
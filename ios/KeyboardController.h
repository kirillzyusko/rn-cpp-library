
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNKeyboardControllerSpec.h"

@interface KeyboardController : NSObject <NativeKeyboardControllerSpec>
#else
#import <React/RCTBridgeModule.h>

@interface KeyboardController : NSObject <RCTBridgeModule>
#endif

@end


#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCampackSpec.h"

@interface Campack : NSObject <NativeCampackSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Campack : NSObject <RCTBridgeModule>
#endif

@end

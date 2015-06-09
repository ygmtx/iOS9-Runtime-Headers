/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>

// BSMachPortSendRight (null)

+ (void)_queue_destroyPort:(unsigned int)arg1;
+ (id)_rightDescription;
+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)bootstrapLookUpWithName:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)taskNameForPID:(int)arg1;
+ (id)taskNamePortForPID:(int)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;

- (id)_initWithCopyOfPort:(unsigned int)arg1 previousTrace:(id)arg2;
- (id)_initWithPort:(unsigned int)arg1 previousTrace:(id)arg2;
- (BOOL)_queue_isUsable;
- (BOOL)_shouldInvalidateOnEncode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initFromReceiveRight:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCopyOfPort:(unsigned int)arg1;
- (id)initWithCopyOfRight:(id)arg1;
- (id)initWithNonRetainingPort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(BOOL)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)sendRight;

@end
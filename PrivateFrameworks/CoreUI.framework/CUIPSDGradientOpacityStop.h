/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {
    float  opacity;
}

// CUIPSDGradientOpacityStop (null)

+ (void)initialize;
+ (id)opacityStopWithLocation:(float)arg1 opacity:(float)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(float)arg1 opacity:(float)arg2;
- (BOOL)isOpacityStop;
- (float)opacity;
- (float)opacityLocation;

@end
/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioChannel : NSObject {
    AVCaptureAudioChannelInternal * _internal;
}

@property (nonatomic, readonly) float averagePowerLevel;
@property (nonatomic, readonly) float peakHoldLevel;

- (float)averagePowerLevel;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (float)peakHoldLevel;

@end

/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {
    WebDeviceOrientationProviderMockInternal * m_internal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// WebDeviceOrientationProviderMock (null)

+ (id)shared;

- (void)dealloc;
- (id)init;
- (id)lastOrientation;
- (void)setController:(struct DeviceOrientationController { }*)arg1;
- (void)setOrientation:(id)arg1;
- (void)startUpdating;
- (void)stopUpdating;

@end
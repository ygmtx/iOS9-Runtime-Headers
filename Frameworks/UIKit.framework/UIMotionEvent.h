/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMotionEvent : UIEvent {
    double  _highLevelTime;
    float  _highPassState;
    unsigned int  _highPassStateIndex;
    NSTimer * _idleTimer;
    double  _lastMovementTime;
    double  _lowEndTimeout;
    float  _lowPassState;
    unsigned int  _lowPassStateIndex;
    id  _motionAccelerometer;
    BOOL  _sentMotionBegan;
    double  _shakeStartTime;
    int  _shakeState;
    int  _stateMachineState;
    int  _subtype;
    int  notifyToken;
}

@property (nonatomic) int shakeState;

- (void).cxx_destruct;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1;
- (BOOL)_detectWhenNotActive;
- (float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(int)arg4;
- (void)_enablePeakDetectionForScreenBlanked:(id)arg1;
- (void)_enablePeakDetectionIfNecessary;
- (int)_feedStateMachine:(float)arg1 currentState:(int)arg2 timestamp:(double)arg3;
- (float)_highPass:(float)arg1;
- (void)_idleTimerFired;
- (id)_init;
- (BOOL)_isDetectingMotionEvents;
- (float)_lowPass:(float)arg1;
- (void)_resetLowPassState;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setSubtype:(int)arg1;
- (int)_shakeState;
- (void)_updateAccelerometerEnabled;
- (void)_willResume;
- (void)_willSuspend;
- (id)_windows;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)dealloc;
- (id)description;
- (void)setShakeState:(int)arg1;
- (int)shakeState;
- (int)subtype;
- (int)type;

@end

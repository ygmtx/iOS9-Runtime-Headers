/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSyntheticTouch : NSObject {
    unsigned char  _pathIdentity;
    unsigned char  _pathIndex;
    float  _pathMajorRadius;
    struct CGPoint { 
        float x; 
        float y; 
    }  locationInWindow;
    int  phase;
    unsigned int  tapCount;
    double  timestamp;
    UIWindow * window;
}

@property (nonatomic, readonly) unsigned char _pathIdentity;
@property (nonatomic, readonly) unsigned char _pathIndex;
@property (nonatomic) float _pathMajorRadius;
@property (nonatomic) struct CGPoint { float x1; float x2; } locationInWindow;
@property (nonatomic) int phase;
@property (nonatomic) unsigned int tapCount;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) UIWindow *window;

+ (id)syntheticTouchWithPoint:(struct CGPoint { float x1; float x2; })arg1 timestamp:(double)arg2 window:(id)arg3;

- (unsigned char)_pathIdentity;
- (unsigned char)_pathIndex;
- (float)_pathMajorRadius;
- (void)_setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 resetPrevious:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })getLocationInWindow;
- (id)initWithPoint:(struct CGPoint { float x1; float x2; })arg1 timestamp:(double)arg2 window:(id)arg3;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationInWindow;
- (int)phase;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (void)setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPhase:(int)arg1;
- (void)setTapCount:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWindow:(id)arg1;
- (void)set_pathMajorRadius:(float)arg1;
- (unsigned int)tapCount;
- (double)timestamp;
- (id)window;

@end

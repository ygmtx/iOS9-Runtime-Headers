/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusEngineTargetedDynamicAnimation : _UIDynamicAnimation {
    id /* block */  _applier;
    double  _convergenceRate;
    double  _minimumDifference;
    double  _targetValue;
    double  _value;
}

@property (nonatomic) double convergenceRate;
@property (nonatomic) double minimumDifference;
@property (nonatomic) double targetValue;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (BOOL)_animateForInterval:(double)arg1;
- (double)convergenceRate;
- (id)initWithValue:(double)arg1 targetValue:(double)arg2 convergenceRate:(double)arg3 minimumDifference:(double)arg4;
- (double)minimumDifference;
- (void)runWithValueApplier:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setConvergenceRate:(double)arg1;
- (void)setMinimumDifference:(double)arg1;
- (void)setTargetValue:(double)arg1;
- (void)setValue:(double)arg1;
- (double)targetValue;
- (double)value;

@end

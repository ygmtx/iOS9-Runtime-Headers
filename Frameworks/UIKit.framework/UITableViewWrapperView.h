/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewWrapperView : UIScrollView {
    NSMutableArray * _stuckToBackViews;
}

@property (nonatomic, readonly) NSArray *stuckToBackViews;

- (void).cxx_destruct;
- (BOOL)_forwardsToParentScroller;
- (void)_stickViewToBack:(id)arg1;
- (void)_unstickView:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSwipeBeginning:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)stuckToBackViews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)willRemoveSubview:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewAnimation : NSObject {
    BOOL  _animateFromCurrentPosition;
    int  _curve;
    BOOL  _editing;
    float  _endAlpha;
    float  _endFraction;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _endRect;
    NSIndexPath * _indexPath;
    BOOL  _shouldAllowGroupOpacityAfterAnimation;
    BOOL  _shouldAnimateShadow;
    BOOL  _shouldClipToBoundsAfterAnimation;
    BOOL  _shouldDeleteAfterAnimation;
    BOOL  _shouldResetGroupOpacityAfterAnimation;
    float  _startFraction;
    UIView * _view;
    int  _viewType;
}

@property (nonatomic, readonly) BOOL animateFromCurrentPosition;
@property (nonatomic, readonly) int curve;
@property (nonatomic, readonly) BOOL editing;
@property (nonatomic, readonly) float endAlpha;
@property (nonatomic, readonly) float endFraction;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } endRect;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) BOOL shouldAllowGroupOpacityAfterAnimation;
@property (nonatomic) BOOL shouldAnimateShadow;
@property (nonatomic) BOOL shouldClipToBoundsAfterAnimation;
@property (nonatomic, readonly) BOOL shouldDeleteAfterAnimation;
@property (nonatomic) BOOL shouldResetGroupOpacityAfterAnimation;
@property (nonatomic, readonly) float startFraction;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) int viewType;

- (void).cxx_destruct;
- (BOOL)animateFromCurrentPosition;
- (int)curve;
- (id)description;
- (BOOL)editing;
- (float)endAlpha;
- (float)endFraction;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endRect;
- (id)indexPath;
- (id)initWithView:(id)arg1 indexPath:(id)arg2 viewType:(int)arg3 endRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 endAlpha:(float)arg5 startFraction:(float)arg6 endFraction:(float)arg7 curve:(int)arg8 animateFromCurrentPosition:(BOOL)arg9 shouldDeleteAfterAnimation:(BOOL)arg10 editing:(BOOL)arg11;
- (void)setShouldAllowGroupOpacityAfterAnimation:(BOOL)arg1;
- (void)setShouldAnimateShadow:(BOOL)arg1;
- (void)setShouldClipToBoundsAfterAnimation:(BOOL)arg1;
- (void)setShouldResetGroupOpacityAfterAnimation:(BOOL)arg1;
- (BOOL)shouldAllowGroupOpacityAfterAnimation;
- (BOOL)shouldAnimateShadow;
- (BOOL)shouldClipToBoundsAfterAnimation;
- (BOOL)shouldDeleteAfterAnimation;
- (BOOL)shouldResetGroupOpacityAfterAnimation;
- (float)startFraction;
- (id)view;
- (int)viewType;

@end
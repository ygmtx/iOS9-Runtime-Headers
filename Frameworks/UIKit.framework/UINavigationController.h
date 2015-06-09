/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegatePrivate, UINavigationBarDelegate> {
    NSString * __backdropGroupName;
    BOOL  __barAnimationWasCancelled;
    _UIAnimationCoordinator * __barInteractiveAnimationCoordinator;
    _UIBarPanGestureRecognizer * __barSwipeHideGesture;
    _UIBarTapGestureRecognizer * __barTapHideGesture;
    _UINavigationInteractiveTransition * __cachedInteractionController;
    _UINavigationParallaxTransition * __cachedTransitionController;
    <UIViewControllerInteractiveTransitioning> * __interactionController;
    id  __keyboardAppearedNotificationToken;
    NSUUID * __navbarAnimationId;
    NSUUID * __toolbarAnimationId;
    <UIViewControllerAnimatedTransitioning> * __transitionController;
    id /* block */  __updateNavigationBarHandler;
    BOOL  __usingBuiltinAnimator;
    UITapGestureRecognizer * _backGestureRecognizer;
    float  _bottomInsetDelta;
    float  _builtinTransitionGap;
    int  _builtinTransitionStyle;
    UIView * _containerView;
    UIFocusContainerGuide * _contentFocusContainerGuide;
    float  _customNavigationTransitionDuration;
    <UINavigationControllerDelegate> * _delegate;
    UIViewController * _disappearingViewController;
    _UINavigationControllerPalette * _freePalette;
    BOOL  _hidesBarsOnSwipe;
    BOOL  _hidesBarsOnTap;
    BOOL  _hidesBarsWhenKeyboardAppears;
    BOOL  _hidesBarsWhenVerticallyCompact;
    BOOL  _interactiveTransition;
    UINavigationBar * _navigationBar;
    Class  _navigationBarClass;
    struct { 
        unsigned int isAppearingAnimated : 1; 
        unsigned int isAlreadyPoppingNavigationItem : 1; 
        unsigned int isNavigationBarHidden : 1; 
        unsigned int isToolbarShown : 1; 
        unsigned int needsDeferredTransition : 1; 
        unsigned int isTransitioning : 1; 
        unsigned int paletteTransitionPending : 1; 
        unsigned int lastOperation : 4; 
        unsigned int lastOperationAnimated : 1; 
        unsigned int deferredTransition : 8; 
        unsigned int didPreloadKeyboardAnimation : 1; 
        unsigned int didHideBottomBar : 1; 
        unsigned int didExplicitlyHideTabBar : 1; 
        unsigned int isChangingOrientationForPop : 1; 
        unsigned int pretendNavBarHidden : 1; 
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding : 1; 
        unsigned int searchBarHidNavBar : 1; 
        unsigned int useSystemPopoverBarAppearance : 1; 
        unsigned int isCustomTransition : 1; 
        unsigned int isBuiltinTransition : 1; 
        unsigned int resetDidHideOnCancel : 1; 
        unsigned int delegateWillShowViewController : 1; 
        unsigned int delegateDidShowViewController : 1; 
        unsigned int delegateTransitionController : 1; 
        unsigned int delegateTransitionControllerEx : 1; 
        unsigned int delegateInteractionController : 1; 
        unsigned int delegateInteractionControllerEx : 1; 
        unsigned int delegateShouldCrossFadeNavigationBar : 1; 
        unsigned int delegateShouldCrossFadeBottomBars : 1; 
        unsigned int delegateShouldUseBuiltinInteractionController : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int delegateLayoutTransitioningClass : 1; 
        unsigned int navigationBarHidesCompletelyOffscreen : 1; 
        unsigned int clipUnderlapWhileTransitioning : 1; 
        unsigned int isCrossfadingOutTabBar : 1; 
        unsigned int isCrossfadingInTabBar : 1; 
        unsigned int skipContentInsetCalculation : 1; 
        unsigned int neverInWindow : 1; 
        unsigned int useStandardStatusBarHeight : 1; 
        unsigned int allowUserInteractionDuringTransition : 1; 
        unsigned int enableBackButtonDuringTransition : 1; 
        unsigned int allowsGroupBlending : 1; 
        unsigned int allowNestedNavigationControllers : 1; 
        unsigned int allowChildSplitViewControllers : 1; 
        unsigned int nestedNavigationBarWasHidden : 1; 
        unsigned int nestedToolbarWasHidden : 1; 
        unsigned int isNested : 1; 
        unsigned int searchHidNavigationBar : 1; 
        unsigned int suppressMixedOrientationPop : 1; 
        unsigned int disappearingViewControllerIsBeingRemoved : 1; 
        unsigned int isWrappingDuringAdaptation : 1; 
        unsigned int cannotPerformShowViewController : 1; 
    }  _navigationControllerFlags;
    UIView * _navigationTransitionView;
    unsigned long  _popSoundID;
    unsigned long  _pushSoundID;
    NSMapTable * _rememberedFocusedViews;
    int  _savedNavBarStyleBeforeSheet;
    int  _savedToolBarStyleBeforeSheet;
    float  _statusBarHeightForHideShow;
    UIToolbar * _toolbar;
    Class  _toolbarClass;
    _UINavigationControllerPalette * _topPalette;
    _UINavigationControllerPalette * _transitioningTopPalette;
}

@property (getter=_backdropGroupName, setter=_setBackdropGroupName:, nonatomic, retain) NSString *_backdropGroupName;
@property (setter=_setBarAnimationWasCancelled:, nonatomic) BOOL _barAnimationWasCancelled;
@property (setter=_setInteractiveAnimationCoordinator:, nonatomic, retain) _UIAnimationCoordinator *_barInteractiveAnimationCoordinator;
@property (setter=_setBarSwipeHideGesture:, nonatomic, retain) _UIBarPanGestureRecognizer *_barSwipeHideGesture;
@property (setter=_setBarTapHideGesture:, nonatomic, retain) _UIBarTapGestureRecognizer *_barTapHideGesture;
@property (setter=_setCachedInteractionController:, nonatomic, retain) _UINavigationInteractiveTransition *_cachedInteractionController;
@property (setter=_setCachedTransitionController:, nonatomic, retain) _UINavigationParallaxTransition *_cachedTransitionController;
@property (setter=_setInteractionController:, nonatomic, retain) <UIViewControllerInteractiveTransitioning> *_interactionController;
@property (setter=_setKeyboardAppearedNotificationToken:, nonatomic, retain) id _keyboardAppearedNotificationToken;
@property (setter=_setNavbarAnimationId:, nonatomic, retain) NSUUID *_navbarAnimationId;
@property (setter=_setToolbarAnimationId:, nonatomic, retain) NSUUID *_toolbarAnimationId;
@property (setter=_setToolbarClass:, nonatomic) Class _toolbarClass;
@property (setter=_setTransitionController:, nonatomic, retain) <UIViewControllerAnimatedTransitioning> *_transitionController;
@property (setter=_setUpdateNavigationBarHandler:, nonatomic, copy) id /* block */ _updateNavigationBarHandler;
@property (getter=_isUsingBuiltinAnimator, setter=_setUsingBuiltinAnimator:, nonatomic) BOOL _usingBuiltinAnimator;
@property (getter=_allowChildSplitViewControllers, setter=_setAllowChildSplitViewControllers:, nonatomic) BOOL allowChildSplitViewControllers;
@property (getter=_allowNestedNavigationControllers, setter=_setAllowNestedNavigationControllers:, nonatomic) BOOL allowNestedNavigationControllers;
@property (nonatomic) BOOL avoidMovingNavBarOffscreenBeforeUnhiding;
@property (nonatomic, readonly) UIPanGestureRecognizer *barHideOnSwipeGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *barHideOnTapGestureRecognizer;
@property (nonatomic, readonly) UIViewController *bottomViewController;
@property (getter=_builtinTransitionGap, setter=_setBuiltinTransitionGap:, nonatomic) float builtinTransitionGap;
@property (getter=_builtinTransitionStyle, setter=_setBuiltinTransitionStyle:, nonatomic) int builtinTransitionStyle;
@property (getter=_contentFocusContainerGuide, nonatomic, readonly) UIFocusContainerGuide *contentFocusContainerGuide;
@property (getter=_isCrossfadingInTabBar, setter=_setCrossfadingInTabBar:, nonatomic) BOOL crossfadingInTabBar;
@property (getter=_isCrossfadingOutTabBar, setter=_setCrossfadingOutTabBar:, nonatomic) BOOL crossfadingOutTabBar;
@property (nonatomic) float customNavigationTransitionDuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UINavigationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) UIViewController *detailViewController;
@property (getter=_didExplicitlyHideTabBar, setter=_setDidExplicitlyHideTabBar:, nonatomic) BOOL didHideTabBar;
@property (nonatomic, retain) UIViewController *disappearingViewController;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hidesBarsOnSwipe;
@property (nonatomic) BOOL hidesBarsOnTap;
@property (nonatomic) BOOL hidesBarsWhenKeyboardAppears;
@property (nonatomic) BOOL hidesBarsWhenVerticallyCompact;
@property (nonatomic, readonly) UIGestureRecognizer *interactivePopGestureRecognizer;
@property (getter=isInteractiveTransition, nonatomic) BOOL interactiveTransition;
@property BOOL isExpanded;
@property (getter=_isNestedNavigationController, setter=_setIsNestedNavigationController:, nonatomic) BOOL isNestedNavigationController;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (getter=isNavigationBarHidden, nonatomic) BOOL navigationBarHidden;
@property (nonatomic, readonly) UINavigationTransitionView *navigationTransitionView;
@property (nonatomic) BOOL needsDeferredTransition;
@property (nonatomic) BOOL pretendNavBarHidden;
@property (nonatomic, readonly) UIViewController *previousViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (getter=isToolbarHidden, nonatomic) BOOL toolbarHidden;
@property (nonatomic, readonly) UIViewController *topViewController;
@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, readonly) UIViewController *visibleViewController;

+ (BOOL)_directlySetsContentOverlayInsetsForChildren;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (struct CGSize { float x1; float x2; })_adjustedContentSizeForPopover:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_allowChildSplitViewControllers;
- (BOOL)_allowNestedNavigationControllers;
- (BOOL)_allowsAutorotation;
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)arg1 lastOperation:(int)arg2 edge:(unsigned int*)arg3 duration:(double*)arg4;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_avoidanceInsets;
- (id)_backdropBarGroupName;
- (id)_backdropGroupName;
- (BOOL)_barAnimationWasCancelled;
- (id)_barInteractiveAnimationCoordinator;
- (id)_barSwipeHideGesture;
- (id)_barTapHideGesture;
- (id)_builtinInteractionController;
- (id)_builtinTransitionController;
- (float)_builtinTransitionGap;
- (int)_builtinTransitionStyle;
- (id)_cachedInteractionController;
- (id)_cachedTransitionController;
- (void)_cancelInteractiveTransition:(float)arg1 transitionContext:(id)arg2;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)_clearLastOperation;
- (BOOL)_clipUnderlapWhileTransitioning;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (struct CGPoint { float x1; float x2; })_computeTopBarCenter:(id)arg1 hidden:(BOOL)arg2 edge:(unsigned int)arg3 center:(struct CGPoint { float x1; float x2; })arg4 offset:(float)arg5;
- (void)_configureBarSwipeGesture;
- (void)_configureBarTapGesture;
- (void)_configureBarsAutomaticActions;
- (void)_configureKeyboardBarHiding;
- (void)_configureToolbar;
- (void)_confirmBarAccessMethods;
- (id)_contentFocusContainerGuide;
- (id)_customInteractionController:(id)arg1;
- (float)_customNavigationTransitionDuration;
- (id)_customTransitionController:(BOOL)arg1;
- (id)_deepestUnambiguousResponder;
- (int)_deferredTransition;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (BOOL)_didExplicitlyHideTabBar;
- (void)_didGainChildScrollView:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2;
- (void)_executeNavigationHandler:(id /* block */)arg1 deferred:(BOOL)arg2;
- (id)_existingNavigationBar;
- (id)_existingToolbar;
- (id)_existingToolbarWithItems;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_expectedContentInsetDeltaForViewController:(id)arg1;
- (id)_findViewControllerToPopTo;
- (id)_findViewControllerToPopToForNavigationItem:(id)arg1;
- (void)_finishInteractiveTransition:(float)arg1 transitionContext:(id)arg2;
- (void)_forgetFocusedViewForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForWrapperViewForViewController:(id)arg1;
- (void)_gestureRecognizedInteractiveHide:(id)arg1;
- (void)_gestureRecognizedToggleVisibility:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (BOOL)_hasNestedNavigationController;
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (void)_hideForKeyboardAppearance;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_interactionController;
- (BOOL)_isCrossfadingInTabBar;
- (BOOL)_isCrossfadingOutTabBar;
- (BOOL)_isInteractiveCustomNavigationTransition;
- (BOOL)_isNavigationBarEffectivelyVisible;
- (BOOL)_isNavigationBarVisible;
- (BOOL)_isNestedNavigationController;
- (BOOL)_isPerformingLayoutToLayoutTransition;
- (BOOL)_isPresentationContextByDefault;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_isTransitioning;
- (BOOL)_isUsingBuiltinAnimator;
- (BOOL)_isViewControllerFullScene;
- (id)_keyboardAnimationStyle;
- (id)_keyboardAppearedNotificationToken;
- (int)_keyboardDirectionForTransition:(int)arg1;
- (id)_lastNavigationItems;
- (void)_layoutTopViewController;
- (void)_layoutTopViewControllerInSheet;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (void)_layoutViewController:(id)arg1;
- (void)_makeBarHideGestureIfNecessary;
- (void)_makeBarSwipeGestureIfNecessary;
- (id)_moreListTitle;
- (id)_navbarAnimationId;
- (BOOL)_navbarIsAppearingInteractively;
- (void)_navigationBarDidChangeStyle:(id)arg1;
- (id)_navigationBarForNestedNavigationController;
- (id)_navigationBarHiddenByDefault:(BOOL)arg1;
- (id)_navigationItems;
- (int)_navigationTransitionForUITransition:(int)arg1;
- (void)_navigationTransitionView:(id)arg1 didCancelTransition:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 wrapperView:(id)arg5;
- (id)_nthChildViewControllerFromTop:(unsigned int)arg1;
- (id)_outermostNavigationController;
- (void)_performBackGesture:(id)arg1;
- (void)_playPopNavigationSound;
- (void)_playPushNavigationSound;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)arg1;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(BOOL)arg2;
- (int)_positionForBar:(id)arg1;
- (void)_positionNavigationBarHidden:(BOOL)arg1;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(unsigned int)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(unsigned int)arg2 initialOffset:(float)arg3;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(unsigned int)arg2;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(unsigned int)arg2 initialOffset:(float)arg3;
- (void)_positionToolbarHidden:(BOOL)arg1;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(unsigned int)arg2;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(unsigned int)arg2 crossFade:(BOOL)arg3;
- (void)_positionTopBar:(id)arg1 hidden:(BOOL)arg2 edge:(unsigned int)arg3 center:(struct CGPoint { float x1; float x2; })arg4 offset:(float)arg5;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForNestedDisplayWithNavigationController:(id)arg1;
- (void)_prepareForNormalDisplayWithNavigationController:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_presentationTransitionUnwrapViewController:(id)arg1;
- (void)_presentationTransitionWrapViewController:(id)arg1 forTransitionContext:(id)arg2;
- (void)_propagateContentAdjustmentsForControllersWithSharedViews;
- (BOOL)_reallyWantsFullScreenLayout;
- (id)_recallRememberedFocusedViewForViewController:(id)arg1;
- (void)_releaseContainerViews;
- (void)_rememberFocusedView:(id)arg1 forViewController:(id)arg2;
- (void)_repositionPaletteWithNavigationBarHidden:(BOOL)arg1 duration:(double)arg2 shouldUpdateNavigationItems:(BOOL)arg3;
- (void)_resetBottomBarHiddenState;
- (id)_screenEdgePanGestureRecognizer;
- (float)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (float)_scrollViewTopContentInsetForViewController:(id)arg1;
- (BOOL)_searchHidNavigationBar;
- (void)_sendNavigationBarToBack;
- (void)_setAllowChildSplitViewControllers:(BOOL)arg1;
- (void)_setAllowNestedNavigationControllers:(BOOL)arg1;
- (void)_setBackdropGroupName:(id)arg1;
- (void)_setBarAnimationWasCancelled:(BOOL)arg1;
- (void)_setBarSwipeHideGesture:(id)arg1;
- (void)_setBarTapHideGesture:(id)arg1;
- (void)_setBarsHidden:(BOOL)arg1;
- (void)_setBarsHidden:(BOOL)arg1 allowAnimation:(BOOL)arg2;
- (void)_setBuiltinTransitionGap:(float)arg1;
- (void)_setBuiltinTransitionStyle:(int)arg1;
- (void)_setCachedInteractionController:(id)arg1;
- (void)_setCachedTransitionController:(id)arg1;
- (void)_setClipUnderlapWhileTransitioning:(BOOL)arg1;
- (void)_setClipsToBounds:(BOOL)arg1;
- (void)_setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setCrossfadingInTabBar:(BOOL)arg1;
- (void)_setCrossfadingOutTabBar:(BOOL)arg1;
- (void)_setCustomTransition:(BOOL)arg1;
- (void)_setDidExplicitlyHideTabBar:(BOOL)arg1;
- (void)_setInteractionController:(id)arg1;
- (void)_setInteractiveAnimationCoordinator:(id)arg1;
- (void)_setIsNestedNavigationController:(BOOL)arg1;
- (void)_setIsWrappingDuringAdaptation:(BOOL)arg1;
- (void)_setKeyboardAppearedNotificationToken:(id)arg1;
- (void)_setKeyboardNotificationToken:(id)arg1;
- (void)_setNavbarAnimationId:(id)arg1;
- (void)_setNavigationBarHidden:(BOOL)arg1 edge:(unsigned int)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidden:(BOOL)arg1 edgeIfNotNavigating:(unsigned int)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidesCompletelyOffscreen:(BOOL)arg1;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (void)_setSearchHidNavigationBar:(BOOL)arg1;
- (void)_setToolbarAnimationId:(id)arg1;
- (void)_setToolbarClass:(Class)arg1;
- (void)_setToolbarHidden:(BOOL)arg1 edge:(unsigned int)arg2 duration:(double)arg3;
- (void)_setTransitionController:(id)arg1;
- (void)_setUpContentFocusContainerGuide;
- (void)_setUpdateNavigationBarHandler:(id /* block */)arg1;
- (void)_setUseCurrentStatusBarHeight:(BOOL)arg1;
- (void)_setUseStandardStatusBarHeight:(BOOL)arg1;
- (void)_setUsingBuiltinAnimator:(BOOL)arg1;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3 operation:(int)arg4;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3 operation:(int)arg4;
- (void)_setVisualAltitudeForBar:(id)arg1;
- (BOOL)_shouldBottomBarBeHidden;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (BOOL)_shouldCrossFadeBottomBars;
- (BOOL)_shouldCrossFadeNavigationBar;
- (BOOL)_shouldHideBarsForTraits:(id)arg1;
- (BOOL)_shouldLayoutViewControllerForTransparentStatusBar:(id)arg1;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1 orOverlayContent:(BOOL*)arg2;
- (BOOL)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;
- (BOOL)_shouldStatusBarInsetViewController:(id)arg1;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_shouldTabBar:(id)arg1 insetViewController:(id)arg2;
- (BOOL)_shouldTabBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(BOOL*)arg3;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(BOOL*)arg3;
- (BOOL)_shouldUseBuiltinInteractionController;
- (BOOL)_shouldUseOnePartRotation;
- (id)_snapshotView;
- (void)_startCustomTransition:(id)arg1;
- (void)_startDeferredTransitionIfNeeded;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (id)_startInteractiveBarTransition:(id)arg1;
- (void)_startInteractiveNavbarTransition;
- (void)_startInteractiveToolbarTransition;
- (void)_startToolbarTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1 isHidden:(BOOL)arg2;
- (id)_toolbarAnimationId;
- (Class)_toolbarClass;
- (BOOL)_toolbarIsAnimatingInteractively;
- (float)_topBarHeight;
- (id)_transitionAnimationContext;
- (BOOL)_transitionConflictsWithNavigationTransitions:(id)arg1;
- (id)_transitionController;
- (id)_transitionCoordinator;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_updateBottomBarHiddenState;
- (void)_updateChildContentMargins;
- (void)_updateInteractiveBarTransition:(id)arg1 withUUID:(id)arg2 percent:(float)arg3 isFinished:(BOOL)arg4 didComplete:(BOOL)arg5 completionSpeed:(float)arg6 completionCurve:(int)arg7;
- (void)_updateInteractivePopGestureEnabledState;
- (void)_updateInteractiveTransition:(float)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id /* block */)_updateNavigationBarHandler;
- (void)_updatePaletteBackground;
- (void)_updatePaletteConstraints;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_useCrossFadeForGestureHiding;
- (BOOL)_useCurrentStatusBarHeight;
- (BOOL)_useStandardStatusBarHeight;
- (BOOL)_usesTransitionController;
- (id)_viewControllerForDisappearCallback;
- (BOOL)_viewControllerWasSelected;
- (id)_viewForContentInPopover;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (BOOL)_willPerformCustomNavigationTransitionForPop;
- (BOOL)_willPerformCustomNavigationTransitionForPush;
- (BOOL)allowUserInteractionDuringTransition;
- (id)allowedChildViewControllersForUnwindingFromSource:(id)arg1;
- (BOOL)avoidMovingNavBarOffscreenBeforeUnhiding;
- (id)barHideOnSwipeGestureRecognizer;
- (id)barHideOnTapGestureRecognizer;
- (BOOL)becomeFirstResponder;
- (id)bottomViewController;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (BOOL)condensesBarsOnSwipe;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (float)customNavigationTransitionDuration;
- (void)dealloc;
- (id)defaultPNGName;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)disappearingViewController;
- (double)durationForTransition:(int)arg1;
- (BOOL)editing;
- (BOOL)enableBackButtonDuringTransition;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hidesBarsOnSwipe;
- (BOOL)hidesBarsOnTap;
- (BOOL)hidesBarsWhenKeyboardAppears;
- (BOOL)hidesBarsWhenVerticallyCompact;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)interactivePopGestureRecognizer;
- (BOOL)isAlreadyPoppingNavItem;
- (BOOL)isBuiltinTransition;
- (BOOL)isCustomTransition;
- (BOOL)isInteractiveTransition;
- (BOOL)isModalInPopover;
- (BOOL)isNavigationBarHidden;
- (BOOL)isShown;
- (BOOL)isToolbarHidden;
- (int)lastOperation;
- (void)loadView;
- (void)makeModalViewControllerTopViewController;
- (int)modalTransitionStyle;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)moreListTableCell;
- (id)navigationBar;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (Class)navigationBarClass;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (id)navigationItem;
- (id)navigationTransitionView;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(int)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(int)arg2;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(int)arg2;
- (BOOL)needsDeferredTransition;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithAnimationTransition:(int)arg1 duration:(double)arg2 curve:(int)arg3;
- (id)popViewControllerWithTransition:(int)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusedView;
- (int)preferredInterfaceOrientationForPresentation;
- (int)preferredStatusBarStyle;
- (BOOL)pretendNavBarHidden;
- (id)previousViewController;
- (void)purgeMemoryForReason:(int)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(BOOL)arg3;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (BOOL)searchBarHidNavBar;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)setAllowUserInteractionDuringTransition:(BOOL)arg1;
- (void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(BOOL)arg1;
- (void)setCondensesBarsOnSwipe:(BOOL)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (void)setCustomNavigationTransitionDuration:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisappearingViewController:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnableBackButtonDuringTransition:(BOOL)arg1;
- (void)setHidesBarsOnSwipe:(BOOL)arg1;
- (void)setHidesBarsOnTap:(BOOL)arg1;
- (void)setHidesBarsWhenKeyboardAppears:(BOOL)arg1;
- (void)setHidesBarsWhenVerticallyCompact:(BOOL)arg1;
- (void)setInteractiveTransition:(BOOL)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNeedsDeferredTransition;
- (void)setNeedsDeferredTransition:(BOOL)arg1;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPretendNavBarHidden:(BOOL)arg1;
- (void)setSearchBarHidNavBar:(BOOL)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)tabBarItem;
- (id)toolbar;
- (id)topViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)visibleViewController;
- (BOOL)wasLastOperationAnimated;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// UINavigationController (ActivityContinuationPrivate)

- (id)_additionalViewControllersToCheckForUserActivity;

// UINavigationController (MasterDetailLegacySupport)

- (id)detailViewController;
- (BOOL)isExpanded;
- (void)setDetailViewController:(id)arg1;
- (void)setIsExpanded:(BOOL)arg1;

// UINavigationController (StateRestoration)

- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;

// UINavigationController (UICollectionViewControllerSupport)

- (void)_prepareCollectionViewController:(id)arg1 forSharingWithCollectionViewController:(id)arg2;
- (void)_prepareCollectionViewControllerForSharing:(id)arg1;
- (void)_prepareCollectionViewControllers:(id)arg1 forSharingInRange:(id)arg2;

// UINavigationController (_UIPalette)

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForPalette:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)_detachPalette:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForPalette:(id)arg1;
- (id)_pinningBarForPalette:(id)arg1;
- (void)_startPaletteTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (id)_topPalette;
- (void)attachPalette:(id)arg1 isPinned:(BOOL)arg2;
- (void)detachPalette:(id)arg1;
- (void)detachPalette:(id)arg1 isInPaletteTransition:(BOOL)arg2;
- (id)existingPaletteForEdge:(unsigned int)arg1;
- (id)paletteForEdge:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2;

@end
/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchBar : UIView <UIBarPositioning, UIStatusBarTinting, UITextInputTraits, UITextInputTraits_Private, _UIBarPositioningInternal> {
    BOOL  __forceCenteredPlaceholderLayout;
    unsigned int  __scopeBarPosition;
    UISearchController * __searchController;
    BOOL  __transplanting;
    UIBarButtonItem * _animatedAppearanceBarButtonItem;
    id  _appearanceStorage;
    _UIBackdropView * _backdrop;
    unsigned int  _backdropStyle;
    UIView * _background;
    int  _barPosition;
    UIColor * _barTintColor;
    UIBarButtonItem * _cancelBarButtonItem;
    UIButton * _cancelButton;
    NSString * _cancelButtonText;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInset;
    id  _controller;
    <UISearchBarDelegate><UISearchBarDelegate_Private> * _delegate;
    UIView * _inputAccessoryView;
    UIButton * _leftButton;
    UIView * _maskView;
    _UISearchBarNavigationItem * _navigationItem;
    UILabel * _promptLabel;
    UIView * _scopeBar;
    _UISearchBarScopeBarBackground * _scopeBarBackgroundView;
    UIView * _scopeBarContainerView;
    NSArray * _scopes;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int showsBookmarkButton : 1; 
        unsigned int showsCancelButton : 1; 
        unsigned int barTranslucence : 3; 
        unsigned int autoDisableCancelButton : 1; 
        unsigned int showsScopeBar : 1; 
        unsigned int hideBackground : 1; 
        unsigned int combinesLandscapeBars : 1; 
        unsigned int usesEmbeddedAppearance : 1; 
        unsigned int showsSearchResultsButton : 1; 
        unsigned int searchResultsButtonSelected : 1; 
        unsigned int pretendsIsInBar : 1; 
        unsigned int disabled : 1; 
        unsigned int backgroundLayoutNeedsUpdate : 1; 
        unsigned int containedInNavigationPalette : 1; 
        unsigned int containedInNavigationBar : 1; 
        unsigned int containedInToolBar : 1; 
        unsigned int drawsBackgroundInPalette : 1; 
        unsigned int centerPlaceholder : 1; 
        unsigned int searchFieldLeftViewMode : 2; 
        unsigned int cancelButtonWantsLetterpress : 1; 
    }  _searchBarFlags;
    unsigned int  _searchBarStyle;
    UISearchBarTextField * _searchField;
    int  _selectedScope;
    UIImageView * _separator;
    UIImageView * _shadowView;
    UIColor * _statusBarTintColor;
    UITapGestureRecognizer * _tapToActivateGestureRecognizer;
    UITextInputTraits * _textInputTraits;
}

@property (nonatomic) BOOL _forceCenteredPlaceholderLayout;
@property (nonatomic, readonly, retain) UIButton *_leftButton;
@property (setter=_setScopeBarPosition:, nonatomic) unsigned int _scopeBarPosition;
@property (setter=_setSearchController:, nonatomic) UISearchController *_searchController;
@property (setter=_setStatusBarTintColor:, nonatomic, retain) UIColor *_statusBarTintColor;
@property (setter=_setTransplanting:, nonatomic) BOOL _transplanting;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) int autocorrectionType;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, readonly) int barPosition;
@property (nonatomic) int barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (nonatomic) <UISearchBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) BOOL forceEnableDictation;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned int insertionPointWidth;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) int returnKeyType;
@property (nonatomic, retain) UIImage *scopeBarBackgroundImage;
@property (nonatomic, copy) NSArray *scopeButtonTitles;
@property (nonatomic) unsigned int searchBarStyle;
@property (getter=_searchBarTextField, nonatomic, readonly) UISearchBarTextField *searchBarTextField;
@property (nonatomic) struct UIOffset { float x1; float x2; } searchFieldBackgroundPositionAdjustment;
@property (getter=isSearchResultsButtonSelected, nonatomic) BOOL searchResultsButtonSelected;
@property (nonatomic) struct UIOffset { float x1; float x2; } searchTextPositionAdjustment;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (nonatomic) int selectedScopeButtonIndex;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL showsBookmarkButton;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsScopeBar;
@property (nonatomic) BOOL showsSearchResultsButton;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) BOOL translucent;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;

- (void).cxx_destruct;
- (void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3;
- (void)_allowCursorToAppear:(BOOL)arg1;
- (id)_alternateTitle;
- (id)_animatedAppearanceBarButtonItem;
- (void)_applySearchBarStyle;
- (float)_availableBoundsWidth;
- (float)_availableBoundsWidthForSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)_backdropStyle;
- (float)_barHeightForBarMetrics:(int)arg1;
- (int)_barMetricsForOrientation:(int)arg1;
- (int)_barPosition;
- (id)_cancelBarButtonItem;
- (void)_commonInit;
- (BOOL)_containedInNavigationPalette;
- (BOOL)_containsScopeBar;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_currentSeparatorImage;
- (float)_defaultHeight;
- (id)_defaultPromptString;
- (float)_defaultWidth;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_displayNavBarCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChange:(BOOL)arg1;
- (BOOL)_forceCenteredPlaceholderLayout;
- (id)_glyphAndTextColor:(BOOL)arg1;
- (void)_identifyBarContainer;
- (id)_imageForSearchBarIcon:(int)arg1 state:(unsigned int)arg2;
- (id)_imageForSearchBarIcon:(int)arg1 state:(unsigned int)arg2 customImage:(BOOL*)arg3;
- (BOOL)_isAtTop;
- (float)_landscapeScopeBarWidth;
- (float)_landscapeSearchFieldWidth;
- (void)_layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg1;
- (id)_leftButton;
- (id)_makeShadowView;
- (id)_navigationBarForShadow;
- (id)_navigationItem;
- (BOOL)_ownsInputAccessoryView;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_removeMarginsIfNecessary;
- (id)_scopeBar;
- (id)_scopeBarContainer;
- (float)_scopeBarHeight;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_scopeBarInsets;
- (BOOL)_scopeBarIsVisible;
- (unsigned int)_scopeBarPosition;
- (void)_scopeChanged:(id)arg1;
- (id)_searchBarTextField;
- (id)_searchController;
- (float)_searchFieldHeight;
- (BOOL)_searchFieldWidthShouldBeFlexible;
- (id)_separatorImage;
- (void)_setBackdropStyle:(unsigned int)arg1;
- (void)_setBackgroundLayoutNeedsUpdate:(BOOL)arg1;
- (void)_setBarPosition:(int)arg1;
- (void)_setBarTintColor:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)_setCancelButtonWantsLetterpress;
- (void)_setMaskActive:(BOOL)arg1;
- (void)_setMaskBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setScopeBarHidden:(BOOL)arg1;
- (void)_setScopeBarPosition:(unsigned int)arg1;
- (void)_setSearchController:(id)arg1;
- (void)_setSeparatorImage:(id)arg1;
- (void)_setShadowVisibleIfNecessary:(BOOL)arg1;
- (void)_setShowsCancelButton:(BOOL)arg1;
- (void)_setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2;
- (void)_setShowsSeparator:(BOOL)arg1;
- (void)_setStatusBarTintColor:(id)arg1;
- (void)_setTransplanting:(BOOL)arg1;
- (void)_setUpScopeBar;
- (void)_setupLeftButton;
- (BOOL)_shouldCombineLandscapeBars;
- (BOOL)_shouldCombineLandscapeBarsForOrientation:(int)arg1;
- (BOOL)_shouldDisplayShadow;
- (BOOL)_shouldUseNavigationBarHeight;
- (id)_statusBarTintColor;
- (id)_textColor;
- (BOOL)_transplanting;
- (void)_updateInsetsForTableView:(id)arg1;
- (void)_updateNeedForBackdrop;
- (void)_updatePlaceholderColor;
- (void)_updateRightView;
- (void)_updateScopeBarBackground;
- (id)_viewForChildViews;
- (BOOL)_wouldCombineLandscapeBarsForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)backgroundImage;
- (id)backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2;
- (int)barPosition;
- (int)barStyle;
- (id)barTintColor;
- (void)bringSubviewToFront:(id)arg1;
- (BOOL)canBecomeFocused;
- (id)cancelButton;
- (BOOL)centerPlaceholder;
- (BOOL)combinesLandscapeBars;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (BOOL)drawsBackground;
- (BOOL)drawsBackgroundInPalette;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageForSearchBarIcon:(int)arg1 state:(unsigned int)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputAssistantItem;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isSearchResultsButtonSelected;
- (BOOL)isTranslucent;
- (void)layoutSubviews;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)placeholder;
- (struct UIOffset { float x1; float x2; })positionAdjustmentForSearchBarIcon:(int)arg1;
- (id)preferredFocusedView;
- (id)prompt;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)scopeBarBackgroundImage;
- (id)scopeBarButtonBackgroundImageForState:(unsigned int)arg1;
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2;
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned int)arg1;
- (id)scopeButtonTitles;
- (unsigned int)searchBarStyle;
- (id)searchField;
- (id)searchFieldBackgroundImageForState:(unsigned int)arg1;
- (struct UIOffset { float x1; float x2; })searchFieldBackgroundPositionAdjustment;
- (int)searchFieldLeftViewMode;
- (struct UIOffset { float x1; float x2; })searchTextPositionAdjustment;
- (int)selectedScopeButtonIndex;
- (void)sendSubviewToBack:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)setBarStyle:(int)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCenterPlaceholder:(BOOL)arg1;
- (void)setCombinesLandscapeBars:(BOOL)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setDrawsBackgroundInPalette:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 forSearchBarIcon:(int)arg2 state:(unsigned int)arg3;
- (void)setInputAccessoryView:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forSearchBarIcon:(int)arg2;
- (void)setPrompt:(id)arg1;
- (void)setScopeBarBackgroundImage:(id)arg1;
- (void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3;
- (void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setScopeButtonTitles:(id)arg1;
- (void)setSearchBarStyle:(unsigned int)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)setSearchFieldLeftViewMode:(int)arg1;
- (void)setSearchResultsButtonSelected:(BOOL)arg1;
- (void)setSearchTextPositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)setSelectedScopeButtonIndex:(int)arg1;
- (void)setShowsBookmarkButton:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsScopeBar:(BOOL)arg1;
- (void)setShowsSearchResultsButton:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setUsesEmbeddedAppearance:(BOOL)arg1;
- (void)set_forceCenteredPlaceholderLayout:(BOOL)arg1;
- (BOOL)showsBookmarkButton;
- (BOOL)showsCancelButton;
- (BOOL)showsScopeBar;
- (BOOL)showsSearchResultsButton;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)takeTraitsFrom:(id)arg1;
- (void)tappedSearchBar:(id)arg1;
- (id)text;
- (id)textInputTraits;
- (BOOL)usesEmbeddedAppearance;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

// UISearchBar (UIKitAccessibilityInterfaceBuilderSupport)

- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

// UISearchBar (UISearchBarStatic)

- (id)_backgroundView;
- (void)_bookmarkButtonPressed;
- (void)_cancelButtonPressed;
- (BOOL)_consideredInBarWithSuperview:(id)arg1;
- (void)_destroyCancelButton;
- (BOOL)_disableAutomaticKeyboardUI;
- (BOOL)_isEnabled;
- (BOOL)_isInBar;
- (void)_resultsListButtonPressed;
- (id)_scopeBarBackgroundView;
- (id)_scopeBarContainerView;
- (void)_searchFieldBeginEditing;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldEndEditing;
- (void)_searchFieldReturnPressed;
- (void)_setAutoDisableCancelButton:(BOOL)arg1;
- (void)_setCancelButtonText:(id)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setScopeBarSegmentsEnabled:(BOOL)arg1;
- (void)_setupCancelButton;
- (void)_setupCancelButtonWithAppearance:(id)arg1;
- (void)_setupPromptLabel;
- (void)_setupSearchField;
- (BOOL)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1;
- (void)_updateBackgroundToBackdropStyle:(int)arg1;
- (void)_updateMagnifyingGlassView;
- (void)_updateOpacity;
- (void)_updateSearchFieldArt;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)pretendsIsInBar;
- (void)reloadInputViews;
- (BOOL)resignFirstResponder;
- (void)setPretendsIsInBar:(BOOL)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;

// UISearchBar (_UIKitLayoutSpacing)

- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;

@end
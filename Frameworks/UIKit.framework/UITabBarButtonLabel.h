/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UITabBarItemAppearanceStorage;

@interface UITabBarButtonLabel : UILabel {
    Class _appearanceGuideClass;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    double _boundsWidth;
    UIColor *_unselectedTintColor;
    bool_isHighlighted;
    bool_isSelected;
}

@property(setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property(getter=_unselectedTintColor,setter=_setUnselectedTintColor:,retain) UIColor * unselectedTintColor;

+ (double)_fontPointSizeForIdiom:(long long)arg1;

- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (Class)_appearanceGuideClass;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_containingTabBarButton;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (id)_fontForIdiom:(long long)arg1;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setUnselectedTintColor:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_shouldCeilSizeToViewScale;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (id)_unselectedTintColor;
- (void)_updateForFontChangeWithIdiom:(long long)arg1;
- (void)dealloc;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)sizeToFitBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)tintColorDidChange;
- (void)updateTextColorsForState;

@end
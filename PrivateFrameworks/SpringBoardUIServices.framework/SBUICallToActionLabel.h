/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUICallToActionLabel : UIView <CAAnimationDelegate> {
    NSMutableArray * _animationCompletionBlocks;
    NSTimer * _animationTimer;
    BOOL  _disablesGradientFadeInAnimation;
    CAGradientLayer * _gradientLayer;
    SBUILegibilityLabel * _label;
    _UILegibilitySettings * _legibilitySettings;
    unsigned int  _state;
    NSString * _text;
}

@property (nonatomic, retain) NSMutableArray *animationCompletionBlocks;
@property (nonatomic, retain) NSTimer *animationTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAGradientLayer *gradientLayer;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SBUILegibilityLabel *label;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_actuallyRunGradientAnimation;
- (void)_addAnimationCompletionBlockIfNecessary:(id /* block */)arg1;
- (void)_createGradientLayer;
- (void)_createLabel;
- (void)_executePostAnimationCompletionBlocks;
- (void)_fadeInImmediately:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_invalidateGradientAnimationTimer;
- (void)_preferredTextSizeChanged:(id)arg1;
- (void)_resetGradientAndLabelBefore:(BOOL)arg1;
- (void)_runFadeAnimationForFadingOut:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_runGradientAnimation:(BOOL)arg1;
- (void)_timerTriggered;
- (void)_updateLabelTextWithLanguage:(id)arg1;
- (id)animationCompletionBlocks;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationTimer;
- (float)baselineOffset;
- (void)cancelFadeInTimerIfNecessary;
- (id)description;
- (void)fadeIn;
- (void)fadeInImmediately:(BOOL)arg1;
- (void)fadeOut;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setAnimationCompletionBlocks:(id)arg1;
- (void)setAnimationTimer:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 forLanguage:(id)arg2 animated:(BOOL)arg3;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (unsigned int)state;
- (id)text;

@end

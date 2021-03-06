/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingViewNavigationTransition : PUNavigationTransition <PUTilingViewControllerTransition> {
    PUTilingViewTransitionHelper * __tilingViewTransitionHelper;
}

@property (nonatomic, readonly) PUTilingViewTransitionHelper *_tilingViewTransitionHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasStarted;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (getter=isTransitionPaused, nonatomic, readonly) BOOL transitionPaused;

- (void).cxx_destruct;
- (void)_animateTransitionWithOperation:(int)arg1;
- (id)_tilingViewTransitionHelper;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (BOOL)hasStarted;
- (id)init;
- (BOOL)isInteractive;
- (BOOL)isTransitionPaused;
- (void)pauseTransition;
- (void)pauseTransitionWithOptions:(unsigned int)arg1;
- (void)resumeTransition:(BOOL)arg1;
- (void)updatePausedTransitionWithProgress:(float)arg1 interactionProgress:(float)arg2;

@end

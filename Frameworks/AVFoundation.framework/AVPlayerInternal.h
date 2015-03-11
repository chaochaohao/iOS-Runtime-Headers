/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVAudioSessionMediaPlayerOnly, AVPixelBufferAttributeMediator, AVPlayerItem, AVPropertyStorage, AVWeakKeyValueObserverProxy, AVWeakReference, NSArray, NSDictionary, NSError, NSHashTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface AVPlayerInternal : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    AVWeakKeyValueObserverProxy *KVOProxy;
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
    NSHashTable *avPlayerLayers;
    boolallowsOutOfBandTextTrackRendering;
    boolautoSwitchStreamVariants;
    boolhadAssociatedOnscreenPlayerLayerWhenSuspended;
    boolhostApplicationInForeground;
    booliapdExtendedModeIsActive;
    boollogPerformanceData;
    boolneedsToCreateFigPlayer;
    boolpreparesItemsForPlaybackAsynchronously;
    boolreevaluateBackgroundPlayback;
    } cachedDisplaySize;
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;
    NSMutableSet *closedCaptionLayers;
    AVPlayerItem *currentItem;
    NSArray *displaysUsedForPlayback;
    NSError *error;
    NSArray *expectedAssetTypes;
    NSString *externalPlaybackVideoGravity;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    struct OpaqueCMClock { } *figMasterClock;
    struct OpaqueFigPlaybackItem { } *figPlaybackItemToIdentifyNextCurrentItem;
    struct OpaqueFigPlayer { } *figPlayer;
    NSMutableSet *items;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVPlayerItem *lastItem;
    NSObject<OS_dispatch_queue> *layersQ;
    int nextPrerollIDToGenerate;
    NSMutableDictionary *pendingFigPlayerProperties;
    int pendingPrerollID;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    id prerollCompletionHandler;
    struct OpaqueFigSimpleMutex { } *prerollIDMutex;
    AVPropertyStorage *propertyStorage;
    struct OpaqueCMTimebase { } *proxyTimebase;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    long long status;
    NSMutableSet *subtitleLayers;
    NSDictionary *vibrationPattern;
    struct __CFDictionary { } *videoLayers;
    AVWeakReference *weakReference;
}

@end
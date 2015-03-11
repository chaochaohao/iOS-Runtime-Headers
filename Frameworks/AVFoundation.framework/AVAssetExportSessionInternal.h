/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVAsset, AVAssetTrack, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVVideoComposition, AVWeakReference, NSArray, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSURL;

@interface AVAssetExportSessionInternal : NSObject {
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    NSString *actualOutputFileType;
    AVAsset *asset;
    AVAudioMix *audioMix;
    NSString *audioTimePitchAlgorithm;
    boolcanUseFastFrameRateConversion;
    booloptimizeForNetworkUse;
    booloutputFileCreatedByRemaker;
    booluseMultiPass;
    boolwaitingForFastFrameRateResponse;
    NSObject<OS_dispatch_semaphore> *canUseFastFrameRateConversionSemaphore;
    NSArray *compatibleFileTypes;
    long long compatibleFileTypesDispatchOncePredicate;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSURL *directoryForTemporaryFiles;
    NSError *error;
    void *figVideoCompositor;
    AVAssetTrack *firstVideoTrack;
    id handler;
    long long maxFileSize;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    } minVideoFrameDuration;
    NSString *outputFileType;
    NSURL *outputURL;
    NSString *preset16x9;
    NSString *preset;
    float progress;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    struct OpaqueFigRemaker { } *remaker;
    NSObject<OS_dispatch_queue> *remakerNotificationSerializationQueue;
    long long status;
    } timeRange;
    AVVideoComposition *videoComposition;
    NSString *videoFrameRateConversionAlgorithm;
    AVWeakReference *weakReference;
}

@end
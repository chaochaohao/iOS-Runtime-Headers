/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureSession, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface AVCaptureOutputInternal : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    boolphysicallyMirrorsVideo;
    int changeSeed;
    NSMutableArray *connections;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    } metadataTransform;
    double rollAdjustment;
    AVCaptureSession *session;
    NSString *sinkID;
}

- (void)dealloc;
- (id)init;

@end
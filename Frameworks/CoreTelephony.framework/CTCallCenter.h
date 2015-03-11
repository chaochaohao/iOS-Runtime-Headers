/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSSet;

@interface CTCallCenter : NSObject {
    id _callEventHandler;
    NSSet *_currentCalls;
    void *_server;
}

@property(copy) id callEventHandler;
@property(retain) NSSet * currentCalls;

- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1;
- (bool)calculateCallStateChanges:(id)arg1;
- (id)callEventHandler;
- (void)cleanUpServerConnection;
- (id)currentCalls;
- (void)dealloc;
- (id)description;
- (bool)getCurrentCallSetFromServer:(id)arg1;
- (void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (id)init;
- (void)setCallEventHandler:(id)arg1;
- (void)setCurrentCalls:(id)arg1;
- (bool)setUpServerConnection;

@end
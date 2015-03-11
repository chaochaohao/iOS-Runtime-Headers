/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface LSObserverTimer : NSObject {
    SEL _appObserverSelector;
    NSMutableSet *_applications;
    NSDate *_lastFiredDate;
    double _latency;
    double _minInterval;
    NSString *_name;
    NSMutableSet *_plugins;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
}

@property SEL appObserverSelector;
@property(retain) NSMutableSet * applications;
@property(retain) NSDate * lastFiredDate;
@property(readonly) double latency;
@property(readonly) double minInterval;
@property(retain) NSString * name;
@property(retain) NSMutableSet * plugins;
@property(retain) NSTimer * timer;

- (void)addApplication:(id)arg1;
- (SEL)appObserverSelector;
- (id)applications;
- (void)clear;
- (void)dealloc;
- (id)description;
- (id)initWithAppSelector:(SEL)arg1 queue:(id)arg2;
- (id)lastFiredDate;
- (double)latency;
- (double)minInterval;
- (id)name;
- (void)notifyObservers:(id)arg1 withApplication:(id)arg2;
- (id)plugins;
- (void)removeApplication:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)setAppObserverSelector:(SEL)arg1;
- (void)setApplications:(id)arg1;
- (void)setLastFiredDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlugins:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)stopTimer;
- (id)timer;

@end
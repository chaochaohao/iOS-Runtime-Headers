/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary;

@interface IMParentalControls : NSObject {
    NSMutableDictionary *_parentalControls;
    bool_active;
    bool_disableAV;
    bool_forceChatLogging;
    bool_shouldPostNotifications;
}

@property(readonly) bool _disableAV;
@property(readonly) bool _forceChatLogging;
@property(retain,readonly) NSMutableDictionary * _parentalControls;
@property(readonly) bool active;
@property(readonly) bool disableAV;
@property(readonly) bool forceChatLogging;
@property bool shouldPostNotifications;

+ (id)objectForKey:(id)arg1;
+ (id)standardControls;

- (bool)_disableAV;
- (bool)_forceChatLogging;
- (void)_managedPrefsNotification:(id)arg1;
- (id)_parentalControls;
- (id)_serviceWithName:(id)arg1;
- (void)_updateParentalSettings;
- (bool)accountHasWhitelist:(id)arg1;
- (bool)accountIsEnabled:(id)arg1;
- (bool)active;
- (void)dealloc;
- (bool)disableAV;
- (bool)disableAccount:(id)arg1;
- (bool)disableService:(id)arg1;
- (bool)forceChatLogging;
- (bool)forceWhitelistForAccount:(id)arg1;
- (bool)forceWhitelistForService:(id)arg1;
- (id)init;
- (bool)okToConnectAccount:(id)arg1;
- (void)setShouldPostNotifications:(bool)arg1;
- (bool)shouldPostNotifications;
- (id)whitelistForAccount:(id)arg1;
- (id)whitelistForService:(id)arg1;

@end
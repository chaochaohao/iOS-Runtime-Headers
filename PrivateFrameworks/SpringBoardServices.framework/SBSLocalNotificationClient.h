/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSLocalNotificationClient : NSObject {
}

+ (void)_scheduleLocalNotifications:(id)arg1 cancel:(bool)arg2 replace:(bool)arg3 optionalBundleIdentifier:(id)arg4 waitUntilDone:(bool)arg5;
+ (void)_scheduleLocalNotifications:(id)arg1 cancel:(bool)arg2 replace:(bool)arg3 optionalBundleIdentifier:(id)arg4;
+ (void)cancelAllLocalNotifications;
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(bool)arg3;
+ (void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)cancelLocalNotification:(id)arg1;
+ (unsigned int)currentAllowedNotificationTypesForBundleID:(id)arg1;
+ (id)currentUserNotificationSettings;
+ (id)currentUserNotificationSettingsForBundleID:(id)arg1;
+ (id)getPendingNotification;
+ (void)migrateUserNotificationSettingsForBundleIdentifierPushSettingsPairs:(id)arg1;
+ (void)registerUserNotificationSettings:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)registerUserNotificationSettings:(id)arg1;
+ (void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(bool)arg3;
+ (void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)scheduleLocalNotification:(id)arg1;
+ (id)scheduledLocalNotifications;
+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)setScheduledLocalNotifications:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)setScheduledLocalNotifications:(id)arg1;

@end
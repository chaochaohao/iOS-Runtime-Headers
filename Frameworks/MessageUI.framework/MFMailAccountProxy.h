/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSDictionary, NSString;

@interface MFMailAccountProxy : NSObject {
    NSDictionary *_properties;
}

@property(readonly) NSArray * emailAddresses;
@property(readonly) NSString * firstEmailAddress;
@property(readonly) NSArray * fromEmailAddresses;
@property(readonly) NSArray * fromEmailAddressesIncludingDisabled;
@property(readonly) NSString * fullUserName;
@property(readonly) bool isDefaultDeliveryAccount;
@property(readonly) id mailAccount;
@property(readonly) bool restrictsRepliesAndForwards;
@property(readonly) bool supportsSoftBankCodePoints;
@property(readonly) bool supportsThreadNotifications;
@property(readonly) NSString * uniqueID;
@property(readonly) NSString * username;

- (id)_emailAddressesAndAliases;
- (id)_initWithProperties:(id)arg1;
- (bool)_isActive;
- (bool)_isRestricted;
- (void)dealloc;
- (id)emailAddresses;
- (id)firstEmailAddress;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (id)fullUserName;
- (bool)isDefaultDeliveryAccount;
- (id)mailAccount;
- (bool)restrictsRepliesAndForwards;
- (bool)supportsSoftBankCodePoints;
- (bool)supportsThreadNotifications;
- (id)uniqueID;
- (id)username;

@end
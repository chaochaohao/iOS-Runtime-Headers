/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, ABUIPerson, NSArray;

@interface ABAbstractPropertyGroup : NSObject {
    NSArray *_people;
    ABUIPerson *_preinsertedPerson;
    <ABStyleProvider> *_styleProvider;
    bool_hasChanges;
}

@property bool hasChanges;
@property(retain) NSArray * people;
@property(retain) ABUIPerson * preinsertedPerson;
@property(retain) <ABStyleProvider> * styleProvider;

- (bool)canSave;
- (void)dealloc;
- (bool)hasChanges;
- (id)init;
- (id)people;
- (id)preinsertedPerson;
- (int)property;
- (void)reloadFromModel;
- (void)setHasChanges:(bool)arg1;
- (void)setPeople:(id)arg1;
- (void)setPreinsertedPerson:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)updateRecord;

@end
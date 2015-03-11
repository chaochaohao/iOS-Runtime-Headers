/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUScriptTextFieldDelegate;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property long long autocapitalizationType;
@property long long autocorrectionType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property long long keyboardType;
@property(copy) NSString * placeholder;
@property(readonly) Class superclass;
@property(copy) NSString * value;
@property double width;

- (id)_nativeObjectDelegate;
- (void)_sendScriptDidChange;
- (void)_setNativeObjectDelegate:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (void)destroyNativeObject;
- (long long)keyboardType;
- (id)placeholder;
- (bool)resignFirstResponder;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)setupNativeObject;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (id)value;
- (double)width;

@end
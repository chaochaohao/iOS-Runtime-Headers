/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAMailMessage, MFMailboxUid, MFMessage, NSString;

@interface MFDAMessage : MFMailMessage {
    DAMailMessage *_DAMailMessage;
    NSString *_externalConversationID;
    MFMailboxUid *_mailbox;
    MFMessage *_rfc822CreatedMessage;
}

@property(readonly) DAMailMessage * DAMailMessage;

- (id)DAMailMessage;
- (void)dealloc;
- (id)externalConversationID;
- (id)headers;
- (id)headersIfAvailable;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (id)mailbox;
- (id)messageBody;
- (bool)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (unsigned long long)messageFlags;
- (unsigned long long)messageSize;
- (id)remoteID;
- (id)remoteMailboxURL;

@end
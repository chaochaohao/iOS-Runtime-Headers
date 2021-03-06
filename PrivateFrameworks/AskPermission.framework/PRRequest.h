/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

@interface PRRequest : NSObject <NSSecureCoding> {
    NSString * _ask;
    NSString * _clientIdentifier;
    NSDate * _dateAddedToLocalCache;
    NSString * _requestID;
    NSDictionary * _requestInfo;
    unsigned int  _requestStatus;
    BOOL  _requestedOnThisDevice;
    NSNumber * _requesterDSID;
    NSNumber * _responderDSID;
}

@property (copy) NSString *ask;
@property (copy) NSString *clientIdentifier;
@property (copy) NSDate *dateAddedToLocalCache;
@property (copy) NSString *requestID;
@property (copy) NSDictionary *requestInfo;
@property unsigned int requestStatus;
@property BOOL requestedOnThisDevice;
@property (copy) NSNumber *requesterDSID;
@property (copy) NSNumber *responderDSID;
@property (readonly) NSString *statusDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ask;
- (id)cacheRepresentation;
- (id)clientIdentifier;
- (id)dateAddedToLocalCache;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAsk:(id)arg1 requestInfo:(id)arg2;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestID;
- (id)requestInfo;
- (unsigned int)requestStatus;
- (BOOL)requestedOnThisDevice;
- (id)requesterDSID;
- (id)responderDSID;
- (void)setAsk:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDateAddedToLocalCache:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setRequestInfo:(id)arg1;
- (void)setRequestStatus:(unsigned int)arg1;
- (void)setRequestedOnThisDevice:(BOOL)arg1;
- (void)setRequesterDSID:(id)arg1;
- (void)setResponderDSID:(id)arg1;
- (id)statusDescription;

@end

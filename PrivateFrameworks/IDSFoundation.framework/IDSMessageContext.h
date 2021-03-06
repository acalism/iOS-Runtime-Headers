/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSMutableDictionary, NSString;

@interface IDSMessageContext : NSObject {
    id _boostContext;
    NSMutableDictionary *_dict;
}

@property(retain) id boostContext;
@property bool expectsPeerResponse;
@property(copy) NSString * incomingResponseIdentifier;
@property(copy) NSString * outgoingResponseIdentifier;
@property(copy) NSString * storageGuid;
@property bool wantsAppAck;

- (id)boostContext;
- (void)dealloc;
- (bool)expectsPeerResponse;
- (id)incomingResponseIdentifier;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)outgoingResponseIdentifier;
- (void)setBoostContext:(id)arg1;
- (void)setExpectsPeerResponse:(bool)arg1;
- (void)setIncomingResponseIdentifier:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOutgoingResponseIdentifier:(id)arg1;
- (void)setStorageGuid:(id)arg1;
- (void)setWantsAppAck:(bool)arg1;
- (id)storageGuid;
- (bool)wantsAppAck;

@end

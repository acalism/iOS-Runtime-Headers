/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCServerContainer, NSString;

@interface BRCSyncDownOperation : BRCOperation <BRCOperationSubclass> {
    unsigned int _batchSize;
    BRCServerContainer *_serverContainer;
    bool_hasCaughtUp;
    bool_isConsistent;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) bool hasCaughtUp;
@property(readonly) unsigned long long hash;
@property(readonly) bool isConsistent;
@property(readonly) Class superclass;

+ (id)syncDownAckQueue;

- (void).cxx_destruct;
- (id)_fetchRecordChangesOperationWithCompletion:(id)arg1;
- (void)_saveRecordBatchIfNecessaryWithRecords:(id)arg1 deletedStructureRecordIDs:(id)arg2;
- (id)_zoneCreationOperationWithCompletionBlock:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)hasCaughtUp;
- (id)initWithServerContainer:(id)arg1;
- (bool)isConsistent;
- (void)main;
- (void)scheduleFetchQuotaAndSyncDown;
- (bool)shouldRetryForError:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <NSObject><NSCopying>, NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSObject<PLAlbumProtocol>, NSOrderedSet, NSPredicate, NSString, NSURL, PLIndexMapper, PLManagedAsset, UIImage;

@interface PLFilteredAlbum : NSObject <PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache> {
    struct NSObject { Class x1; } *_backingAlbum;
    NSArray *_filterParameters;
    NSMutableIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    NSMutableOrderedSet *_weak_assets;
    bool_backingAlbumSupportsCloudShared;
    bool_backingAlbumSupportsEdits;
    boolisObservingContextChanges;
    int filter;
    NSPredicate *predicate;
}

@property NSMutableOrderedSet * _assets;
@property(readonly) unsigned long long approximateCount;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned long long assetsCount;
@property(retain) NSObject<PLAlbumProtocol> * backingAlbum;
@property unsigned long long batchSize;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) bool canContributeToCloudSharedAlbum;
@property(readonly) bool canShowAvalancheStacks;
@property(readonly) bool canShowComments;
@property(retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords;
@property(retain) NSDate * cloudCreationDate;
@property(retain,readonly) NSDate * cloudFirstRecentBatchDate;
@property(retain) NSString * cloudGUID;
@property(retain) NSDate * cloudLastContributionDate;
@property(retain) NSDate * cloudLastInterestingChangeDate;
@property(retain) NSDictionary * cloudMetadata;
@property(retain) NSNumber * cloudMultipleContributorsEnabled;
@property(retain) NSNumber * cloudMultipleContributorsEnabledLocal;
@property bool cloudNotificationsEnabled;
@property(retain) NSString * cloudOwnerEmail;
@property(retain) NSString * cloudOwnerFirstName;
@property(retain) NSString * cloudOwnerFullName;
@property(retain) NSString * cloudOwnerHashedPersonID;
@property(retain) NSString * cloudOwnerLastName;
@property(retain) NSString * cloudPersonID;
@property(retain) NSNumber * cloudPublicURLEnabled;
@property(retain) NSNumber * cloudPublicURLEnabledLocal;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(readonly) int cloudRelationshipStateValue;
@property(retain) NSDate * cloudSubscriptionDate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSDate * endDate;
@property int filter;
@property(readonly) NSArray * filterParameters;
@property(copy,readonly) NSIndexSet * filteredIndexes;
@property(retain,readonly) NSURL * groupURL;
@property bool hasUnseenContentBoolValue;
@property(readonly) unsigned long long hash;
@property(retain) NSString * importSessionID;
@property(retain,readonly) PLIndexMapper * indexMapper;
@property(retain) NSOrderedSet * invitationRecords;
@property(readonly) bool isCameraAlbum;
@property(readonly) bool isCloudSharedAlbum;
@property(readonly) bool isEmpty;
@property(readonly) bool isFamilyCloudSharedAlbum;
@property(readonly) bool isFolder;
@property(readonly) bool isInTrash;
@property(readonly) bool isLibrary;
@property(readonly) bool isMultipleContributorCloudSharedAlbum;
@property bool isObservingContextChanges;
@property(readonly) bool isOwnedCloudSharedAlbum;
@property(readonly) bool isPanoramasAlbum;
@property(readonly) bool isPendingPhotoStreamAlbum;
@property(readonly) bool isPhotoStreamAlbum;
@property(readonly) bool isRecentlyAddedAlbum;
@property(readonly) bool isStandInAlbum;
@property(readonly) bool isUserLibraryAlbum;
@property(readonly) bool isWallpaperAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(retain,readonly) NSString * localizedSharedWithLabel;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property(copy,readonly) NSString * name;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) unsigned long long photosCount;
@property(retain,readonly) UIImage * posterImage;
@property(retain) NSPredicate * predicate;
@property(retain) NSString * publicURL;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) bool shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(copy,readonly) id sortingComparator;
@property(retain,readonly) NSDate * startDate;
@property(readonly) Class superclass;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(retain,readonly) NSString * title;
@property(retain) NSNumber * unseenAssetsCount;
@property unsigned long long unseenAssetsCountIntegerValue;
@property(retain,readonly) NSMutableOrderedSet * userEditableAssets;
@property(retain,readonly) NSString * uuid;
@property(readonly) unsigned long long videosCount;

+ (id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 intersectFilter:(int)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (id)filteredIndexesInAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject { Class x1; }*)unfilteredAlbum:(struct NSObject { Class x1; }*)arg1;

- (id)_assets;
- (id)_cloudSharedBackingAlbum;
- (void)_commonInitWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (id)_editableBackingAlbum;
- (unsigned long long)approximateCount;
- (id)assets;
- (unsigned long long)assetsCount;
- (struct NSObject { Class x1; }*)backingAlbum;
- (void)backingContextDidChange:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)cachedIndexMapState;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (id)cloudAlbumSubscriberRecords;
- (id)cloudCreationDate;
- (id)cloudFirstRecentBatchDate;
- (id)cloudGUID;
- (id)cloudLastContributionDate;
- (id)cloudLastInterestingChangeDate;
- (id)cloudMetadata;
- (id)cloudMultipleContributorsEnabled;
- (id)cloudMultipleContributorsEnabledLocal;
- (bool)cloudNotificationsEnabled;
- (id)cloudOwnerDisplayNameIncludingEmail:(bool)arg1 allowsEmail:(bool)arg2;
- (id)cloudOwnerEmail;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerHashedPersonID;
- (id)cloudOwnerLastName;
- (id)cloudPersonID;
- (id)cloudPublicURLEnabled;
- (id)cloudPublicURLEnabledLocal;
- (int)cloudRelationshipStateLocalValue;
- (int)cloudRelationshipStateValue;
- (id)cloudSubscriptionDate;
- (unsigned long long)count;
- (unsigned long long)countOfFilteredAssets;
- (id)currentStateForChange;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (id)description;
- (int)filter;
- (id)filterParameters;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)filteredIndexes;
- (void)getFilteredAssets:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)getUnseenStartMarkerIndex:(unsigned long long*)arg1 count:(unsigned long long*)arg2 showsProgress:(bool*)arg3;
- (id)groupURL;
- (bool)hasUnseenContentBoolValue;
- (id)importSessionID;
- (unsigned long long)indexInFilteredAssetsOfObject:(id)arg1;
- (id)indexMapper;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned long long)arg2;
- (id)invitationRecords;
- (bool)isCameraAlbum;
- (bool)isCloudSharedAlbum;
- (bool)isEmpty;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isObservingContextChanges;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isRecentlyAddedAlbum;
- (bool)isStandInAlbum;
- (bool)isUserLibraryAlbum;
- (bool)isWallpaperAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (id)localizedSharedWithLabel;
- (id)localizedTitle;
- (bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (id)mutableAssets;
- (id)name;
- (id)objectInFilteredAssetsAtIndex:(unsigned long long)arg1;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (unsigned long long)photosCount;
- (id)posterImage;
- (id)predicate;
- (id)publicURL;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned long long)arg1;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)secondaryKeyAsset;
- (void)setBackingAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setCloudCreationDate:(id)arg1;
- (void)setCloudGUID:(id)arg1;
- (void)setCloudLastContributionDate:(id)arg1;
- (void)setCloudLastInterestingChangeDate:(id)arg1;
- (void)setCloudMetadata:(id)arg1;
- (void)setCloudMultipleContributorsEnabled:(id)arg1;
- (void)setCloudMultipleContributorsEnabledLocal:(id)arg1;
- (void)setCloudNotificationsEnabled:(bool)arg1;
- (void)setCloudOwnerEmail:(id)arg1;
- (void)setCloudOwnerFirstName:(id)arg1;
- (void)setCloudOwnerFullName:(id)arg1;
- (void)setCloudOwnerHashedPersonID:(id)arg1;
- (void)setCloudOwnerLastName:(id)arg1;
- (void)setCloudPersonID:(id)arg1;
- (void)setCloudPublicURLEnabled:(id)arg1;
- (void)setCloudPublicURLEnabledLocal:(id)arg1;
- (void)setCloudSubscriptionDate:(id)arg1;
- (void)setFilter:(int)arg1;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setInvitationRecords:(id)arg1;
- (void)setIsObservingContextChanges:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPublicURL:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setUnseenAssetsCount:(id)arg1;
- (void)setUnseenAssetsCountIntegerValue:(unsigned long long)arg1;
- (void)set_assets:(id)arg1;
- (bool)shouldDeleteWhenEmpty;
- (bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)unseenAssetsCount;
- (unsigned long long)unseenAssetsCountIntegerValue;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (id)userEditableAssets;
- (id)uuid;
- (unsigned long long)videosCount;

@end

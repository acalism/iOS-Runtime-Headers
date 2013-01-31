/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOUsageCollectionRequest, GEORequester, NSTimer;

@interface GEOUsageManager : NSObject  {
    GEORequester *_requester;
    GEOUsageCollectionRequest *_request;
    NSTimer *_updateTimer;
    BOOL _isAppActive;
}

+ (id)sharedManager;
+ (void)setUsePersistentConnection:(BOOL)arg1;

- (void)dealloc;
- (id)init;
- (void)captureMapsUsageFeedbackCollection:(id)arg1;
- (void)captureTransitAppLaunchFeedbackCollection:(id)arg1;
- (id)_usageURL;
- (void)_sendUsageToServer;
- (void)_scheduleUpdateTimer;
- (BOOL)shouldIgnoreCollectionForCountry;
- (void)_cleanupTimer;
- (void)_cleanupRequester;
- (void)_applicationActivating;
- (void)_applicationDeactivating;
- (void)captureDirectionsFeedbackCollection:(id)arg1;
- (void)_updateTimerFired:(id)arg1;
- (void)captureUsageDataForRequest:(id)arg1 service:(int)arg2;
- (void)captureUsageDataForTiles:(id)arg1;

@end
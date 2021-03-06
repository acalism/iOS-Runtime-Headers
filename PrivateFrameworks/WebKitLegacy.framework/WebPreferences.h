/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class NSString, NSURL;

@interface WebPreferences : NSObject <NSCoding> {
    struct WebPreferencesPrivate { struct RetainPtr<NSMutableDictionary> { void *x_1_1_1; } x1; boolx2; struct RetainPtr<NSString> { void *x_3_1_1; } x3; boolx4; boolx5; unsigned int x6; id x7; } *_private;
}

@property bool allowsAnimatedImageLooping;
@property bool allowsAnimatedImages;
@property bool autosaves;
@property unsigned long long cacheModel;
@property(copy) NSString * cursiveFontFamily;
@property int defaultFixedFontSize;
@property int defaultFontSize;
@property(copy) NSString * defaultTextEncodingName;
@property(copy) NSString * fantasyFontFamily;
@property(copy) NSString * fixedFontFamily;
@property(copy,readonly) NSString * identifier;
@property(getter=isJavaEnabled) bool javaEnabled;
@property bool javaScriptCanOpenWindowsAutomatically;
@property(getter=isJavaScriptEnabled) bool javaScriptEnabled;
@property bool loadsImagesAutomatically;
@property int minimumFontSize;
@property int minimumLogicalFontSize;
@property(getter=arePlugInsEnabled) bool plugInsEnabled;
@property bool privateBrowsingEnabled;
@property(copy) NSString * sansSerifFontFamily;
@property(copy) NSString * serifFontFamily;
@property(copy) NSString * standardFontFamily;
@property bool suppressesIncrementalRendering;
@property bool userStyleSheetEnabled;
@property(retain) NSURL * userStyleSheetLocation;
@property bool usesPageCache;

+ (id)_IBCreatorID;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned long long)arg1;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (unsigned int)_systemCFStringEncoding;
+ (void)initialize;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (id)standardMailWebPreferencesForDisplayStyle:(int)arg1 regenerate:(bool)arg2;
+ (id)standardPreferences;

- (bool)_allowMultiElementImplicitFormSubmission;
- (bool)_allowPasswordEcho;
- (bool)_alwaysRequestGeolocationPermission;
- (bool)_alwaysUseAcceleratedOverflowScroll;
- (bool)_alwaysUseBaselineOfPrimaryFont;
- (double)_backForwardCacheExpirationInterval;
- (bool)_boolValueForKey:(id)arg1;
- (id)_diskImageCacheSavedCacheDirectory;
- (float)_floatValueForKey:(id)arg1;
- (bool)_forceFTPDirectoryListings;
- (id)_ftpDirectoryTemplatePath;
- (int)_integerValueForKey:(id)arg1;
- (int)_interpolationQuality;
- (void)_invalidateCachedPreferences;
- (int)_layoutInterval;
- (id)_localStorageDatabasePath;
- (long long)_longLongValueForKey:(id)arg1;
- (float)_maxParseDuration;
- (float)_minimumZoomFontSize;
- (int)_objectCacheSize;
- (int)_pageCacheSize;
- (float)_passwordEchoDuration;
- (void)_postCacheModelChangedNotification;
- (void)_postPreferencesChangedAPINotification;
- (void)_postPreferencesChangedNotification;
- (void)_setAllowMultiElementImplicitFormSubmission:(bool)arg1;
- (void)_setAlwaysRequestGeolocationPermission:(bool)arg1;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(bool)arg1;
- (void)_setAlwaysUseBaselineOfPrimaryFont:(bool)arg1;
- (void)_setBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)_setDiskImageCacheSavedCacheDirectory:(id)arg1;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)_setForceFTPDirectoryListings:(bool)arg1;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (void)_setInterpolationQuality:(int)arg1;
- (void)_setLayoutInterval:(int)arg1;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (void)_setMaxParseDuration:(float)arg1;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (void)_setObjectCacheSize:(int)arg1;
- (void)_setPageCacheSize:(int)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)_setStandalone:(bool)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (void)_setTelephoneNumberParsingEnabled:(bool)arg1;
- (void)_setUnsignedIntValue:(unsigned int)arg1 forKey:(id)arg2;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_setUseSiteSpecificSpoofing:(bool)arg1;
- (bool)_standalone;
- (id)_stringValueForKey:(id)arg1;
- (void)_synchronizeWebStoragePolicyWithCookiePolicy;
- (bool)_telephoneNumberParsingEnabled;
- (unsigned int)_unsignedIntValueForKey:(id)arg1;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (void)_updatePrivateBrowsingStateTo:(bool)arg1;
- (bool)_useSiteSpecificSpoofing;
- (id)_valueForKey:(id)arg1;
- (bool)accelerated2dCanvasEnabled;
- (bool)acceleratedCompositingEnabled;
- (bool)acceleratedDrawingEnabled;
- (bool)allowFileAccessFromFileURLs;
- (bool)allowUniversalAccessFromFileURLs;
- (bool)allowsAnimatedImageLooping;
- (bool)allowsAnimatedImages;
- (long long)applicationCacheDefaultOriginQuota;
- (long long)applicationCacheTotalQuota;
- (bool)applicationChromeModeEnabled;
- (bool)arePlugInsEnabled;
- (bool)asynchronousSpellCheckingEnabled;
- (unsigned int)audioSessionCategoryOverride;
- (bool)authorAndUserStylesEnabled;
- (bool)automaticallyDetectsCacheModel;
- (bool)autosaves;
- (bool)avKitEnabled;
- (bool)backspaceKeyNavigationEnabled;
- (unsigned long long)cacheModel;
- (bool)canvasUsesAcceleratedDrawing;
- (bool)cssCompositingEnabled;
- (bool)cssRegionsEnabled;
- (id)cursiveFontFamily;
- (bool)databasesEnabled;
- (void)dealloc;
- (int)defaultFixedFontSize;
- (int)defaultFontSize;
- (id)defaultTextEncodingName;
- (bool)developerExtrasEnabled;
- (bool)diagnosticLoggingEnabled;
- (void)didRemoveFromWebView;
- (bool)diskImageCacheEnabled;
- (unsigned int)diskImageCacheMaximumCacheSize;
- (unsigned int)diskImageCacheMinimumImageSize;
- (int)editableLinkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (bool)experimentalNotificationsEnabled;
- (id)fantasyFontFamily;
- (id)fixedFontFamily;
- (bool)forceSoftwareWebGLRendering;
- (bool)fullScreenEnabled;
- (bool)gamepadsEnabled;
- (bool)hiddenPageCSSAnimationSuspensionEnabled;
- (bool)hiddenPageDOMTimerThrottlingEnabled;
- (bool)hyperlinkAuditingEnabled;
- (id)identifier;
- (bool)imageControlsEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(bool)arg2;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAVFoundationEnabled;
- (bool)isDNSPrefetchingEnabled;
- (bool)isDOMPasteAllowed;
- (bool)isFrameFlatteningEnabled;
- (bool)isHixie76WebSocketProtocolEnabled;
- (bool)isInheritURIQueryComponentEnabled;
- (bool)isJavaEnabled;
- (bool)isJavaScriptEnabled;
- (bool)isQTKitEnabled;
- (bool)isSpatialNavigationEnabled;
- (bool)isVideoPluginProxyEnabled;
- (bool)isWebSecurityEnabled;
- (bool)isXSSAuditorEnabled;
- (bool)javaScriptCanAccessClipboard;
- (bool)javaScriptCanOpenWindowsAutomatically;
- (bool)javaScriptExperimentsEnabled;
- (bool)loadsImagesAutomatically;
- (bool)loadsSiteIconsIgnoringImageLoadingPreference;
- (bool)localFileContentSniffingEnabled;
- (bool)localStorageEnabled;
- (bool)lowPowerVideoAudioBufferSizeEnabled;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)mediaPlaybackAllowsInline;
- (bool)mediaPlaybackRequiresUserGesture;
- (bool)mediaSourceEnabled;
- (int)minimumFontSize;
- (int)minimumLogicalFontSize;
- (bool)mockScrollbarsEnabled;
- (bool)multithreadedWebGLEnabled;
- (bool)networkDataUsageTrackingEnabled;
- (id)networkInterfaceName;
- (bool)notificationsEnabled;
- (bool)offlineWebApplicationCacheEnabled;
- (bool)pageCacheSupportsPlugins;
- (bool)paginateDuringLayoutEnabled;
- (id)pictographFontFamily;
- (bool)plugInSnapshottingEnabled;
- (bool)privateBrowsingEnabled;
- (bool)requestAnimationFrameEnabled;
- (id)sansSerifFontFamily;
- (bool)screenFontSubstitutionEnabled;
- (id)serifFontFamily;
- (void)setAVFoundationEnabled:(bool)arg1;
- (void)setAVKitEnabled:(bool)arg1;
- (void)setAccelerated2dCanvasEnabled:(bool)arg1;
- (void)setAcceleratedCompositingEnabled:(bool)arg1;
- (void)setAcceleratedDrawingEnabled:(bool)arg1;
- (void)setAllowFileAccessFromFileURLs:(bool)arg1;
- (void)setAllowUniversalAccessFromFileURLs:(bool)arg1;
- (void)setAllowsAnimatedImageLooping:(bool)arg1;
- (void)setAllowsAnimatedImages:(bool)arg1;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (void)setApplicationChromeModeEnabled:(bool)arg1;
- (void)setAsynchronousSpellCheckingEnabled:(bool)arg1;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (void)setAuthorAndUserStylesEnabled:(bool)arg1;
- (void)setAutomaticallyDetectsCacheModel:(bool)arg1;
- (void)setAutosaves:(bool)arg1;
- (void)setBackspaceKeyNavigationEnabled:(bool)arg1;
- (void)setCSSCompositingEnabled:(bool)arg1;
- (void)setCSSRegionsEnabled:(bool)arg1;
- (void)setCacheModel:(unsigned long long)arg1;
- (void)setCanvasUsesAcceleratedDrawing:(bool)arg1;
- (void)setCursiveFontFamily:(id)arg1;
- (void)setDNSPrefetchingEnabled:(bool)arg1;
- (void)setDOMPasteAllowed:(bool)arg1;
- (void)setDatabasesEnabled:(bool)arg1;
- (void)setDefaultFixedFontSize:(int)arg1;
- (void)setDefaultFontSize:(int)arg1;
- (void)setDefaultTextEncodingName:(id)arg1;
- (void)setDeveloperExtrasEnabled:(bool)arg1;
- (void)setDiagnosticLoggingEnabled:(bool)arg1;
- (void)setDiskImageCacheEnabled:(bool)arg1;
- (void)setDiskImageCacheMaximumCacheSize:(unsigned int)arg1;
- (void)setDiskImageCacheMinimumImageSize:(unsigned int)arg1;
- (void)setEditableLinkBehavior:(int)arg1;
- (void)setEnableInheritURIQueryComponent:(bool)arg1;
- (void)setExperimentalNotificationsEnabled:(bool)arg1;
- (void)setFantasyFontFamily:(id)arg1;
- (void)setFixedFontFamily:(id)arg1;
- (void)setForceSoftwareWebGLRendering:(bool)arg1;
- (void)setFrameFlatteningEnabled:(bool)arg1;
- (void)setFullScreenEnabled:(bool)arg1;
- (void)setGamepadsEnabled:(bool)arg1;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(bool)arg1;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(bool)arg1;
- (void)setHixie76WebSocketProtocolEnabled:(bool)arg1;
- (void)setHyperlinkAuditingEnabled:(bool)arg1;
- (void)setImageControlsEnabled:(bool)arg1;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setJavaEnabled:(bool)arg1;
- (void)setJavaScriptCanAccessClipboard:(bool)arg1;
- (void)setJavaScriptCanOpenWindowsAutomatically:(bool)arg1;
- (void)setJavaScriptEnabled:(bool)arg1;
- (void)setJavaScriptExperimentsEnabled:(bool)arg1;
- (void)setLoadsImagesAutomatically:(bool)arg1;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(bool)arg1;
- (void)setLocalFileContentSniffingEnabled:(bool)arg1;
- (void)setLocalStorageEnabled:(bool)arg1;
- (void)setLowPowerVideoAudioBufferSizeEnabled:(bool)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setMediaPlaybackAllowsInline:(bool)arg1;
- (void)setMediaPlaybackRequiresUserGesture:(bool)arg1;
- (void)setMediaSourceEnabled:(bool)arg1;
- (void)setMinimumFontSize:(int)arg1;
- (void)setMinimumLogicalFontSize:(int)arg1;
- (void)setMockScrollbarsEnabled:(bool)arg1;
- (void)setMultithreadedWebGLEnabled:(bool)arg1;
- (void)setNetworkDataUsageTrackingEnabled:(bool)arg1;
- (void)setNetworkInterfaceName:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setOfflineWebApplicationCacheEnabled:(bool)arg1;
- (void)setPageCacheSupportsPlugins:(bool)arg1;
- (void)setPaginateDuringLayoutEnabled:(bool)arg1;
- (void)setPictographFontFamily:(id)arg1;
- (void)setPlugInSnapshottingEnabled:(bool)arg1;
- (void)setPlugInsEnabled:(bool)arg1;
- (void)setPrivateBrowsingEnabled:(bool)arg1;
- (void)setQTKitEnabled:(bool)arg1;
- (void)setRequestAnimationFrameEnabled:(bool)arg1;
- (void)setSansSerifFontFamily:(id)arg1;
- (void)setScreenFontSubstitutionEnabled:(bool)arg1;
- (void)setSerifFontFamily:(id)arg1;
- (void)setShouldConvertPositionStyleOnCopy:(bool)arg1;
- (void)setShouldDisplayCaptions:(bool)arg1;
- (void)setShouldDisplaySubtitles:(bool)arg1;
- (void)setShouldDisplayTextDescriptions:(bool)arg1;
- (void)setShouldRespectImageOrientation:(bool)arg1;
- (void)setShowDebugBorders:(bool)arg1;
- (void)setShowRepaintCounter:(bool)arg1;
- (void)setShrinksStandaloneImagesToFit:(bool)arg1;
- (void)setSpatialNavigationEnabled:(bool)arg1;
- (void)setStandardFontFamily:(id)arg1;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setStorageTrackerEnabled:(bool)arg1;
- (void)setSubpixelCSSOMElementMetricsEnabled:(bool)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (void)setUseLegacyTextAlignPositionedElementBehavior:(bool)arg1;
- (void)setUsePreHTML5ParserQuirks:(bool)arg1;
- (void)setUserStyleSheetEnabled:(bool)arg1;
- (void)setUserStyleSheetLocation:(id)arg1;
- (void)setUsesEncodingDetector:(bool)arg1;
- (void)setUsesPageCache:(bool)arg1;
- (void)setVideoPluginProxyEnabled:(bool)arg1;
- (void)setWantsBalancedSetDefersLoadingBehavior:(bool)arg1;
- (void)setWebArchiveDebugModeEnabled:(bool)arg1;
- (void)setWebAudioEnabled:(bool)arg1;
- (void)setWebGLEnabled:(bool)arg1;
- (void)setWebSecurityEnabled:(bool)arg1;
- (void)setXSSAuditorEnabled:(bool)arg1;
- (void)setZoomsTextOnly:(bool)arg1;
- (bool)shouldConvertPositionStyleOnCopy;
- (bool)shouldDisplayCaptions;
- (bool)shouldDisplaySubtitles;
- (bool)shouldDisplayTextDescriptions;
- (bool)shouldRespectImageOrientation;
- (bool)showDebugBorders;
- (bool)showRepaintCounter;
- (bool)shrinksStandaloneImagesToFit;
- (id)standardFontFamily;
- (int)storageBlockingPolicy;
- (bool)storageTrackerEnabled;
- (bool)subpixelCSSOMElementMetricsEnabled;
- (bool)suppressesIncrementalRendering;
- (int)textDirectionSubmenuInclusionBehavior;
- (bool)useLegacyTextAlignPositionedElementBehavior;
- (bool)usePreHTML5ParserQuirks;
- (bool)userStyleSheetEnabled;
- (id)userStyleSheetLocation;
- (bool)usesEncodingDetector;
- (bool)usesPageCache;
- (bool)wantsBalancedSetDefersLoadingBehavior;
- (bool)webArchiveDebugModeEnabled;
- (bool)webAudioEnabled;
- (bool)webGLEnabled;
- (void)willAddToWebView;
- (bool)zoomsTextOnly;

@end

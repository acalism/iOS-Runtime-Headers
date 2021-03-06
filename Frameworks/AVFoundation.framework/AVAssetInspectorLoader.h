/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSArray, NSString, NSURL;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
}

@property(readonly) NSURL * URL;
@property(getter=_classForTrackInspectors,readonly) Class classForTrackInspectors;
@property(getter=isCompatibleWithSavedPhotosAlbum,readonly) bool compatibleWithSavedPhotosAlbum;
@property(getter=isComposable,readonly) bool composable;
@property(readonly) unsigned long long downloadToken;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(getter=isExportable,readonly) bool exportable;
@property(getter=_figAsset,readonly) struct OpaqueFigAsset { }* figAsset;
@property(readonly) NSArray * figChapterGroupInfo;
@property(readonly) NSArray * figChapters;
@property(getter=_formatReader,readonly) struct OpaqueFigFormatReader { }* formatReader;
@property(readonly) bool hasProtectedContent;
@property(readonly) NSString * lyrics;
@property(getter=isPlayable,readonly) bool playable;
@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;
@property(getter=isReadable,readonly) bool readable;
@property(readonly) NSURL * resolvedURL;
@property(getter=_isStreaming,readonly) bool streaming;
@property(getter=_weakReference,readonly) AVWeakReference * weakReference;

+ (void)initialize;

- (id)URL;
- (Class)_classForTrackInspectors;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (bool)_isStreaming;
- (id)_mapFigErrorCodeToNSError:(int)arg1;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_serverHasDied;
- (id)_weakReference;
- (id)assetInspector;
- (void)cancelLoading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)downloadToken;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (bool)hasProtectedContent;
- (id)init;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (id)lyrics;
- (id)resolvedURL;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;

@end

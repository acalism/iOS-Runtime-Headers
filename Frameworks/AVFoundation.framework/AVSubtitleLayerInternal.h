/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVSubtitleLayerInternal : NSObject {
    boolcurrentSubtitleSampleIsForced;
    boolhasPlayerToObserve;
    boolisObservingPlayer;
    boolisOverscanSubtitleSupportEnabled;
    boolisPresentationLayer;
    boolnonForcedSubtitleDisplayEnabled;
    boolshouldObservePlayer;
    NSDictionary *currentSubtitleSample;
    id delegate;
    AVPlayer *player;
    struct OpaqueFigSubtitleRenderer { } *renderer;
    NSObject<OS_dispatch_queue> *serialQueue;
}

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class NSBundle, NSMutableDictionary, NSString, UIColor, UIFont, UIImage, UIScreen;

@interface TKStyleProvider : NSObject <TKVibrationRecorderStyleProvider> {
    NSBundle *_bundle;
    NSMutableDictionary *_cachedStyleProperties;
    UIScreen *_screen;
}

@property(setter=_setBundle:,retain) NSBundle * _bundle;
@property(setter=_setCachedStyleProperties:,retain) NSMutableDictionary * _cachedStyleProperties;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) double defaultAnimationDuration;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) UIScreen * screen;
@property(readonly) Class superclass;
@property(readonly) UIColor * vibrationRecorderBarsBackgroundColor;
@property(readonly) double vibrationRecorderControlsToolbarAdditionalHeight;
@property(readonly) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property(readonly) double vibrationRecorderControlsToolbarVerticalOffset;
@property(readonly) UIColor * vibrationRecorderInstructionsLabelBackgroundColor;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } vibrationRecorderInstructionsLabelEdgeInsets;
@property(readonly) double vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property(readonly) UIFont * vibrationRecorderInstructionsLabelFont;
@property(readonly) struct UIOffset { double x1; double x2; } vibrationRecorderInstructionsLabelPositionOffset;
@property(readonly) UIColor * vibrationRecorderInstructionsLabelTextColor;
@property(readonly) double vibrationRecorderProgressToolbarAdditionalHeight;
@property(readonly) double vibrationRecorderProgressToolbarVerticalOffset;
@property(readonly) double vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property(readonly) double vibrationRecorderProgressViewDotHorizontalInset;
@property(readonly) double vibrationRecorderProgressViewHeight;
@property(readonly) double vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property(readonly) UIImage * vibrationRecorderProgressViewResizableDotImage;
@property(readonly) UIColor * vibrationRecorderProgressViewTrackColor;
@property(readonly) double vibrationRecorderRippleFinalRadius;
@property(readonly) double vibrationRecorderRippleFingerMovingSpeed;
@property(readonly) double vibrationRecorderRippleFingerStillSpeed;
@property(readonly) double vibrationRecorderRippleInitialRadius;
@property(readonly) double vibrationRecorderRippleRingLineWidth;
@property(readonly) UIColor * vibrationRecorderRippleViewBackgroundColor;

- (id)_bundle;
- (id)_cachedImageForPropertyWithSelector:(SEL)arg1 size:(struct CGSize { double x1; double x2; })arg2 opaque:(bool)arg3 withDrawingBlock:(id)arg4;
- (id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2;
- (id)_cachedResizableImageForPropertyWithSelector:(SEL)arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 size:(struct CGSize { double x1; double x2; })arg3 opaque:(bool)arg4 withDrawingBlock:(id)arg5;
- (id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1;
- (id)_cachedStyleProperties;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_setBundle:(id)arg1;
- (void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2;
- (void)_setCachedStyleProperties:(id)arg1;
- (void)dealloc;
- (double)defaultAnimationDuration;
- (id)init;
- (id)screen;
- (void)setScreen:(id)arg1;
- (id)vibrationRecorderBarsBackgroundColor;
- (double)vibrationRecorderControlsToolbarAdditionalHeight;
- (double)vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
- (double)vibrationRecorderControlsToolbarVerticalOffset;
- (id)vibrationRecorderInstructionsLabelBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })vibrationRecorderInstructionsLabelEdgeInsets;
- (double)vibrationRecorderInstructionsLabelFadeAnimationDuration;
- (id)vibrationRecorderInstructionsLabelFont;
- (struct UIOffset { double x1; double x2; })vibrationRecorderInstructionsLabelPositionOffset;
- (id)vibrationRecorderInstructionsLabelTextColor;
- (double)vibrationRecorderProgressToolbarAdditionalHeight;
- (double)vibrationRecorderProgressToolbarVerticalOffset;
- (double)vibrationRecorderProgressViewAccessibilityAdditionalHeight;
- (double)vibrationRecorderProgressViewDotHorizontalInset;
- (double)vibrationRecorderProgressViewHeight;
- (double)vibrationRecorderProgressViewHorizontalOffsetFromEdge;
- (id)vibrationRecorderProgressViewResizableDotImage;
- (id)vibrationRecorderProgressViewTrackColor;
- (double)vibrationRecorderRippleFinalRadius;
- (double)vibrationRecorderRippleFingerMovingSpeed;
- (double)vibrationRecorderRippleFingerStillSpeed;
- (double)vibrationRecorderRippleInitialRadius;
- (double)vibrationRecorderRippleRingLineWidth;
- (id)vibrationRecorderRippleViewBackgroundColor;

@end

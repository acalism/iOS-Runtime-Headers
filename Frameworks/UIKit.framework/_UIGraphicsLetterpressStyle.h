/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    UIColor *bottomGradientColor;
    UIColor *embossHighlightColor;
    UIColor *embossShadowColor;
    double embossSize;
    double innerOpacity;
    int innerShadowBlendMode;
    double innerShadowBlur;
    UIColor *innerShadowColor;
    } innerShadowOffset;
    int outerShadowBlendMode;
    double outerShadowBlur;
    UIColor *outerShadowColor;
    } outerShadowOffset;
    UIColor *topGradientColor;
}

@property(retain) UIColor * bottomGradientColor;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property(retain) UIColor * embossHighlightColor;
@property(retain) UIColor * embossShadowColor;
@property double embossSize;
@property double innerOpacity;
@property int innerShadowBlendMode;
@property double innerShadowBlur;
@property(retain) UIColor * innerShadowColor;
@property struct CGPoint { double x1; double x2; } innerShadowOffset;
@property int outerShadowBlendMode;
@property double outerShadowBlur;
@property(retain) UIColor * outerShadowColor;
@property struct CGPoint { double x1; double x2; } outerShadowOffset;
@property(retain) UIColor * topGradientColor;

+ (id)defaultLetterpressStyle;
+ (id)old2xLetterpressStyle;

- (id)bottomGradientColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)embossHighlightColor;
- (id)embossShadowColor;
- (double)embossSize;
- (double)innerOpacity;
- (int)innerShadowBlendMode;
- (double)innerShadowBlur;
- (id)innerShadowColor;
- (struct CGPoint { double x1; double x2; })innerShadowOffset;
- (bool)isEqual:(id)arg1;
- (int)outerShadowBlendMode;
- (double)outerShadowBlur;
- (id)outerShadowColor;
- (struct CGPoint { double x1; double x2; })outerShadowOffset;
- (void)setBottomGradientColor:(id)arg1;
- (void)setEmbossHighlightColor:(id)arg1;
- (void)setEmbossShadowColor:(id)arg1;
- (void)setEmbossSize:(double)arg1;
- (void)setInnerOpacity:(double)arg1;
- (void)setInnerShadowBlendMode:(int)arg1;
- (void)setInnerShadowBlur:(double)arg1;
- (void)setInnerShadowColor:(id)arg1;
- (void)setInnerShadowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOuterShadowBlendMode:(int)arg1;
- (void)setOuterShadowBlur:(double)arg1;
- (void)setOuterShadowColor:(id)arg1;
- (void)setOuterShadowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopGradientColor:(id)arg1;
- (id)topGradientColor;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKMutableTexture : SKTexture {
    struct CGSize { 
        double width; 
        double height; 
    struct __IOSurface { } *_ioSurface;
    void *_pixelData;
    unsigned long long _pixelDataLength;
    int _pixelFormat;
    } _textureSize;
    bool_ioSurfaceBacked;
}

+ (id)mutableTextureWithSize:(struct CGSize { double x1; double x2; })arg1;

- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 ioSurfaceBacked:(bool)arg2 pixelFormat:(int)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(int)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)load;
- (void)modifyPixelDataWithBlock:(id)arg1;

@end

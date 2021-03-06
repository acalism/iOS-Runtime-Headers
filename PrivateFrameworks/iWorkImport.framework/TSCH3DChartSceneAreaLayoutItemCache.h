/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {
    struct TSCH3DChartSceneAreaLayoutItemCacheValues { 
        struct tvec4<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
            union { 
                float z; 
                float b; 
                float p; 
            } ; 
            union { 
                float w; 
                float a; 
                float q; 
            } ; 
        } infoChartScale; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } containingViewport; 
        struct tvec2<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
        } chartBodyLayoutOffsetInChartAreaLayoutSpace; 
        struct CGSize { 
            double width; 
            double height; 
        } layoutSize; 
        struct CGSize { 
            double width; 
            double height; 
        } requestLayoutSize; 
        struct CGSize { 
            double width; 
            double height; 
        } chartBodyLayoutSize; 
        struct CGSize { 
            double width; 
            double height; 
        } requestChartBodyLayoutSize; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } modelSize; 
        struct { 
            boolforceOmitLegend; 
            boolforceOmitTitle; 
            boolforceOmitAxisTitle; 
            boolenable3DTightBounds; 
            boolenable3DScaledDepthBounds; 
            boolenable3DSageMaxDepthRatio; 
            unsigned long long max3DLimitingSeries; 
        } layoutSettings; 
        boolforcedValid; 
    TSCH3DVector *_containingViewportVector;
    } mValues;
}

@property(readonly) struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } chartBodyLayoutOffsetInChartAreaLayoutSpace;
@property(readonly) struct CGSize { double x1; double x2; } chartBodyLayoutSize;
@property(readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } containingViewport;
@property(readonly) TSCH3DVector * containingViewportVector;
@property(readonly) bool forcedValid;
@property(readonly) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } infoChartScale;
@property(readonly) struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; } layoutSettings;
@property(readonly) struct CGSize { double x1; double x2; } layoutSize;
@property(readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } modelSize;
@property(readonly) struct CGSize { double x1; double x2; } requestChartBodyLayoutSize;
@property(readonly) struct CGSize { double x1; double x2; } requestLayoutSize;

+ (id)cacheWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { boolx_9_1_1; boolx_9_1_2; boolx_9_1_3; boolx_9_1_4; boolx_9_1_5; boolx_9_1_6; unsigned long long x_9_1_7; } x9; boolx10; }*)arg1;
+ (id)cacheWithInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 containingViewport:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 chartBodyLayoutOffsetInChartAreaLayoutSpace:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg3 layoutSize:(struct CGSize { double x1; double x2; })arg4 requestLayoutSize:(struct CGSize { double x1; double x2; })arg5 chartBodyLayoutSize:(struct CGSize { double x1; double x2; })arg6 requestChartBodyLayoutSize:(struct CGSize { double x1; double x2; })arg7 layoutSettings:(struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })arg8;

- (id).cxx_construct;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })chartBodyLayoutOffsetInChartAreaLayoutSpace;
- (struct CGSize { double x1; double x2; })chartBodyLayoutSize;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })containingViewport;
- (id)containingViewportVector;
- (bool)forcedValid;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })infoChartScale;
- (id)init;
- (id)initWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { boolx_9_1_1; boolx_9_1_2; boolx_9_1_3; boolx_9_1_4; boolx_9_1_5; boolx_9_1_6; unsigned long long x_9_1_7; } x9; boolx10; }*)arg1;
- (struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })layoutSettings;
- (struct CGSize { double x1; double x2; })layoutSize;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })modelSize;
- (void)printDebug;
- (struct CGSize { double x1; double x2; })requestChartBodyLayoutSize;
- (struct CGSize { double x1; double x2; })requestLayoutSize;
- (const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { boolx_9_1_1; boolx_9_1_2; boolx_9_1_3; boolx_9_1_4; boolx_9_1_5; boolx_9_1_6; unsigned long long x_9_1_7; } x9; boolx10; }*)values;

@end

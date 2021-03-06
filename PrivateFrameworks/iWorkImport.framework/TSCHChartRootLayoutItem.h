/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, TSCHChartAbstractAreaLayoutItem, TSCHChartInfo, TSCHChartModel, TSCHLegendAreaLayoutItem;

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem <TSCHUnretainedParent> {
    struct { 
        boolforceOmitLegend; 
        boolforceOmitTitle; 
        boolforceOmitAxisTitle; 
        boolenable3DTightBounds; 
        boolenable3DScaledDepthBounds; 
        boolenable3DSageMaxDepthRatio; 
        unsigned long long max3DLimitingSeries; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGSize { 
        double width; 
        double height; 
    boolmInResize;
    TSCHChartAbstractAreaLayoutItem *mChartArea;
    TSCHChartInfo *mChartInfo;
    } mChartInnerFrame;
    TSCHChartModel *mChartModel;
    } mLayoutSettings;
    TSCHLegendAreaLayoutItem *mLegend;
    } mLegendInnerFrame;
    NSDictionary *mSeriesIndexedPieWedgeExplosions;
    } mStartingSize;
}

@property(readonly) TSCHChartAbstractAreaLayoutItem * chartAreaLayoutItem;
@property unsigned long long dataSetIndex;
@property(readonly) TSCHLegendAreaLayoutItem * legendAreaLayoutItem;
@property(copy) NSDictionary * seriesIndexedPieWedgeExplosions;

- (void)beginResizeWithStartingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)buildSubTree;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (id)chartAreaLayoutItem;
- (id)chartInfo;
- (void)clearAll;
- (void)clearParent;
- (unsigned long long)dataSetIndex;
- (void)dealloc;
- (void)endResizeOperation;
- (id)initWithChartInfo:(id)arg1;
- (id)initWithParent:(id)arg1;
- (void)invalidateTransientModel;
- (bool)isInResize;
- (struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })layoutSettings;
- (id)legendAreaLayoutItem;
- (id)model;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (id)renderersWithRep:(id)arg1;
- (id)root;
- (id)seriesIndexedPieWedgeExplosions;
- (void)setChartBodySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setChartInnerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 legendInnerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setDataSetIndex:(unsigned long long)arg1;
- (void)setLayoutSettings:(struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })arg1;
- (void)setLegendSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (struct CGSize { double x1; double x2; })startingSize;
- (void)updateLayoutOffset;
- (void)updateLayoutSize;
- (void)updatePieWedgeExplosionsFromModel;
- (void)updateSizeDuringResizeTo:(struct CGSize { double x1; double x2; })arg1;

@end

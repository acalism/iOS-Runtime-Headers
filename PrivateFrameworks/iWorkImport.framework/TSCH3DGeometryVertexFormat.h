/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray;

@interface TSCH3DGeometryVertexFormat : NSObject {
    boolmCompiled;
    NSMutableArray *mElements;
    unsigned long long mStride;
    unsigned long long mTotalComponents;
    long long mVertexCount;
}

@property(readonly) bool compiled;
@property(readonly) NSArray * elements;
@property(readonly) unsigned long long stride;
@property(readonly) unsigned long long totalComponents;

- (void)compile;
- (bool)compiled;
- (void)dealloc;
- (id)description;
- (id)elementForName:(id)arg1 bufferInfo:(const struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg2;
- (id)elements;
- (void)enumerateElementsUsingBlock:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)stride;
- (unsigned long long)totalComponents;

@end

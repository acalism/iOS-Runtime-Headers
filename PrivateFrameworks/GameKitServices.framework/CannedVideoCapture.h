/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <CannedVideoFrameFeeder>;

@interface CannedVideoCapture : NSObject <VideoCaptureProtocol> {
    <CannedVideoFrameFeeder> *_frameFeeder;
    struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; int (*x3)(); void *x4; unsigned int x5; int x6; struct OpaqueCMClock {} *x7; boolx8; boolx9; struct OpaqueFigThread {} *x10; boolx11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; struct _opaque_pthread_cond_t { long long x_13_1_1; BOOL x_13_1_2[40]; } x13; struct OpaqueFigThread {} *x14; boolx15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; struct _opaque_pthread_cond_t { long long x_17_1_1; BOOL x_17_1_2[40]; } x17; struct _opaque_pthread_mutex_t { long long x_18_1_1; BOOL x_18_1_2[56]; } x18; struct Frame {} *x19; int x20; } *_pimpl;
}

@property(retain) <CannedVideoFrameFeeder> * frameFeeder;
@property(readonly) struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; int (*x3)(); void *x4; unsigned int x5; int x6; struct OpaqueCMClock {} *x7; boolx8; boolx9; struct OpaqueFigThread {} *x10; boolx11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; struct _opaque_pthread_cond_t { long long x_13_1_1; BOOL x_13_1_2[40]; } x13; struct OpaqueFigThread {} *x14; boolx15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; struct _opaque_pthread_cond_t { long long x_17_1_1; BOOL x_17_1_2[40]; } x17; struct _opaque_pthread_mutex_t { long long x_18_1_1; BOOL x_18_1_2[56]; } x18; struct Frame {} *x19; int x20; }* pimpl;

+ (int)cannedVideoTypeForPath:(id)arg1;
+ (int)createPixelBufferPool:(struct __CVPixelBufferPool {}**)arg1 withWidth:(int)arg2 height:(int)arg3;

- (struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; int (*x3)(); void *x4; unsigned int x5; int x6; struct OpaqueCMClock {} *x7; boolx8; boolx9; struct OpaqueFigThread {} *x10; boolx11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; struct _opaque_pthread_cond_t { long long x_13_1_1; BOOL x_13_1_2[40]; } x13; struct OpaqueFigThread {} *x14; boolx15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; struct _opaque_pthread_cond_t { long long x_17_1_1; BOOL x_17_1_2[40]; } x17; struct _opaque_pthread_mutex_t { long long x_18_1_1; BOOL x_18_1_2[56]; } x18; struct Frame {} *x19; int x20; }*)pimpl;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (void)dealloc;
- (id)frameFeeder;
- (int)getCamera:(unsigned int*)arg1;
- (int)getCameraType:(int*)arg1;
- (id)initWithOptions:(void*)arg1 callback:(int (*)())arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 cameraType:(int)arg6 folder:(id)arg7 withError:(int*)arg8;
- (bool)isPreviewRunning;
- (int)setCamera:(unsigned int)arg1;
- (int)setCameraType:(int)arg1;
- (void)setFrameFeeder:(id)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)startThreads;
- (int)stop:(bool)arg1;
- (void)stopThreads;

@end

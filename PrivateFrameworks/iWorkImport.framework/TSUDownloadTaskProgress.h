/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDownloadTaskProgress : NSObject {
    long long _totalBytesDownloaded;
    long long _totalBytesExpectedToBeDownloaded;
    bool_isActive;
}

@property bool isActive;
@property long long totalBytesDownloaded;
@property long long totalBytesExpectedToBeDownloaded;

- (id)description;
- (bool)isActive;
- (void)setIsActive:(bool)arg1;
- (void)setTotalBytesDownloaded:(long long)arg1;
- (void)setTotalBytesExpectedToBeDownloaded:(long long)arg1;
- (long long)totalBytesDownloaded;
- (long long)totalBytesExpectedToBeDownloaded;

@end

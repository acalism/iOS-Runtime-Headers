/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL, TSDDrawableInfo;

@interface TSDDrawableHyperlinkCommand : TSKCommand <TSDPropagatableCommand> {
    TSDDrawableInfo *mInfo;
    NSURL *mNewHyperlinkURL;
    NSURL *mOldHyperlinkURL;
}

@property(readonly) TSDDrawableInfo * info;
@property(readonly) NSURL * newHyperlinkURL;

- (void)commit;
- (void)dealloc;
- (id)info;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithInfo:(id)arg1 newHyperlinkURL:(id)arg2;
- (BOOL)modifiesAnyObjectPassingTest:(id)arg1;
- (id)newHyperlinkURL;
- (void)p_do;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)undo;

@end
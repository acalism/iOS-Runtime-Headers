/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString;

@interface TSCEFunctionSpec : NSObject {
    boolmIsOperator;
    NSArray *mArguments;
    int mFunctionIndex;
    NSString *mFunctionName;
    short mMaxArguments;
    short mMinArguments;
    NSArray *mRepeatingArguments;
    short mRepeatingGroupSize;
    int mShipVersion;
}

@property(readonly) int functionIndex;

+ (id)functionSpecForFunctionIndex:(int)arg1;
+ (id)specDictionary;
+ (id)specWithFunctionName:(id)arg1 minArgs:(id)arg2 maxArgs:(id)arg3 repeatingGroupSize:(id)arg4 isOperator:(int)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;

- (id)argumentSpecForIndex:(unsigned long long)arg1;
- (id)arguments;
- (void)dealloc;
- (id)description;
- (id)displayString;
- (int)functionIndex;
- (id)functionName;
- (id)initWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(int)arg4 isOperator:(bool)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;
- (bool)isOperator;
- (id)localizedFunctionName;
- (id)localizedToolTipString;
- (short)maxArguments;
- (short)minArguments;
- (id)nativeSyntaxStringForArgument:(int)arg1;
- (unsigned long long)numArguments;
- (void)p_ValidateArguments;
- (int)versionShippedIn;

@end

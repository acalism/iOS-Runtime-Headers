/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSPowerAssertionManager : NSObject {
    int _UIBusyCount;
    unsigned int _assertionID;
    int _busyCount;
    bool_isAssertingPowerAssertion;
    bool_isBusy;
}

@property int UIBusyCount;
@property unsigned int assertionID;
@property int busyCount;
@property bool isAssertingPowerAssertion;
@property bool isBusy;

+ (id)sharedManager;

- (int)UIBusyCount;
- (void)_assertPowerAssertion;
- (void)_deassertPowerAssertion;
- (void)_recomputePowerAssertion;
- (unsigned int)assertionID;
- (int)busyCount;
- (bool)isAssertingPowerAssertion;
- (bool)isBusy;
- (void)releaseBusy;
- (void)releaseUIBusy;
- (void)retainBusy;
- (void)retainUIBusy;
- (void)setAssertionID:(unsigned int)arg1;
- (void)setBusyCount:(int)arg1;
- (void)setIsAssertingPowerAssertion:(bool)arg1;
- (void)setIsBusy:(bool)arg1;
- (void)setUIBusyCount:(int)arg1;
- (void)toggleAssertion;

@end

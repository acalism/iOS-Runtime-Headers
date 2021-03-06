/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSDate, NSString, SKUIImageViewElement;

@interface SKUICounterViewElement : SKUIViewElement {
    double _changeRatePerSecond;
    long long _counterType;
    long long _dateFormatType;
    NSDate *_endDate;
    NSString *_numberFormat;
    long long _startValue;
    NSDate *_startValueDate;
    long long _stopValue;
}

@property(readonly) SKUIImageViewElement * backgroundImageElement;
@property(readonly) double changeRatePerSecond;
@property(readonly) long long counterType;
@property(readonly) long long dateFormatType;
@property(readonly) NSDate * endDate;
@property(readonly) NSString * numberFormat;
@property(readonly) long long startValue;
@property(readonly) NSDate * startValueDate;
@property(readonly) long long stopValue;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)backgroundImageElement;
- (double)changeRatePerSecond;
- (long long)counterType;
- (long long)currentNumberValue;
- (long long)dateFormatType;
- (id)endDate;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)numberFormat;
- (long long)startValue;
- (id)startValueDate;
- (long long)stopValue;

@end

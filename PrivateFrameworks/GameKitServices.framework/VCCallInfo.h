/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSData, NSDictionary, NSMutableDictionary, NSString, SDPMini;

@interface VCCallInfo : NSObject {
    unsigned int auNumber;
    boolis4x;
    boolisIOS;
    boolisVideoQualityDegraded;
    boolsupportsDynamicMaxBitrate;
    boolsupportsSKEOptimization;
    boolsupportsSpecialAACBundle;
    booluseNewPLCalc;
    boolusesInitialFECImplementation;
    boolvideoIsPaused;
    unsigned int callID;
    unsigned int cellBandwith;
    int cellTech;
    NSData *connectionData;
    double firstDegradedMeasure;
    double lastBadVideoQualityTime;
    double lastGoodVideoQualityTime;
    double lastVideoQualityDegradedSwitchTime;
    unsigned int maxBandwidth;
    NSString *participantID;
    NSData *relayConnectionData;
    NSDictionary *relayRequest;
    NSMutableDictionary *relayRequestResponse;
    NSDictionary *relayUpdate;
    SDPMini *sdp;
    NSString *sdpString;
    unsigned char u8Version;
    double videoDegradedThreshold;
    unsigned int visibleRectCropping;
}

@property unsigned int auNumber;
@property unsigned int callID;
@property unsigned int cellBandwith;
@property int cellTech;
@property(retain) NSData * connectionData;
@property(readonly) bool isIOS;
@property bool isVideoQualityDegraded;
@property unsigned int maxBandwidth;
@property(copy) NSString * participantID;
@property(retain) NSData * relayConnectionData;
@property(retain) NSDictionary * relayRequest;
@property(retain) NSMutableDictionary * relayRequestResponse;
@property(retain) NSDictionary * relayUpdate;
@property(readonly) bool requiresImplicitFeatureString;
@property(retain) SDPMini * sdp;
@property(retain) NSString * sdpString;
@property(readonly) bool supportsDynamicContentsRectWithAspectPreservation;
@property bool supportsDynamicMaxBitrate;
@property bool supportsSKEOptimization;
@property(readonly) bool supportsSpecialAACBundle;
@property unsigned char u8Version;
@property(readonly) bool useNewPLCalc;
@property(readonly) bool usesInitialFECImplementation;
@property bool videoIsPaused;
@property unsigned int visibleRectCropping;

- (unsigned int)auNumber;
- (struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })audioVersionInfo:(bool)arg1;
- (unsigned int)callID;
- (unsigned int)cellBandwith;
- (int)cellTech;
- (id)connectionData;
- (void)dealloc;
- (id)init;
- (bool)isIOS;
- (bool)isVideoQualityDegraded;
- (unsigned int)maxBandwidth;
- (id)participantID;
- (id)relayConnectionData;
- (id)relayRequest;
- (id)relayRequestResponse;
- (id)relayUpdate;
- (bool)requiresImplicitFeatureString;
- (void)resetLastGoodVideoQualityTime:(double)arg1;
- (id)sdp;
- (id)sdpString;
- (void)setAuNumber:(unsigned int)arg1;
- (void)setCallID:(unsigned int)arg1;
- (void)setCellBandwith:(unsigned int)arg1;
- (void)setCellTech:(int)arg1;
- (void)setConnectionData:(id)arg1;
- (void)setIsVideoQualityDegraded:(bool)arg1;
- (void)setMaxBandwidth:(unsigned int)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setRelayConnectionData:(id)arg1;
- (void)setRelayRequest:(id)arg1;
- (void)setRelayRequestResponse:(id)arg1;
- (void)setRelayUpdate:(id)arg1;
- (void)setSdp:(id)arg1;
- (void)setSdpString:(id)arg1;
- (void)setSupportsDynamicMaxBitrate:(bool)arg1;
- (void)setSupportsSKEOptimization:(bool)arg1;
- (void)setU8Version:(unsigned char)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setVideoIsPaused:(bool)arg1;
- (void)setVisibleRectCropping:(unsigned int)arg1;
- (bool)supportSDPCompression;
- (bool)supportsDynamicContentsRectWithAspectPreservation;
- (bool)supportsDynamicMaxBitrate;
- (bool)supportsSKEOptimization;
- (bool)supportsSpecialAACBundle;
- (unsigned char)u8Version;
- (bool)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 packetLossRate:(float)arg3 time:(double)arg4;
- (bool)useNewPLCalc;
- (bool)usesInitialFECImplementation;
- (bool)videoIsPaused;
- (unsigned int)visibleRectCropping;

@end

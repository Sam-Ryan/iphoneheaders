/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber, SASRecordingInfo;

@interface SASUpdateAudioInfo : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * audioSource; 
@property (assign,nonatomic) int codec; 
@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSString * deviceModel; 
@property (nonatomic,copy) NSString * dspStatus; 
@property (nonatomic,copy) NSString * headsetAddress; 
@property (nonatomic,copy) NSString * headsetId; 
@property (nonatomic,copy) NSString * headsetName; 
@property (nonatomic,copy) NSNumber * noiseReductionLevel; 
@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,retain) SASRecordingInfo * recordingInfo; 
@property (assign,nonatomic) BOOL triggeredTwoShotBorealis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)updateAudioInfo;
+(id)updateAudioInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)audioSource;
-(void)setAudioSource:(NSString *)arg1 ;
-(int)codec;
-(void)setCodec:(int)arg1 ;
-(NSString *)dspStatus;
-(void)setDspStatus:(NSString *)arg1 ;
-(NSString *)headsetAddress;
-(void)setHeadsetAddress:(NSString *)arg1 ;
-(NSString *)headsetId;
-(void)setHeadsetId:(NSString *)arg1 ;
-(NSString *)headsetName;
-(void)setHeadsetName:(NSString *)arg1 ;
-(NSNumber *)noiseReductionLevel;
-(void)setNoiseReductionLevel:(NSNumber *)arg1 ;
-(SASRecordingInfo *)recordingInfo;
-(void)setRecordingInfo:(SASRecordingInfo *)arg1 ;
-(BOOL)triggeredTwoShotBorealis;
-(void)setTriggeredTwoShotBorealis:(BOOL)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceModel:(NSString *)arg1 ;
-(id)encodedClassName;
@end


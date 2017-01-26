/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class NSMutableArray, PLXPCListenerOperatorComposition, PLEntry, NSString, NSDictionary, NSDate;

@interface PLAudioAgent : PLAgent {

	BOOL _speakerIsPlayingAudio;
	NSMutableArray* _nsOutputNotifications;
	NSMutableArray* _nsRoutingNotifications;
	PLXPCListenerOperatorComposition* _audioAppXPCListener;
	PLXPCListenerOperatorComposition* _screenMirroringXPCListener;
	PLXPCListenerOperatorComposition* _speakerAmpXPCListener;
	PLEntry* _entryRoutingOld;
	NSString* _audioHardware;
	NSDictionary* _audioPowerModel;
	NSDate* _lastModeledEntryDate;

}

@property (readonly) NSMutableArray * nsOutputNotifications;                                   //@synthesize nsOutputNotifications=_nsOutputNotifications - In the implementation block
@property (readonly) NSMutableArray * nsRoutingNotifications;                                  //@synthesize nsRoutingNotifications=_nsRoutingNotifications - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * audioAppXPCListener;                     //@synthesize audioAppXPCListener=_audioAppXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * screenMirroringXPCListener;              //@synthesize screenMirroringXPCListener=_screenMirroringXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * speakerAmpXPCListener;                   //@synthesize speakerAmpXPCListener=_speakerAmpXPCListener - In the implementation block
@property (retain) PLEntry * entryRoutingOld;                                                  //@synthesize entryRoutingOld=_entryRoutingOld - In the implementation block
@property (assign) BOOL speakerIsPlayingAudio;                                                 //@synthesize speakerIsPlayingAudio=_speakerIsPlayingAudio - In the implementation block
@property (readonly) NSString * audioHardware;                                                 //@synthesize audioHardware=_audioHardware - In the implementation block
@property (readonly) NSDictionary * audioPowerModel;                                           //@synthesize audioPowerModel=_audioPowerModel - In the implementation block
@property (retain) NSDate * lastModeledEntryDate;                                              //@synthesize lastModeledEntryDate=_lastModeledEntryDate - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionAudioApp;
+(id)entryEventPointDefinitionSpeakerAmp;
+(id)entryEventForwardDefinitionOutput;
+(id)entryEventForwardDefinitionRouting;
-(id)init;
-(BOOL)active;
-(void)log;
-(BOOL)muted;
-(void)initOperatorDependancies;
-(void)setupAVSystemController;
-(NSMutableArray *)nsOutputNotifications;
-(void)logEventForwardOutput;
-(void)logEventForwardRouting;
-(id)returnVolumeOrOutPutCategory:(int)arg1 ;
-(NSString *)audioHardware;
-(void)logEventPointAudioApp:(id)arg1 ;
-(void)setAudioAppXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setScreenMirroringXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointSpeakerAmp:(id)arg1 ;
-(void)setSpeakerAmpXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)createAudioAccountingEvents:(id)arg1 ;
-(void)createAirPlayAccountingEvents:(id)arg1 ;
-(void)createCarPlayAccountingEvents:(id)arg1 ;
-(void)createBluetoothAccountingEvents:(id)arg1 ;
-(void)modelAudioPowerSpeaker:(id)arg1 ;
-(void)modelAudioPower;
-(int)nowPlayingAppPID;
-(id)activeRoute;
-(id)outputCategory;
-(BOOL)headphonesConnected;
-(BOOL)headsetHasInput;
-(PLEntry *)entryRoutingOld;
-(void)setEntryRoutingOld:(PLEntry *)arg1 ;
-(double)audioPowerForRoute:(id)arg1 forVolume:(double)arg2 ;
-(BOOL)shouldModelAsK94orJ2;
-(double)modelAudioPowerWithVolume:(double)arg1 ;
-(void)setSpeakerIsPlayingAudio:(BOOL)arg1 ;
-(NSDictionary *)audioPowerModel;
-(BOOL)speakerIsPlayingAudio;
-(double)convertSpeakerProtectionModeledPowerToTotalSpeakerPower:(double)arg1 ;
-(NSMutableArray *)nsRoutingNotifications;
-(PLXPCListenerOperatorComposition *)audioAppXPCListener;
-(PLXPCListenerOperatorComposition *)screenMirroringXPCListener;
-(PLXPCListenerOperatorComposition *)speakerAmpXPCListener;
-(NSDate *)lastModeledEntryDate;
-(void)setLastModeledEntryDate:(NSDate *)arg1 ;
-(id)volume;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreRC/CoreRC-Structs.h>
@interface CECMessage : NSObject {

	CECFrame _frame;

}

@property (nonatomic,readonly) unsigned char initiator; 
@property (nonatomic,readonly) unsigned char destination; 
@property (nonatomic,readonly) int messageType; 
@property (nonatomic,readonly) unsigned char length; 
@property (nonatomic,readonly) CECFrame frame; 
@property (nonatomic,readonly) BOOL shouldBeIgnored; 
@property (nonatomic,readonly) BOOL isBroadcast; 
@property (nonatomic,readonly) double nominalLatency; 
+(id)userControlPressed:(CECUserControl)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)activeSourceFrom:(unsigned char)arg1 physicalAddress:(unsigned short)arg2 ;
+(id)imageViewOnFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)textViewOnFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)inactiveSourceFrom:(unsigned char)arg1 to:(unsigned char)arg2 physicalAddress:(unsigned short)arg3 ;
+(id)requestActiveSourceFrom:(unsigned char)arg1 ;
+(id)routingChangeFrom:(unsigned char)arg1 originalAddress:(unsigned short)arg2 newAddress:(unsigned short)arg3 ;
+(id)routingInformationFrom:(unsigned char)arg1 physicalAddress:(unsigned short)arg2 ;
+(id)setStreamPathFrom:(unsigned char)arg1 physicalAddress:(unsigned short)arg2 ;
+(id)standbyFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)cecVersion:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)getCECVersionFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)givePhysicalAddressFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)getMenuLanguageFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)pollFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)reportPhysicalAddress:(unsigned short)arg1 deviceType:(unsigned char)arg2 from:(unsigned char)arg3 ;
+(id)setMenuLanguage:(CECLanguage)arg1 from:(unsigned char)arg2 ;
+(id)deckControlWithMode:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)deckStatusWithInfo:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)giveDeckStatusWithRequest:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)playWithMode:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)deviceVendorID:(unsigned)arg1 from:(unsigned char)arg2 ;
+(id)giveDeviceVendorIDFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)giveOSDNameFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)setOSDName:(CECOSDName)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)menuStatus:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)userControlReleasedFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)giveDevicePowerStatusFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)reportPowerStatus:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)featureAbort:(unsigned char)arg1 reason:(unsigned char)arg2 from:(unsigned char)arg3 to:(unsigned char)arg4 ;
+(id)abortFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)giveSystemAudioModeStatusFrom:(unsigned char)arg1 to:(unsigned char)arg2 ;
+(id)systemAudioModeRequestWithPhysicalAddress:(unsigned short)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 ;
+(id)messageWithFrame:(CECFrame)arg1 ;
-(id)initWithFrame:(CECFrame)arg1 ;
-(CECFrame)frame;
-(id)description;
-(id)debugDescription;
-(unsigned char)length;
-(unsigned char)destination;
-(unsigned char)initiator;
-(int)messageType;
-(BOOL)parseReportPhysicalAddress:(unsigned long long*)arg1 deviceType:(unsigned long long*)arg2 ;
-(BOOL)isBroadcast;
-(double)nominalLatency;
-(BOOL)shouldBeIgnored;
-(BOOL)parseFeatureAbortOpcode:(char*)arg1 reason:(unsigned char*)arg2 ;
-(BOOL)parseActiveSourcePhysicalAddress:(unsigned long long*)arg1 ;
-(BOOL)parseInactiveSourcePhysicalAddress:(unsigned long long*)arg1 ;
-(BOOL)parseSetStreamPathPhysicalAddress:(unsigned long long*)arg1 ;
-(BOOL)parseRoutingChangeOriginalAddress:(unsigned long long*)arg1 newAddress:(unsigned long long*)arg2 ;
-(BOOL)parseRoutingInformationPhysicalAddress:(unsigned long long*)arg1 ;
-(BOOL)parseSetOSDName:(id*)arg1 ;
-(BOOL)parseDeviceVendorID:(unsigned*)arg1 ;
-(BOOL)parseCECVersion:(unsigned char*)arg1 ;
-(BOOL)parseSetMenuLanguage:(CECLanguage*)arg1 ;
-(BOOL)parseReportPowerStatus:(unsigned long long*)arg1 ;
-(BOOL)parsePlayMode:(unsigned long long*)arg1 ;
-(BOOL)parseDeckControlMode:(unsigned long long*)arg1 ;
-(BOOL)parseDeckStatusInfo:(unsigned long long*)arg1 ;
-(BOOL)parseGiveDeckStatusRequest:(unsigned char*)arg1 ;
-(BOOL)parseMenuRequest:(unsigned char*)arg1 ;
-(BOOL)parseUserControlPressed:(CECUserControl*)arg1 ;
-(BOOL)parseSystemAudioModeStatus:(unsigned long long*)arg1 ;
-(const char*)_operandsWithLength:(unsigned char)arg1 ;
-(unsigned char)_operandsLength;
@end


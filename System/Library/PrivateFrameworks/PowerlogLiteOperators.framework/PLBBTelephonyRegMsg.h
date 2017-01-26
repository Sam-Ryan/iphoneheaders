/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSNumber, NSString, NSDate, NSDictionary;

@interface PLBBTelephonyRegMsg : PLBasebandMessage {

	unsigned char _changed;
	NSNumber* _cellID;
	NSNumber* _lac;
	NSNumber* _dataAttached;
	NSNumber* _dataActive;
	NSString* _dataIndicator;
	NSNumber* _homeNetwork;
	NSString* _registrationStatus;
	NSString* _operatorName;
	NSDate* _timeUpdate;
	NSDictionary* _telRegInfo;

}

@property (retain) NSNumber * cellID;                          //@synthesize cellID=_cellID - In the implementation block
@property (retain) NSNumber * lac;                             //@synthesize lac=_lac - In the implementation block
@property (retain) NSNumber * dataAttached;                    //@synthesize dataAttached=_dataAttached - In the implementation block
@property (retain) NSNumber * dataActive;                      //@synthesize dataActive=_dataActive - In the implementation block
@property (retain) NSString * dataIndicator;                   //@synthesize dataIndicator=_dataIndicator - In the implementation block
@property (retain) NSNumber * homeNetwork;                     //@synthesize homeNetwork=_homeNetwork - In the implementation block
@property (retain) NSString * registrationStatus;              //@synthesize registrationStatus=_registrationStatus - In the implementation block
@property (retain) NSString * operatorName;                    //@synthesize operatorName=_operatorName - In the implementation block
@property (retain) NSDate * timeUpdate;                        //@synthesize timeUpdate=_timeUpdate - In the implementation block
@property (retain) NSDictionary * telRegInfo;                  //@synthesize telRegInfo=_telRegInfo - In the implementation block
@property (assign) unsigned char changed;                      //@synthesize changed=_changed - In the implementation block
+(id)bbEuLogMsgNameTelephonyReg;
-(id)init;
-(NSString *)operatorName;
-(unsigned char)changed;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(void)setChanged:(unsigned char)arg1 ;
-(void)setTelRegInfo:(NSDictionary *)arg1 ;
-(void)logEventPointTelephonyRegistration;
-(void)logEventPointTelephonyRegistrationAtInit;
-(void)setOperatorName:(NSString *)arg1 ;
-(id)humanReadableRegistrationStatus:(id)arg1 ;
-(id)humanReadableDataIndicator:(id)arg1 ;
-(void)setAttrCellID:(id)arg1 ;
-(void)setAttrLac:(id)arg1 ;
-(void)setAttrDataAttached:(id)arg1 ;
-(void)setAttrDataActive:(id)arg1 ;
-(void)setAttrDataIndicator:(id)arg1 ;
-(void)setAttrHomeNetwork:(id)arg1 ;
-(void)setAttrRegistrationStatus:(id)arg1 ;
-(void)setAttrOperatorName:(id)arg1 ;
-(void)fillPLEntryAndSend:(id)arg1 ;
-(NSDictionary *)telRegInfo;
-(void)processTelReg;
-(NSNumber *)lac;
-(NSNumber *)cellID;
-(NSNumber *)homeNetwork;
-(NSNumber *)dataAttached;
-(NSNumber *)dataActive;
-(NSString *)dataIndicator;
-(NSString *)registrationStatus;
-(void)setCellID:(NSNumber *)arg1 ;
-(void)setTimeUpdate:(NSDate *)arg1 ;
-(void)setLac:(NSNumber *)arg1 ;
-(void)setDataAttached:(NSNumber *)arg1 ;
-(void)setDataActive:(NSNumber *)arg1 ;
-(void)setDataIndicator:(NSString *)arg1 ;
-(void)setHomeNetwork:(NSNumber *)arg1 ;
-(void)setRegistrationStatus:(NSString *)arg1 ;
-(void)refreshTelephonyReg;
-(NSDate *)timeUpdate;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class IDSDevice, NSData, NSString, NSDate, NSDictionary, HDIDSMessageCenter;

@interface HDIDSIncomingResponse : NSObject <HDNanoSyncDescription> {

	unsigned short _messageID;
	IDSDevice* _fromDevice;
	NSData* _data;
	NSString* _idsIdentifier;
	NSString* _requestIDSIdentifier;
	NSDate* _requestSent;
	NSDictionary* _requestPersistentUserInfo;
	HDIDSMessageCenter* _messageCenter;
	id _pbResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IDSDevice * fromDevice;                                 //@synthesize fromDevice=_fromDevice - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIDSIdentifier;                          //@synthesize requestIDSIdentifier=_requestIDSIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * requestSent;                                   //@synthesize requestSent=_requestSent - In the implementation block
@property (nonatomic,retain) NSDictionary * requestPersistentUserInfo;               //@synthesize requestPersistentUserInfo=_requestPersistentUserInfo - In the implementation block
@property (assign,nonatomic,__weak) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) id pbResponse;                                          //@synthesize pbResponse=_pbResponse - In the implementation block
-(id)nanoSyncDescription;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(IDSDevice *)fromDevice;
-(NSString *)idsIdentifier;
-(id)pbResponse;
-(unsigned short)messageID;
-(void)setPbResponse:(id)arg1 ;
-(NSDictionary *)requestPersistentUserInfo;
-(HDIDSMessageCenter *)messageCenter;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setFromDevice:(IDSDevice *)arg1 ;
-(void)setRequestIDSIdentifier:(NSString *)arg1 ;
-(void)setRequestSent:(NSDate *)arg1 ;
-(void)setRequestPersistentUserInfo:(NSDictionary *)arg1 ;
-(NSString *)requestIDSIdentifier;
-(NSDate *)requestSent;
@end


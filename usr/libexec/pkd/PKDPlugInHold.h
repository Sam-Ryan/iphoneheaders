/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSSet, PKDXpcClient, NSDate;

@interface PKDPlugInHold : NSObject {

	NSUUID* _uuid;
	NSSet* _blocked;
	PKDXpcClient* _client;
	NSDate* _created;

}

@property (retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSSet * blocked;                    //@synthesize blocked=_blocked - In the implementation block
@property (__weak) PKDXpcClient * client;              //@synthesize client=_client - In the implementation block
@property (retain) NSDate * created;                   //@synthesize created=_created - In the implementation block
-(id)initWithPlugIns:(id)arg1 forClient:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)uuid;
-(NSSet *)blocked;
-(void)setBlocked:(NSSet *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setClient:(PKDXpcClient *)arg1 ;
-(void)setCreated:(NSDate *)arg1 ;
-(NSDate *)created;
-(PKDXpcClient *)client;
@end


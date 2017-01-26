/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface BBObserverGatewayAddBulletinRequest : NSObject {

	NSString* _bulletinID;
	NSString* _sectionID;
	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,retain) NSString * bulletinID;              //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,retain) NSString * sectionID;               //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDate * timeout;                   //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                    //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(void)dealloc;
-(void)setTimeout:(NSDate *)arg1 ;
-(void)setBulletinID:(NSString *)arg1 ;
-(NSString *)bulletinID;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(NSDate *)timeout;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
@end


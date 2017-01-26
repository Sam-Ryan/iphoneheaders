/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface WRM_HORecordCacheEntry : NSObject {

	NSDate* mDate;
	BOOL _mCallActive;
	int _mType;
	int _mMob;
	int _mReason;
	unsigned long long _mApp;

}

@property (assign,nonatomic) int mType;                            //@synthesize mType=_mType - In the implementation block
@property (assign,nonatomic) BOOL mCallActive;                     //@synthesize mCallActive=_mCallActive - In the implementation block
@property (assign,nonatomic) unsigned long long mApp;              //@synthesize mApp=_mApp - In the implementation block
@property (assign,nonatomic) int mMob;                             //@synthesize mMob=_mMob - In the implementation block
@property (assign,nonatomic) int mReason;                          //@synthesize mReason=_mReason - In the implementation block
-(int)mReason;
-(id)getDate;
-(unsigned long long)mApp;
-(int)mType;
-(void)setWithRecord:(int)arg1 :(BOOL)arg2 :(unsigned long long)arg3 :(int)arg4 :(int)arg5 ;
-(void)setMType:(int)arg1 ;
-(BOOL)mCallActive;
-(void)setMCallActive:(BOOL)arg1 ;
-(void)setMApp:(unsigned long long)arg1 ;
-(int)mMob;
-(void)setMMob:(int)arg1 ;
-(void)setMReason:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:42 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ApplicationHandle;

@interface ApplicationWorkspaceChange : NSObject {

	long long _changeType;
	ApplicationHandle* _applicationHandle;

}

@property (assign,nonatomic) long long changeType;                             //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy) ApplicationHandle * applicationHandle;              //@synthesize applicationHandle=_applicationHandle - In the implementation block
-(void)setApplicationHandle:(ApplicationHandle *)arg1 ;
-(ApplicationHandle *)applicationHandle;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
@end


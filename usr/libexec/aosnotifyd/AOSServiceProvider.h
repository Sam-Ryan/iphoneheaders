/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AOSAccount, NSString;

@interface AOSServiceProvider : NSObject {

	AOSAccount* _account;
	id _didDeactivateToken;
	id _didUpdateToken;

}

@property (nonatomic,retain) AOSAccount * account;                  //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,retain) id didDeactivateToken;                 //@synthesize didDeactivateToken=_didDeactivateToken - In the implementation block
@property (nonatomic,retain) id didUpdateToken;                     //@synthesize didUpdateToken=_didUpdateToken - In the implementation block
-(void)accountDeactivated;
-(void)setDidDeactivateToken:(id)arg1 ;
-(void)accountDidChange;
-(void)setDidUpdateToken:(id)arg1 ;
-(id)didDeactivateToken;
-(id)didUpdateToken;
-(void)deinitializeProvider;
-(NSString *)serviceName;
-(void)stop;
-(void)start;
-(void)_teardown;
-(AOSAccount *)account;
-(void)setAccount:(AOSAccount *)arg1 ;
@end


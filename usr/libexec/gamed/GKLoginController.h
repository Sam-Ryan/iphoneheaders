/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKLoginController : NSObject {

	long long _environment;

}

@property (assign,nonatomic) long long environment;              //@synthesize environment=_environment - In the implementation block
+(id)sharedLoginController;
-(void)presentWithUsername:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(long long)environment;
-(void)dismiss;
-(void)setEnvironment:(long long)arg1 ;
@end


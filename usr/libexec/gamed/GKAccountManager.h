/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AAAccountManager;

@interface GKAccountManager : NSObject {

	AAAccountManager* _internalManager;

}

@property (nonatomic,retain,readonly) AAAccountManager * internalManager;              //@synthesize internalManager=_internalManager - In the implementation block
+(id)sharedManager;
-(AAAccountManager *)internalManager;
-(void)dealloc;
-(id)init;
-(id)primaryAccount;
@end


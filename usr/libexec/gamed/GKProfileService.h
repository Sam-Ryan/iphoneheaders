/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKService.h>
#import <gamed/GKProfileService.h>

@protocol GKProfileService <NSObject>
@required
-(oneway void)getProfilesForPlayerIDs:(id)arg1 handler:(/*^block*/id)arg2;

@end


@class NSString;

@interface GKProfileService : GKService <GKProfileService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)interfaceClass;
+(unsigned long long)requiredEntitlements;
-(void)_updateLastPlayedGames:(id)arg1 forPlayers:(id)arg2 group:(id)arg3 ;
-(id)_profileRequestForPlayerIDs:(id)arg1 pieces:(unsigned char)arg2 ;
-(void)fetchProfilesForPlayerIDs:(id)arg1 familiarity:(int)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)loadProfilesForPlayerIDs:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(/*^block*/id)arg4 ;
-(oneway void)getProfilesForPlayerIDs:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

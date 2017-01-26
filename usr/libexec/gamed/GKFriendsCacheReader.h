/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKCacheReader.h>

@class NSString;

@interface GKFriendsCacheReader : GKCacheReader {

	BOOL _shouldFilter;
	NSString* _localPlayerID;

}

@property (nonatomic,retain) NSString * localPlayerID;              //@synthesize localPlayerID=_localPlayerID - In the implementation block
@property (assign,nonatomic) BOOL shouldFilter;                     //@synthesize shouldFilter=_shouldFilter - In the implementation block
+(id)readerWithDatabaseConnection:(id)arg1 localPlayer:(id)arg2 filterFriendsInCommon:(BOOL)arg3 ;
-(void)setLocalPlayerID:(NSString *)arg1 ;
-(NSString *)localPlayerID;
-(id)initWithDatabaseConnection:(id)arg1 localPlayer:(id)arg2 filterFriendsInCommon:(BOOL)arg3 ;
-(id)getFriendPlayerGCIDsStatement;
-(id)getExpirationDateStatement;
-(void)bindParametersForStatement:(sqlite3_stmtRef)arg1 withPlayer:(id)arg2 ;
-(void)readResources:(id)arg1 inDatabase:(sqlite3Ref)arg2 statementStore:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)shouldFilter;
-(void)setShouldFilter:(BOOL)arg1 ;
-(void)dealloc;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKDatabaseReader.h>

@class GKDatabaseConnection, NSString;

@interface GKDelayedAcceptFriendRequestsCacheReader : NSObject <GKDatabaseReader> {

	GKDatabaseConnection* _connection;

}

@property (nonatomic,retain) GKDatabaseConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GKDatabaseConnection * databaseConnection; 
+(id)readerWithDatabaseConnection:(id)arg1 ;
-(void)readResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(GKDatabaseConnection *)databaseConnection;
-(void)bindParametersForStatement:(sqlite3_stmtRef)arg1 playerID:(id)arg2 ;
-(id)getFriendRequestsDescriptorStatement;
-(id)acceptFriendRequestsDescriptorForExecutedStatement:(sqlite3_stmtRef)arg1 ;
-(void)dealloc;
-(GKDatabaseConnection *)connection;
-(void)setConnection:(GKDatabaseConnection *)arg1 ;
-(id)initWithDatabaseConnection:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKDatabaseWriter.h>

@class GKDatabaseConnection, NSString;

@interface GKDelayedSetPlayerStatusCacheWriter : NSObject <GKDatabaseWriter> {

	GKDatabaseConnection* _connection;

}

@property (nonatomic,retain) GKDatabaseConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GKDatabaseConnection * databaseConnection; 
+(id)writerWithDatabaseConnection:(id)arg1 ;
-(void)writeToDatabase:(sqlite3Ref)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(/*^block*/id)arg5 ;
-(void)writeResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)requestsInsertSQL;
-(GKDatabaseConnection *)databaseConnection;
-(void)bindParametersForRequestsStatement:(sqlite3_stmtRef)arg1 playerID:(id)arg2 ;
-(id)getOldStatusesSQL;
-(id)deleteOldStatusesSQL;
-(void)bindParametersForGetOldStatusesStatement:(sqlite3_stmtRef)arg1 playerID:(id)arg2 ;
-(void)bindParametersForDeleteOldStatusesStatement:(sqlite3_stmtRef)arg1 requestsRowID:(long long)arg2 ;
-(id)statusInsertSQL;
-(void)bindParametersForStatusStatement:(sqlite3_stmtRef)arg1 status:(id)arg2 requestsRowID:(long long)arg3 ;
-(void)dealloc;
-(GKDatabaseConnection *)connection;
-(void)setConnection:(GKDatabaseConnection *)arg1 ;
-(id)initWithDatabaseConnection:(id)arg1 ;
@end


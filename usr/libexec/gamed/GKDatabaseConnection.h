/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKSQLiteStatementStore.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface GKDatabaseConnection : NSObject <GKSQLiteStatementStore> {

	CFDictionaryRef _stmtCache;
	NSString* _path;
	sqlite3Ref _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}

@property (nonatomic,copy) NSString * path;                                           //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) sqlite3Ref database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionWithDatabasePath:(id)arg1 ;
-(int)getStatement:(sqlite3_stmt*)arg1 forSQL:(id)arg2 ;
-(void)performAsyncTransaction:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDatabaseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)close;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)open;
-(id)initWithDatabasePath:(id)arg1 ;
-(sqlite3Ref)database;
-(void)performSync:(/*^block*/id)arg1 ;
-(void)setDatabase:(sqlite3Ref)arg1 ;
@end

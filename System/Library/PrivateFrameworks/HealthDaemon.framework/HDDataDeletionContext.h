/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDSQLiteDatabase, NSMutableDictionary;

@interface HDDataDeletionContext : NSObject {

	HDSQLiteDatabase* _database;
	NSMutableDictionary* _deleteStatementsByClassName;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;                                  //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deleteStatementsByClassName;              //@synthesize deleteStatementsByClassName=_deleteStatementsByClassName - In the implementation block
-(void)finish;
-(HDSQLiteDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)deleteStatementsByClassName;
-(void)setDeleteStatementsByClassName:(NSMutableDictionary *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/nsurlstoraged
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <nsurlstoraged/nsurlstoraged-Structs.h>
@class NSLock, NSString;

@interface NSURLStorageDB : NSObject {

	sqlite3Ref _dbReadConnection;
	sqlite3Ref _dbWriteConnection;
	NSLock* _dbReadConnectionLock;
	NSLock* _dbWriteConnectionLock;
	BOOL _isDBOpen;
	int _clientPid;
	NSString* _dbPathDirectory;
	NSString* _dbPathFile;
	long long _maxDBSize;

}

@property (retain) NSString * dbPathDirectory;              //@synthesize dbPathDirectory=_dbPathDirectory - In the implementation block
@property (retain) NSString * dbPathFile;                   //@synthesize dbPathFile=_dbPathFile - In the implementation block
@property (assign) BOOL isDBOpen;                           //@synthesize isDBOpen=_isDBOpen - In the implementation block
@property (assign) long long maxDBSize;                     //@synthesize maxDBSize=_maxDBSize - In the implementation block
@property (assign) int clientPid;                           //@synthesize clientPid=_clientPid - In the implementation block
-(void)setMaxDBSize:(long long)arg1 ;
-(void)setIsDBOpen:(BOOL)arg1 ;
-(void)setDbPathDirectory:(NSString *)arg1 ;
-(void)setDbPathFile:(NSString *)arg1 ;
-(id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 clientPid:(int)arg3 ;
-(BOOL)checkAccessToDatabaseFile;
-(BOOL)isDBOpen;
-(void)_closeDBReadConnections;
-(void)_closeDBWriteConnections;
-(id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 clientPid:(int)arg3 schemaCheck:(BOOL)arg4 ;
-(BOOL)_openDBWriteConnections;
-(BOOL)_openDBReadConnections;
-(sqlite3Ref)openReadWriteConnection;
-(void)closeConnection:(sqlite3Ref)arg1 ;
-(NSString *)dbPathDirectory;
-(NSString *)dbPathFile;
-(long long)maxDBSize;
-(void)dealloc;
-(id)init;
-(void)_closeDB;
-(void)setClientPid:(int)arg1 ;
-(int)clientPid;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection, SSKeyValueStoreDatabase;

@interface SSKeyValueStore : NSObject {

	SSXPCConnection* _connection;
	SSKeyValueStoreDatabase* _database;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;

}

@property (getter=isLocalReadable,readonly) BOOL localReadable; 
@property (getter=isLocalWritable,readonly) BOOL localWritable; 
+(BOOL)isLocalReadable;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getValuesForDomain:(id)arg1 keys:(const id*)arg2 count:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)isLocalReadable;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(id)copyAccountDictionaryForDomain:(id)arg1 ;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(void)removeAccountFromDomain:(id)arg1 ;
-(void)removeAllValuesForDomain:(id)arg1 ;
-(void)removeAllValuesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)copyAccounts;
-(BOOL)isLocalWritable;
-(void)dealloc;
-(id)init;
-(void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeAllValuesForDomain:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end


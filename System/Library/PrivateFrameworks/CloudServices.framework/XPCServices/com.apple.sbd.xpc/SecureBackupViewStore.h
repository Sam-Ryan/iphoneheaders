/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:11:56 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.sbd.xpc/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSURL, SecureBackupDB, NSData, NSDictionary;

@interface SecureBackupViewStore : NSObject {

	NSMutableDictionary* _classDBs;
	NSString* _viewName;
	NSURL* _url;
	SecureBackupDB* _manifestDB;

}

@property (readonly) NSData * backupData; 
@property (readonly) NSDictionary * backupDict; 
@property (readonly) NSData * manifestHash; 
@property (readonly) NSData * keybagDigest; 
@property (readonly) NSData * keybag; 
@property (readonly) NSString * recordID; 
@property (readonly) NSMutableDictionary * classDBs;              //@synthesize classDBs=_classDBs - In the implementation block
@property (copy,readonly) NSString * viewName;                    //@synthesize viewName=_viewName - In the implementation block
@property (copy,readonly) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (readonly) SecureBackupDB * manifestDB;                 //@synthesize manifestDB=_manifestDB - In the implementation block
@property (readonly) NSDictionary * keybagDict; 
+(id)URLForViewName:(id)arg1 ;
+(id)kvsUUID;
+(id)classDBsForViewName:(id)arg1 ;
-(BOOL)removeItemWithKey:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)classDBs;
-(NSString *)viewName;
-(SecureBackupDB *)manifestDB;
-(NSDictionary *)keybagDict;
-(id)initWithViewName:(id)arg1 ;
-(BOOL)addItem:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)backupDict;
-(NSData *)backupData;
-(BOOL)resetWithKeybag:(id)arg1 error:(id*)arg2 ;
-(NSData *)keybagDigest;
-(NSData *)keybag;
-(void)closeStore;
-(NSURL *)url;
-(NSString *)recordID;
-(NSData *)manifestHash;
@end

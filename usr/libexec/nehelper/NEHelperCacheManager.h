/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/nehelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nehelper/nehelper-Structs.h>
#import <nehelper/NEHelperDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface NEHelperCacheManager : NSObject <NEHelperDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	SCPreferencesRef _prefs;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) SCPreferencesRef prefs;                          //@synthesize prefs=_prefs - In the implementation block
+(id)readUUIDsForPaths:(id)arg1 ;
+(id)extraPathForSigningIdentifier:(id)arg1 ;
+(id)extraUUIDForSigningIdentifier:(id)arg1 ;
+(id)extraSigningIdentifierForUUID:(id)arg1 ;
+(id)sharedManager;
-(void)clearCacheForServiceID:(id)arg1 ;
-(void)clearUUIDcache;
-(id)copyAppPaths;
-(BOOL)setRoutes:(id)arg1 forServiceID:(id)arg2 type:(int)arg3 ;
-(BOOL)setDomainDictionaries:(id)arg1 forServiceID:(id)arg2 type:(int)arg3 ;
-(BOOL)clearDomainDictionariesForServiceID:(id)arg1 type:(int)arg2 ;
-(BOOL)addRedirectedAddress:(const sockaddr*)arg1 ;
-(void)clearRedirectedAddresses;
-(id)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 ;
-(id)copySigningIdentifierForUUID:(id)arg1 ;
-(void)notifyCacheChanged;
-(void)addAppPath:(id)arg1 forSigningIdentifier:(id)arg2 ;
-(void)cleanupAppCache:(id)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)clearCache;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPrefs:(SCPreferencesRef)arg1 ;
-(SCPreferencesRef)prefs;
-(id)initWithConnection:(id)arg1 ;
@end


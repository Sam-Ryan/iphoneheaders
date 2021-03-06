/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <fmfd/Daemon.h>
#import <fmfd/FMFAPSDelegate.h>

@class NSData, FMFAPSHandler, FMFLogger;

@interface FMFDaemon : Daemon <FMFAPSDelegate> {

	BOOL _cachesWarmedUp;
	NSData* _apsTokenData;
	FMFAPSHandler* _apsHandler;
	FMFLogger* _logger;

}

@property (nonatomic,retain) NSData * apsTokenData;                   //@synthesize apsTokenData=_apsTokenData - In the implementation block
@property (nonatomic,retain) FMFAPSHandler * apsHandler;              //@synthesize apsHandler=_apsHandler - In the implementation block
@property (nonatomic,retain) FMFLogger * logger;                      //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) BOOL cachesWarmedUp;                     //@synthesize cachesWarmedUp=_cachesWarmedUp - In the implementation block
-(void)accountWasRemoved;
-(void)addObservers;
-(id)_parseExcludedFacilitiesFromString:(id)arg1 ;
-(void)_registerUnlockRefresh;
-(void)setCachesWarmedUp:(BOOL)arg1 ;
-(void)loadStoredAPSToken;
-(void)setApsHandler:(FMFAPSHandler *)arg1 ;
-(void)registerWithAPS;
-(void)_postAliveNotification;
-(void)accountWasAdded;
-(BOOL)cachesWarmedUp;
-(FMFAPSHandler *)apsHandler;
-(void)deregisterWithAPS;
-(void)removeStoredAPSToken;
-(BOOL)hashedAPSTokenMatchesStoredToken:(id)arg1 ;
-(id)hashForToken:(id)arg1 ;
-(void)setApsTokenData:(NSData *)arg1 ;
-(void)storeSavedAPSToken;
-(NSData *)apsTokenData;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_localeChanged:(id)arg1 ;
-(FMFLogger *)logger;
-(void)setLogger:(FMFLogger *)arg1 ;
-(void)startup;
-(id)xpcDarwinEventHandlers;
-(id)xpcDistributedEventHandlers;
-(void)didReceiveAPSMessage:(id)arg1 ;
-(void)didReceiveAPSToken:(id)arg1 ;
-(id)machServiceName;
-(void)_configureLogging;
@end


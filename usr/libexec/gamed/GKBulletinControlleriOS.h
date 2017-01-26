/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKBulletinController.h>
#import <gamed/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class BBDataProviderProxy, BBDataProviderConnection, NSObject, NSString;

@interface GKBulletinControlleriOS : GKBulletinController <BBRemoteDataProvider> {

	BBDataProviderProxy* _dataProviderProxy;
	BBDataProviderConnection* _dataProviderConnection;
	NSObject*<OS_dispatch_queue> _dataProviderQueue;

}

@property (nonatomic,retain) BBDataProviderProxy * dataProviderProxy;                        //@synthesize dataProviderProxy=_dataProviderProxy - In the implementation block
@property (nonatomic,retain) BBDataProviderConnection * dataProviderConnection;              //@synthesize dataProviderConnection=_dataProviderConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataProviderQueue;                 //@synthesize dataProviderQueue=_dataProviderQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)withdrawBulletin:(id)arg1 ;
-(void)presentBulletin:(id)arg1 ;
-(void)expireBulletin:(id)arg1 ;
-(void)clearBulletin:(id)arg1 ;
-(void)clearBulletinsForLastClearedInfo:(id)arg1 ;
-(id)bulletinRequestFromBulletin:(id)arg1 ;
-(id)bulletinDefaults;
-(NSObject*<OS_dispatch_queue>)dataProviderQueue;
-(void)setDataProviderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(void)dataProviderDidLoad;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(BOOL)syncsBulletinDismissal;
-(id)defaultSectionInfo;
-(BBDataProviderConnection *)dataProviderConnection;
-(void)setDataProviderConnection:(BBDataProviderConnection *)arg1 ;
-(void)removeAllBulletins;
-(BBDataProviderProxy *)dataProviderProxy;
-(void)setDataProviderProxy:(BBDataProviderProxy *)arg1 ;
@end


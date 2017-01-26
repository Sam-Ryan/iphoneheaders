/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class BBDataProviderProxy, NSObject, BBBulletinRequest, RTPLOIETA, NSString;

@interface RTBBDataProvider : NSObject <BBRemoteDataProvider> {

	BBDataProviderProxy* _dataProviderProxy;
	NSObject*<OS_dispatch_queue> _queue;
	BBBulletinRequest* _bulletinRequest;
	RTPLOIETA* _ploiEta;

}

@property (nonatomic,retain) BBDataProviderProxy * dataProviderProxy;              //@synthesize dataProviderProxy=_dataProviderProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BBBulletinRequest * bulletinRequest;                  //@synthesize bulletinRequest=_bulletinRequest - In the implementation block
@property (nonatomic,retain) RTPLOIETA * ploiEta;                                  //@synthesize ploiEta=_ploiEta - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)sortDescriptors;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)sectionIdentifier;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(RTPLOIETA *)ploiEta;
-(BBDataProviderProxy *)dataProviderProxy;
-(void)setBulletinRequest:(BBBulletinRequest *)arg1 ;
-(BBBulletinRequest *)bulletinRequest;
-(void)setPloiEta:(RTPLOIETA *)arg1 ;
-(void)_onNotificationCenterDidPresent;
-(void)setDataProviderProxy:(BBDataProviderProxy *)arg1 ;
-(void)onNotificationCenterDidPresent;
@end


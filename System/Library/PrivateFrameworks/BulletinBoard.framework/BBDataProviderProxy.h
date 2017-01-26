/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProviderClientProxy.h>

@protocol BBRemoteDataProvider, OS_dispatch_queue, BBRemoteDataProviderServerProxy;
@class NSObject, BBDataProviderIdentity, NSString;

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy> {

	id<BBRemoteDataProvider> _dataProvider;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	BBDataProviderIdentity* _identity;
	BOOL _dataProviderDidLoad;
	NSObject*<OS_dispatch_queue> _proxyQueue;
	id<BBRemoteDataProviderServerProxy> _serverProxy;
	BOOL _connected;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) BBDataProviderIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)updateIdentity:(/*^block*/id)arg1 ;
-(BBDataProviderIdentity *)identity;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deliverBulletinActionResponse:(id)arg1 ;
-(void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)attachmentAspectRatioForRecordID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)primaryAttachmentDataForRecordID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1 ;
-(void)setServerProxy:(id)arg1 ;
-(id)initWithDataProvider:(id)arg1 clientReplyQueue:(id)arg2 ;
-(void)_makeClientRequest:(/*^block*/id)arg1 ;
-(void)_makeServerRequest:(/*^block*/id)arg1 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadSectionParameters;
-(void)updateClearedInfoWithHandler:(/*^block*/id)arg1 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)setIdentity:(BBDataProviderIdentity *)arg1 ;
-(void)invalidateBulletins;
-(void)reloadDefaultSectionInfo;
-(void)addBulletin:(id)arg1 interrupt:(BOOL)arg2 ;
-(void)modifyBulletin:(id)arg1 ;
-(void)withdrawBulletinsWithRecordID:(id)arg1 ;
-(void)dataProviderDidLoad;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2 ;
@end


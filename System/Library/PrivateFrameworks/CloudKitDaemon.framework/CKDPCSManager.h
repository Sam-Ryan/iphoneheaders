/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/CKDProtocolTranslatorIdentityDelegate.h>

@protocol NSObject;
@class NSData, CKDClientContext, NSString, NSOperationQueue, CKDPCSFetchAggregator, CKDPCSCache, NSMutableDictionary;

@interface CKDPCSManager : NSObject <CKDProtocolTranslatorIdentityDelegate> {

	NSData* _userIdentityFingerprint;
	CKDClientContext* _context;
	NSString* _currentAccountIdentifier;
	NSOperationQueue* _operationQueue;
	CKDPCSFetchAggregator* _pcsFetchAggregator;
	CKDPCSCache* _zoneCache;
	CKDPCSCache* _backgroundZoneCache;
	NSMutableDictionary* _recordCacheByPrivateZoneID;
	NSMutableDictionary* _backgroundRecordCacheByPrivateZoneID;
	CKDPCSCache* _shareCache;
	CKDPCSCache* _backgroundShareCache;
	PCSIdentityDataRef _sharingIdentity;
	NSString* _serviceName;
	id<NSObject> _contextObserver;

}

@property (nonatomic,__weak,readonly) CKDClientContext * context;                                     //@synthesize context=_context - In the implementation block
@property (retain) NSString * currentAccountIdentifier;                                               //@synthesize currentAccountIdentifier=_currentAccountIdentifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) CKDPCSFetchAggregator * pcsFetchAggregator;                              //@synthesize pcsFetchAggregator=_pcsFetchAggregator - In the implementation block
@property (nonatomic,retain) CKDPCSCache * zoneCache;                                                 //@synthesize zoneCache=_zoneCache - In the implementation block
@property (nonatomic,retain) CKDPCSCache * backgroundZoneCache;                                       //@synthesize backgroundZoneCache=_backgroundZoneCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordCacheByPrivateZoneID;                        //@synthesize recordCacheByPrivateZoneID=_recordCacheByPrivateZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backgroundRecordCacheByPrivateZoneID;              //@synthesize backgroundRecordCacheByPrivateZoneID=_backgroundRecordCacheByPrivateZoneID - In the implementation block
@property (nonatomic,retain) CKDPCSCache * shareCache;                                                //@synthesize shareCache=_shareCache - In the implementation block
@property (nonatomic,retain) CKDPCSCache * backgroundShareCache;                                      //@synthesize backgroundShareCache=_backgroundShareCache - In the implementation block
@property (assign,nonatomic) PCSIdentityDataRef sharingIdentity;                                      //@synthesize sharingIdentity=_sharingIdentity - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSData * userIdentityFingerprint;                                        //@synthesize userIdentityFingerprint=_userIdentityFingerprint - In the implementation block
@property (nonatomic,retain) id<NSObject> contextObserver;                                            //@synthesize contextObserver=_contextObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearPCSCaches;
-(NSString *)serviceName;
-(void)dealloc;
-(CKDClientContext *)context;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithClientContext:(id)arg1 ;
-(PCSIdentityDataRef)createSharingIdentityWithError:(id*)arg1 ;
-(id)dataFromSharingIdentity:(PCSIdentityDataRef)arg1 error:(id*)arg2 ;
-(id)_serviceNameForContainerID:(id)arg1 ;
-(void)_fetchPCSForZoneWithIDFromServer:(id)arg1 operation:(id)arg2 forCache:(id)arg3 ;
-(void)_fetchPCSForShareWithIDFromServer:(id)arg1 operation:(id)arg2 forCache:(id)arg3 ;
-(NSString *)currentAccountIdentifier;
-(void)setCurrentAccountIdentifier:(NSString *)arg1 ;
-(void)setUserIdentityFingerprint:(NSData *)arg1 ;
-(id)_addServiceIdentitiesOfType:(id)arg1 toSet:(PCSIdentitySetDataRef)arg2 fromSet:(PCSIdentitySetDataRef)arg3 markCurrent:(BOOL)arg4 ;
-(PCSIdentitySetDataRef)_createInMemoryIdentitySetForService:(id)arg1 error:(id*)arg2 ;
-(PCSIdentitySetDataRef)_createIdentitySetByAddingLiverpoolIdentity:(PCSIdentitySetDataRef)arg1 error:(id*)arg2 ;
-(PCSIdentitySetDataRef)copyServiceIdentityWithError:(id*)arg1 ;
-(id)addSelfIdentityToPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)dataFromZonePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)etagFromPCSData:(id)arg1 ;
-(OpaquePCSShareProtectionRef)createRecordPCSFromData:(id)arg1 zonePCS:(OpaquePCSShareProtectionRef)arg2 logFailure:(BOOL)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createRecordPCSFromData:(id)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 logFailure:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)addSharePCS:(OpaquePCSShareProtectionRef)arg1 toRecordPCS:(OpaquePCSShareProtectionRef)arg2 permission:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)dataFromRecordPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)_addPublicSharingIdentityToSharePCS:(OpaquePCSShareProtectionRef)arg1 withError:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 sharingIdentity:(PCSIdentityDataRef)arg2 logFailure:(BOOL)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 logFailure:(BOOL)arg2 error:(id*)arg3 ;
-(id)etagFromZonePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createZonePCSWithError:(id*)arg1 ;
-(OpaquePCSShareProtectionRef)createZonePCSFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_saveZoneToServer:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 operation:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_zonePCSNeedsUpdate:(OpaquePCSShareProtectionRef)arg1 ;
-(id)updatePCSIdentityAndRollKey:(OpaquePCSShareProtectionRef)arg1 ;
-(void)_saveNewPCSOnDefaultZone:(id)arg1 operation:(id)arg2 cache:(id)arg3 ;
-(CKDPCSCache *)zoneCache;
-(CKDPCSCache *)backgroundZoneCache;
-(OpaquePCSShareProtectionRef)createRecordPCSFromData:(id)arg1 zonePCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(void)fetchPCSForZoneWithID:(id)arg1 operation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(OpaquePCSShareProtectionRef)createRecordPCSFromData:(id)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(void)fetchPCSForShareWithID:(id)arg1 operation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_fetchZonePCSForRecordPCS:(id)arg1 cache:(id)arg2 operation:(id)arg3 ;
-(void)_fetchSharePCSForRecordPCS:(id)arg1 cache:(id)arg2 operation:(id)arg3 ;
-(CKDPCSFetchAggregator *)pcsFetchAggregator;
-(void)_handleRecordFetchedFromServer:(id)arg1 withID:(id)arg2 forCache:(id)arg3 operation:(id)arg4 error:(id)arg5 ;
-(void)_fetchPCSForRecordWithIDFromServer:(id)arg1 operation:(id)arg2 forCache:(id)arg3 ;
-(NSMutableDictionary *)backgroundRecordCacheByPrivateZoneID;
-(id)_newPCSRecordCache;
-(NSMutableDictionary *)recordCacheByPrivateZoneID;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 error:(id*)arg2 ;
-(id)pcsDataFromFetchedShare:(id)arg1 error:(id*)arg2 ;
-(void)_handleShareFetchedFromServer:(id)arg1 withID:(id)arg2 forCache:(id)arg3 operation:(id)arg4 error:(id)arg5 ;
-(CKDPCSCache *)shareCache;
-(CKDPCSCache *)backgroundShareCache;
-(id)referenceIdentifierStringFromAssetKey:(id)arg1 ;
-(NSData *)userIdentityFingerprint;
-(PCSIdentityDataRef)sharingIdentity;
-(id)protectionIdentifierFromShareProtection:(OpaquePCSShareProtectionRef)arg1 ;
-(id)copyCurrentPublicIdentityWithError:(id*)arg1 ;
-(PCSIdentityDataRef)createSharingIdentityFromData:(id)arg1 error:(id*)arg2 ;
-(id)removeSelfIdentityFromPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)repairZonePCSData:(id)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createRecordPCSWithZonePCS:(OpaquePCSShareProtectionRef)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 createLite:(BOOL)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createRecordPCSWithEncryptedZonePCS:(CFDataRef)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 createLite:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)addSharePCS:(OpaquePCSShareProtectionRef)arg1 toRecordPCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(BOOL)removeSharePCS:(OpaquePCSShareProtectionRef)arg1 fromRecordPCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(id)etagFromRecordPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSWithError:(id*)arg1 ;
-(OpaquePCSShareProtectionRef)createSharePublicPCSWithIdentity:(PCSIdentityDataRef)arg1 error:(id*)arg2 ;
-(id)dataFromSharePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 sharingIdentity:(PCSIdentityDataRef)arg2 error:(id*)arg3 ;
-(id)etagFromSharePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)addSharingIdentity:(PCSIdentityDataRef)arg1 toSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)removeSharingIdentity:(PCSIdentityDataRef)arg1 fromSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)removePublicIdentity:(PCSPublicIdentityDataRef)arg1 fromSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(PCSPublicIdentityDataRef)createPublicIdentityFromData:(id)arg1 error:(id*)arg2 ;
-(id)sharingIdentityDataFromPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(void)updateZonePCSIfNeeded:(id)arg1 operation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchPCSForRecordWithID:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)removePCSDataForSharesInZoneWithID:(id)arg1 ;
-(void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3 ;
-(void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3 ;
-(void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2 ;
-(id)unwrapAssetKey:(id)arg1 withRecordPCS:(OpaquePCSShareProtectionRef)arg2 withError:(id*)arg3 ;
-(id)wrapAssetKey:(id)arg1 withRecordPCS:(OpaquePCSShareProtectionRef)arg2 withError:(id*)arg3 ;
-(id)newAssetKeyWithError:(id*)arg1 ;
-(id)referenceSignatureFromAssetKey:(id)arg1 ;
-(void)setPcsFetchAggregator:(CKDPCSFetchAggregator *)arg1 ;
-(void)setZoneCache:(CKDPCSCache *)arg1 ;
-(void)setBackgroundZoneCache:(CKDPCSCache *)arg1 ;
-(void)setRecordCacheByPrivateZoneID:(NSMutableDictionary *)arg1 ;
-(void)setBackgroundRecordCacheByPrivateZoneID:(NSMutableDictionary *)arg1 ;
-(void)setShareCache:(CKDPCSCache *)arg1 ;
-(void)setBackgroundShareCache:(CKDPCSCache *)arg1 ;
-(void)setSharingIdentity:(PCSIdentityDataRef)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id<NSObject>)contextObserver;
-(void)setContextObserver:(id<NSObject>)arg1 ;
@end


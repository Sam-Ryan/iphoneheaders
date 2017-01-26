/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray, SSDownload, SSPurchase, SSPurchaseResponse, NSError, NSString;

@interface MPStoreDownload : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _attributes;
	BOOL _canceled;
	NSMutableArray* _overridePhaseIdentifiers;
	SSDownload* _SSDownload;
	SSPurchase* _SSPurchase;
	SSPurchaseResponse* _SSPurchaseResponse;
	long long _type;

}

@property (nonatomic,readonly) NSDictionary * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) long long bytesDownloaded; 
@property (nonatomic,readonly) long long bytesTotal; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (nonatomic,readonly) long long downloadIdentifier; 
@property (nonatomic,readonly) long long downloadSizeLimit; 
@property (nonatomic,readonly) NSError * failureError; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isPurchasing,nonatomic,readonly) BOOL purchasing; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) unsigned long long libraryItemIdentifier; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) NSString * phaseIdentifier; 
@property (nonatomic,readonly) NSError * purchaseError; 
@property (nonatomic,readonly) NSDictionary * rentalInformation; 
@property (getter=isRestore,nonatomic,readonly) BOOL restore; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (nonatomic,readonly) long long type;                                        //@synthesize type=_type - In the implementation block
+(id)storeDownloadForPlaybackItemMetadata:(id)arg1 type:(long long)arg2 attributes:(id)arg3 ;
+(BOOL)canCreateStoreDownloadForPlaybackItemMetadata:(id)arg1 type:(long long)arg2 attributes:(id)arg3 ;
+(BOOL)_getEffectiveStoreDownloadAttributes:(id*)arg1 forPlaybackItemMetadata:(id)arg2 attributes:(id)arg3 ;
+(id)storeDownloadForMediaItem:(id)arg1 type:(long long)arg2 attributes:(id)arg3 ;
+(id)_SSPurchaseForType:(long long)arg1 attributes:(id)arg2 ;
+(id)storeDownloadForStoreOffer:(id)arg1 type:(long long)arg2 attributes:(id)arg3 ;
+(id)storeDownloadWithDownloadIdentifier:(long long)arg1 ;
+(id)storeDownloadForStoreItemOffer:(id)arg1 attributes:(id)arg2 ;
-(id)description;
-(double)percentComplete;
-(long long)type;
-(NSDictionary *)attributes;
-(BOOL)isFinished;
-(BOOL)isCanceled;
-(long long)downloadIdentifier;
-(id)assetsForType:(id)arg1 ;
-(id)initWithType:(long long)arg1 attributes:(id)arg2 ;
-(BOOL)isPurchasing;
-(void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2 ;
-(void)_setSSDownload:(id)arg1 ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(id)_SSPurchase;
-(long long)downloadSizeLimit;
-(BOOL)_isCanceled;
-(id)_SSPurchaseResponse;
-(id)_valueForDownloadProperty:(id)arg1 ;
-(id)_currentOverridePhaseIdentifier;
-(BOOL)isRestore;
-(unsigned long long)libraryItemIdentifier;
-(NSError *)purchaseError;
-(NSDictionary *)rentalInformation;
-(void)resetCachedRentalInformation;
-(void)_setCanceled:(BOOL)arg1 ;
-(void)_addOverridePhaseIdentifier:(id)arg1 ;
-(void)_removeOverridePhaseIdentifier:(id)arg1 ;
-(long long)storeItemIdentifier;
-(BOOL)isPaused;
-(id)_SSDownload;
-(NSString *)phaseIdentifier;
-(NSError *)failureError;
@end


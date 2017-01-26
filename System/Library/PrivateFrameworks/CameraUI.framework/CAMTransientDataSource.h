/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PUTransientDataSource.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSString;

@interface CAMTransientDataSource : NSObject <PUTransientDataSource> {

	NSHashTable* __observers;
	NSMutableArray* __assetUUIDs;
	NSMutableDictionary* __assetsByUUID;
	NSMutableDictionary* __representativeAssetsByBurstIdentifier;
	NSMutableDictionary* __enqueuedBurstAssetUUIDByBurstIdentifier;
	NSMutableDictionary* __enqueuedBurstConvertiblesByAssetUUID;
	long long __nestedPerformChanges;
	long long __pendingChangeNotifications;

}

@property (nonatomic,readonly) NSHashTable * _observers;                                                                //@synthesize _observers=__observers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _assetUUIDs;                                                            //@synthesize _assetUUIDs=__assetUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _assetsByUUID;                                                     //@synthesize _assetsByUUID=__assetsByUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _representativeAssetsByBurstIdentifier;                            //@synthesize _representativeAssetsByBurstIdentifier=__representativeAssetsByBurstIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _enqueuedBurstAssetUUIDByBurstIdentifier;                          //@synthesize _enqueuedBurstAssetUUIDByBurstIdentifier=__enqueuedBurstAssetUUIDByBurstIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _enqueuedBurstConvertiblesByAssetUUID;                             //@synthesize _enqueuedBurstConvertiblesByAssetUUID=__enqueuedBurstConvertiblesByAssetUUID - In the implementation block
@property (assign,setter=_setNestedPerformChanges:,nonatomic) long long _nestedPerformChanges;                          //@synthesize _nestedPerformChanges=__nestedPerformChanges - In the implementation block
@property (assign,setter=_setPendingChangeNotifications:,nonatomic) long long _pendingChangeNotifications;              //@synthesize _pendingChangeNotifications=__pendingChangeNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)registerChangeObserver:(id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(NSMutableArray *)_assetUUIDs;
-(NSMutableDictionary *)_assetsByUUID;
-(NSMutableDictionary *)_representativeAssetsByBurstIdentifier;
-(id)uuids;
-(id)transientAssetMapping;
-(id)transientBurstMapping;
-(NSHashTable *)_observers;
-(void)removeAssetWithUUID:(id)arg1 ;
-(id)existingRepresentativeAssetForBurstIdentifier:(id)arg1 ;
-(void)updateAssetWithConvertible:(id)arg1 ;
-(void)enqueuePendingBurstAssetWithConvertible:(id)arg1 ;
-(id)existingAssetForUUID:(id)arg1 ;
-(id)insertAssetWithConvertible:(id)arg1 ;
-(void)processPendingBurstAssets;
-(void)removeRepresentativeAssetForBurstIdentifier:(id)arg1 ;
-(void)removeAllAssets;
-(NSMutableDictionary *)_enqueuedBurstAssetUUIDByBurstIdentifier;
-(NSMutableDictionary *)_enqueuedBurstConvertiblesByAssetUUID;
-(void)_notifyObserversOfDataSourceChange;
-(BOOL)_removeAssetWithUUID:(id)arg1 ;
-(long long)_nestedPerformChanges;
-(void)_setPendingChangeNotifications:(long long)arg1 ;
-(void)_setNestedPerformChanges:(long long)arg1 ;
-(long long)_pendingChangeNotifications;
@end


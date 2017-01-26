/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSMutableDictionary, NSArray;

@interface PFUbiquitySaveSnapshot : NSObject {

	NSDate* _transactionDate;
	NSString* _modelVersionHash;
	NSString* _exportingPeerID;
	NSString* _localPeerID;
	NSMutableDictionary* _storeNameToStoreSaveSnapshots;

}

@property (nonatomic,retain) NSDate * transactionDate;                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;              //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (nonatomic,readonly) NSString * exportingPeerID;               //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
@property (nonatomic,readonly) NSArray * storeNames; 
@property (nonatomic,readonly) NSString * localPeerID;                   //@synthesize localPeerID=_localPeerID - In the implementation block
-(NSString *)modelVersionHash;
-(NSString *)localPeerID;
-(NSString *)exportingPeerID;
-(id)storeSaveSnapshotForStoreName:(id)arg1 ;
-(id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2 ;
-(NSArray *)storeNames;
-(id)storeSaveSnapshotForStore:(id)arg1 ;
-(id)initWithTransactionLog:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface TSPSaveOperationState : NSObject {

	NSMapTable* _newDataStorages;
	int _sampleID;
	unsigned long long _updateType;

}

@property (nonatomic,readonly) BOOL shouldUpdate; 
@property (nonatomic,readonly) unsigned long long updateType;              //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) int sampleID;                                 //@synthesize sampleID=_sampleID - In the implementation block
-(void)addNewStorage:(id)arg1 forData:(id)arg2 ;
-(BOOL)hasNewStorageForData:(id)arg1 ;
-(void)enumerateDatasAndStoragesUsingBlock:(/*^block*/id)arg1 ;
-(int)sampleID;
-(void)setSampleID:(int)arg1 ;
-(id)init;
-(BOOL)shouldUpdate;
-(unsigned long long)updateType;
-(id)initWithUpdateType:(unsigned long long)arg1 ;
@end


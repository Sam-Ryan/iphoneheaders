/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSFastEnumeration> {

	NSMutableArray* _records;
	NSMutableDictionary* _additionalRecords;
	NSMutableDictionary* _localResources;

}

@property (nonatomic,readonly) NSArray * records; 
+(BOOL)supportsSecureCoding;
-(void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4 ;
-(void)sortBatch;
-(void)extractInitialDownloadBatch:(id*)arg1 shouldConsiderRecordFilter:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)cplFullDescription;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CP4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(id)summaryDescription;
-(id)_additionalRecords;
-(void)_setAdditionalRecords:(id)arg1 ;
-(void)addRecordsFromBatch:(id)arg1 ;
-(void)_setRecords:(id)arg1 ;
-(id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudIdentifier:(id)arg2 ;
-(void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2 ;
-(void)_addAdditionalRecord:(id)arg1 ;
-(id)initWithRecords:(id)arg1 ;
-(id)_initWithRecords:(id)arg1 ;
-(id)extractDeletesFromBatchDeletedRecordIdentifiers:(id*)arg1 trashedRecordIdentifiers:(id*)arg2 ;
-(id)additionalRecordWithIdentifier:(id)arg1 ;
@end


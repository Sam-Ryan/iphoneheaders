/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary, NSSortDescriptor;

@interface HKSortedSampleArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _samples;
	NSMutableDictionary* _samplesByUUID;
	NSSortDescriptor* _sortDescriptor;

}

@property (nonatomic,retain) NSSortDescriptor * sortDescriptor;              //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HK1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(long long)count;
-(id)init;
-(void)_addResultsToUUIDMappingRemovingDuplicates:(id)arg1 ;
-(BOOL)removeSampleAtIndex:(long long)arg1 ;
-(BOOL)removeSample:(id)arg1 ;
-(BOOL)insertSamples:(id)arg1 ;
-(id)sampleAtIndex:(long long)arg1 ;
-(id)allSamples;
-(BOOL)removeSamplesWithUUIDs:(id)arg1 ;
-(void)removeAllSamples;
-(id)sampleEnumerator;
-(id)reverseSampleEnumerator;
-(NSSortDescriptor *)sortDescriptor;
-(void)setSortDescriptor:(NSSortDescriptor *)arg1 ;
@end


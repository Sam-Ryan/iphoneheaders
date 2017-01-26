/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class TSCHChartGrid, NSString;

@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration> {

	TSCHChartGrid* mGrid;
	unsigned long long mIndex;

}

@property (nonatomic,readonly) TSCHChartGrid * grid; 
@property (nonatomic,retain) NSString * name; 
-(id)initWithChartGrid:(id)arg1 index:(unsigned long long)arg2 ;
-(id*)valuesAtIndexes:(NSRange)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS25*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(TSCHChartGrid *)grid;
@end


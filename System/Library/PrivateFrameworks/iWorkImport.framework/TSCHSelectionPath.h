/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHSelectionPathType, NSArray;

@interface TSCHSelectionPath : NSObject <NSCopying> {

	TSCHSelectionPathType* mPathType;
	NSArray* mArguments;
	TSCHSelectionPath* mSubSelection;

}

@property (nonatomic,readonly) TSCHSelectionPathType * pathType; 
@property (nonatomic,readonly) TSCHSelectionPath * subSelection; 
+(id)selectionPathWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3 ;
+(id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)arg1 ;
+(id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)arg1 ;
+(id)seriesSelectionPathWithSeriesIndex:(unsigned long long)arg1 ;
+(id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 ;
+(id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3 ;
-(id)initWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3 ;
-(id)argumentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)argumentsCount;
-(id)debuggingName;
-(id)initWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3 ;
-(id)rangeOfReferenceLinePathsToPath:(id)arg1 forModel:(id)arg2 ;
-(id)rangeOfPathsToPath:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(id)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCHSelectionPath *)subSelection;
-(void)saveToArchive:(ChartSelectionPathArchive*)arg1 ;
-(TSCHSelectionPathType *)pathType;
-(id)initWithArchive:(const ChartSelectionPathArchive*)arg1 ;
@end


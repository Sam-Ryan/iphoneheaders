/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDCollection.h>

@interface EDReferenceCollection : EDCollection {

	BOOL mCoalesce;

}
+(id)noCoalesceCollection;
+(id)coalesceCollection;
-(void)coalesce;
-(BOOL)coalesceReferenceAtIndex1:(unsigned long long)arg1 index2:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(id)reverseReferencesByRow:(BOOL)arg1 ;
-(void)coalesceProgressiveCellReferencesCollection;
-(id)referenceToCellWithIndex:(unsigned long long)arg1 byRow:(BOOL)arg2 ;
-(id)initWihNoCoalesce;
@end


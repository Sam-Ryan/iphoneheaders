/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class NSMutableArray;

@interface TSTConditionalStyleSet : TSPObject <TSPCopying> {

	NSMutableArray* mConditionalStyleSetRules;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)copyByRemappingOwnerUIDsWithMap:(const TSUUuidMap*)arg1 calcEngine:(id)arg2 error:(BOOL*)arg3 ;
-(BOOL)containsUidReferences;
-(id)copyToGeometricFormWithCalcEngine:(id)arg1 tableID:(CFUUIDRef)arg2 containingCell:(SCD_Struct_TS315)arg3 ;
-(id)copyToUidFormWithCalcEngine:(id)arg1 tableID:(CFUUIDRef)arg2 containingCell:(SCD_Struct_TS315)arg3 preserveHostCell:(BOOL)arg4 ;
-(id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(SCD_Struct_TS315)arg3 ;
-(id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2 ;
-(id)copyByUpdatingHostCellRef:(const TSCECellRef*)arg1 ;
-(id)copyToUidFormForTableModel:(id)arg1 inCellCoordinate:(SCD_Struct_TS315)arg2 preserveHostCell:(BOOL)arg3 ;
-(id)copyToGeometricFormForTableModel:(id)arg1 inCellCoordinate:(SCD_Struct_TS315)arg2 ;
-(id)initWithContext:(id)arg1 rules:(id)arg2 ;
-(id)initWithConditionalStyleSet:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)ruleCount;
-(id)ruleAtIndex:(unsigned long long)arg1 ;
-(id)rules;
@end


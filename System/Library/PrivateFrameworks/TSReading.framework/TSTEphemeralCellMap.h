/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTCellMap.h>

@class NSString;

@interface TSTEphemeralCellMap : NSObject <TSTCellMap> {

	SCD_Struct_TS136* mCellIDs;
	id* mCells;
	unsigned long long mCapacity;
	unsigned long long mCount;
	BOOL mMayModifyValuesReferencedByFormulas;
	BOOL mIgnoreHiddenCellsWhenApplying;
	BOOL mAppliesToHidden;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL appliesToHidden; 
-(void)addCell:(id)arg1 andCellID:(SCD_Struct_TS136)arg2 ;
-(BOOL)containsCellID:(SCD_Struct_TS136)arg1 ;
-(void)popLastCell;
-(SCD_Struct_TS136*)cellIDs;
-(SCD_Struct_TS136)cellIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)mayModifyFormulasInCells;
-(BOOL)mayModifyValuesReferencedByFormulas;
-(void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1 ;
-(BOOL)appliesToHidden;
-(void)setAppliesToHidden:(BOOL)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)cellAtIndex:(unsigned long long)arg1 ;
@end

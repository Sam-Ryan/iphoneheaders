/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDFormula.h>

@class EDReferenceCollection, EDWorkbook;

@interface CHDFormula : EDFormula {

	EDReferenceCollection* mReferences;
	EDWorkbook* mWorkbook;

}
+(id)formulaWithReferences:(id)arg1 ;
+(id)formulaWithReference:(id)arg1 ;
-(id)referencesFromFormula;
-(void)dealloc;
-(id)references;
-(void)setWorkbook:(id)arg1 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(id)initWithReference:(id)arg1 ;
-(id)initWithReferences:(id)arg1 ;
-(BOOL)isConstantStringFormula;
-(id)constantValuesFromConstantStringFormula;
-(void)prepareTokens;
-(void)setReferences:(id)arg1 ;
-(id)initWithWorkbook:(id)arg1 ;
@end


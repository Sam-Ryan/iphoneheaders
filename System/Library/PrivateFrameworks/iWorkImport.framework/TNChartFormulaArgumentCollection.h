/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray;

@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying> {

	NSArray* mArray;
	BOOL mStoreBadRef;

}

@property (assign,nonatomic) BOOL storeBadRef; 
+(id)argumentCollectionFromFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 usingCalcEngine:(id)arg3 ;
-(id)elementEnumerator;
-(id)initWithFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 usingCalcEngine:(id)arg3 storeBadRef:(BOOL)arg4 ;
-(id)initWithFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 usingCalcEngine:(id)arg3 ;
-(id)wrappedChartFormulaWithID:(SCD_Struct_TS320)arg1 andLocale:(id)arg2 ;
-(id)reverseElementEnumerator;
-(BOOL)storeBadRef;
-(void)setStoreBadRef:(BOOL)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS25*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)firstElement;
-(id)lastElement;
-(id)elementAtIndex:(unsigned long long)arg1 ;
@end


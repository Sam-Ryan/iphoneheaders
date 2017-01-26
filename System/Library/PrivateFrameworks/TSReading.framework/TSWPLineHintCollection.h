/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>

@interface TSWPLineHintCollection : TSPObject {

	SCD_Struct_TS127* mHints;
	unsigned long long mHintsCount;
	BOOL mValid;
	BOOL mHasColumnIndices;
	TSWPLineHintCollection* mContainingCollection;

}

@property (nonatomic,readonly) const SCD_Struct_TS127* hints; 
@property (nonatomic,readonly) unsigned long long hintsCount; 
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) BOOL hasColumnIndices; 
-(id)descriptionWithStorage:(id)arg1 ;
-(NSRange)hintRangeForColumnIndex:(unsigned long long)arg1 frameBounds:(CGRect)arg2 charIndex:(unsigned long long)arg3 ;
-(NSRange)hintRangeForLineStartingAtHintIndex:(unsigned long long)arg1 ;
-(BOOL)hasColumnIndices;
-(BOOL)checkSubCollectionRange:(NSRange)arg1 ;
-(id)initWithContainingCollection:(id)arg1 range:(NSRange)arg2 context:(id)arg3 ;
-(unsigned long long)hintsCount;
-(unsigned long long)p_columnIndexForHintIndex:(unsigned long long)arg1 ;
-(id)newSubCollectionWithRange:(NSRange)arg1 ;
-(void)dealloc;
-(BOOL)valid;
-(const SCD_Struct_TS127*)hints;
@end


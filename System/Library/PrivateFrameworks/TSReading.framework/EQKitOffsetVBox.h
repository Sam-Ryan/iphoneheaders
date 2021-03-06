/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitVBox.h>

@interface EQKitOffsetVBox : EQKitVBox {

	double mOffset;

}

@property (nonatomic,readonly) double offset; 
-(id)initWithChildBoxes:(id)arg1 ;
-(void)p_cacheDimensionsForHeight:(double*)arg1 depth:(double*)arg2 width:(double*)arg3 ;
-(id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2 ;
-(id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2 offset:(double)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)offset;
@end


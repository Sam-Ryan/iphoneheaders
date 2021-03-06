/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@class NSArray;

@interface EQKitCompoundBox : EQKitBox {

	NSArray* mChildBoxes;
	double mHeight;
	double mDepth;
	double mWidth;
	BOOL mDimensionsValid;
	CGRect mErasableBounds;
	BOOL mErasableBoundsValid;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) NSArray * childBoxes; 
-(CGRect)erasableBounds;
-(CGRect)p_cacheErasableBounds;
-(id)initWithChildBoxes:(id)arg1 ;
-(NSArray *)childBoxes;
-(void)p_cacheDimensionsForHeight:(double*)arg1 depth:(double*)arg2 width:(double*)arg3 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(double)height;
-(double)depth;
@end


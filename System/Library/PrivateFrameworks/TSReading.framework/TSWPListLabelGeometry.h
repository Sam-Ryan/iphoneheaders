/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPListLabelGeometry : NSObject {

	double mScale;
	double mBaselineOffset;
	BOOL mScaleWithText;

}

@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double baselineOffset; 
@property (assign,nonatomic) BOOL scaleWithText; 
+(id)listLabelGeometry;
-(id)initWithScale:(double)arg1 scaleWithText:(BOOL)arg2 baselineOffset:(double)arg3 ;
-(BOOL)scaleWithText;
-(void)setScaleWithText:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor, NSArray, TSUBezierPath;

@interface MFPPathGradientBrush : MFPGradientBrush {

	OITSUColor* mCenterColor;
	CGPoint mCenterPoint;
	NSArray* mSurroundColors;
	TSUBezierPath* mPath;

}
-(void)dealloc;
-(void)setPath:(id)arg1 ;
-(void)setCenterColor:(id)arg1 ;
-(void)setCenterPoint:(CGPoint)arg1 ;
-(void)setSurroundColors:(id)arg1 ;
-(void)createShading;
-(id)startColor;
-(id)endColor;
@end


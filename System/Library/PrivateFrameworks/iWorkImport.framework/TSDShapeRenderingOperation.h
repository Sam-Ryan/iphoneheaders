/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDSwatchRenderingOperation.h>

@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation {

	int mShapeType;
	double mAngle;

}
-(UIEdgeInsets)swatchEdgeInsets;
-(BOOL)needsPressedStateBackground;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7 ;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 shapeType:(int)arg5 documentRoot:(id)arg6 ;
@end


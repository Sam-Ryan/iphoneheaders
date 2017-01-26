/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableLayout.h>

@interface TSDStyledLayout : TSDDrawableLayout {

	BOOL mIsUpdatingOpacity;
	double mDynamicOpacity;

}

@property (nonatomic,readonly) double opacity; 
-(CGRect)frameForCulling;
-(CGRect)alignmentFrameInRoot;
-(CGRect)aliasedAlignmentFrameForScale:(double)arg1 ;
-(CGRect)i_baseFrame;
-(id)styledInfo;
-(CGRect)reflectionBoundsForRect:(CGRect)arg1 ;
-(CGRect)shadowedNaturalBoundsWithoutOffset;
-(CGRect)reflectionFrame;
-(CGRect)reflectionFrameInRoot;
-(CGRect)reflectionFrameForSubRect:(CGRect)arg1 ;
-(double)opacity;
-(BOOL)isInvisible;
@end

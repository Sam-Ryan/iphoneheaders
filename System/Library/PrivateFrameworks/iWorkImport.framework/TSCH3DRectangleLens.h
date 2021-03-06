/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DLens.h>

@interface TSCH3DRectangleLens : TSCH3DLens {

	float mLeft;
	float mRight;
	float mBottom;
	float mTop;

}

@property (assign,nonatomic) float left; 
@property (assign,nonatomic) float right; 
@property (assign,nonatomic) float bottom; 
@property (assign,nonatomic) float top; 
@property (nonatomic,readonly) float width; 
@property (nonatomic,readonly) float height; 
-(void)deviceNormalize;
-(void)setPerPixelSize:(tvec2<int>*)arg1 ;
-(id)narrowByNormalizedBounds:(box<glm::detail::tvec2<float> >*)arg1 ;
-(id)shiftByPercentage:(tvec2<float>*)arg1 ;
-(FrustumRect)frustumRect;
-(void)setPerPixel:(box<glm::detail::tvec2<int> >*)arg1 ;
-(id)narrowedByNormalizedBounds:(box<glm::detail::tvec2<float> >*)arg1 ;
-(id)shiftedByPercentage:(tvec2<float>*)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)width;
-(float)height;
-(void)setLeft:(float)arg1 ;
-(void)normalize;
-(float)left;
-(float)top;
-(float)right;
-(float)bottom;
-(void)setTop:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setBottom:(float)arg1 ;
@end


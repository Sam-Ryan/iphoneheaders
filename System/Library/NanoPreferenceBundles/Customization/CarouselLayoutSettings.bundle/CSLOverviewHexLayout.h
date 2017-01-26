/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <CarouselLayoutSettings/CSLHexLayout.h>

@class CSLUniformHexLayout;

@interface CSLOverviewHexLayout : CSLHexLayout {

	CGSize _quadrantSize;
	CGSize _normalizedGraphQuadrantSize;
	BOOL _constantsDirty;
	float _scale;
	float _normalizedGraphRadius;
	CSLUniformHexLayout* _uniformLayout;
	BOOL _fitsToQuadrantSize;
	double _maxScale;
	double _falloffPercentage;
	double _diameterScale;

}

@property (assign,nonatomic) double maxScale;                       //@synthesize maxScale=_maxScale - In the implementation block
@property (assign,nonatomic) double falloffPercentage;              //@synthesize falloffPercentage=_falloffPercentage - In the implementation block
@property (assign,nonatomic) double diameterScale;                  //@synthesize diameterScale=_diameterScale - In the implementation block
@property (assign,nonatomic) BOOL fitsToQuadrantSize;               //@synthesize fitsToQuadrantSize=_fitsToQuadrantSize - In the implementation block
-(void)updateWithBounds:(CGRect)arg1 ;
-(double)falloffPercentage;
-(void)setDiameterScale:(double)arg1 ;
-(SCD_Struct_CS1)layoutAttributesForItemAtHex:(Hex)arg1 ;
-(void)setFalloffPercentage:(double)arg1 ;
-(BOOL)fitsToQuadrantSize;
-(void)setFitsToQuadrantSize:(BOOL)arg1 ;
-(void)updateWithNormalizedGraphQuadrantSize:(CGSize)arg1 ;
-(void)updateConstants;
-(double)diameterScale;
-(id)initWithDefaultPixelDiameter:(double)arg1 ;
-(Hex)hexAtPoint:(CGPoint)arg1 ;
-(double)maxScale;
-(void)setMaxScale:(double)arg1 ;
@end

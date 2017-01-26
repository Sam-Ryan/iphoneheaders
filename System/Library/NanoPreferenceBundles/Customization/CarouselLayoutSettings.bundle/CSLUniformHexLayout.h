/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <CarouselLayoutSettings/CSLHexLayout.h>

@interface CSLUniformHexLayout : CSLHexLayout {

	double _diameter;
	double _hexSideSize;

}

@property (assign,nonatomic) double hexSideSize;              //@synthesize hexSideSize=_hexSideSize - In the implementation block
-(SCD_Struct_CS1)layoutAttributesForItemAtHex:(Hex)arg1 ;
-(double)hexSideSize;
-(float)hexSideSizeWithCenterDiameter:(double)arg1 ;
-(void)setHexSideSize:(double)arg1 ;
-(id)initWithDefaultPixelDiameter:(double)arg1 ;
-(Hex)hexAtPoint:(CGPoint)arg1 ;
@end


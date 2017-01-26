/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIToolbar.h>

@class UIImage;

@interface TSDiOSToolbar : UIToolbar {

	UIImage* mBackgroundImage;
	BOOL mDrawsBackground;
	double mShadowOpacity;
	CGSize mShadowOffset;
	double mShadowRadius;
	double mShadowX;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (assign,nonatomic) BOOL drawsBackground; 
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (assign,nonatomic) double shadowX; 
-(void)p_updateLayerFlags;
-(void)setupShadowPath;
-(void)setShadowX:(double)arg1 ;
-(double)shadowX;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIImage *)backgroundImage;
-(CGSize)shadowOffset;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(double)shadowRadius;
-(double)shadowOpacity;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(BOOL)drawsBackground;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
@end

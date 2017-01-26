/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRCAMLLayer.h>

@class MRImage, MRTextRenderer;

@interface MRCAMLTextLayer : MRCAMLLayer {

	MRImage* textImage;
	MRTextRenderer* textRenderer;

}

@property (nonatomic,retain) MRImage * textImage; 
@property (nonatomic,retain) MRTextRenderer * textRenderer; 
-(void)setTextRenderer:(MRTextRenderer *)arg1 ;
-(MRTextRenderer *)textRenderer;
-(void)setTextImage:(MRImage *)arg1 ;
-(MRImage *)textImage;
-(void)dealloc;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class CALayer;

@interface SCNLayerSource : SCNImageSource {

	CALayer* _layer;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(CALayer *)layer;
-(void)dealloc;
-(void)setLayer:(CALayer *)arg1 ;
-(BOOL)isOpaque;
-(id)textureSource;
@end


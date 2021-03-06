/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CALayer.h>
#import <iWorkImport/TSCHMultiDataAnimatingFrameLayerProtocol.h>

@interface TSCHMultiDataAnimatingFrameLayer : CALayer <TSCHMultiDataAnimatingFrameLayerProtocol> {

	CGRect mPresentationBounds;
	CGPoint mPresentationPosition;

}

@property (assign,nonatomic) CGRect presentationBounds; 
@property (assign,nonatomic) CGPoint presentationPosition; 
-(void)setPresentationBounds:(CGRect)arg1 ;
-(void)setPresentationPosition:(CGPoint)arg1 ;
-(CGRect)presentationBounds;
-(CGPoint)presentationPosition;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(CGRect)currentFrame;
@end


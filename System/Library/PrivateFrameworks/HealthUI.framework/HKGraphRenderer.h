/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKGraphRenderer <NSObject>
@property (assign,nonatomic) CGRect axisRect; 
@property (assign,nonatomic,__weak) id<HKGraphRenderDelegate> renderDelegate; 
@required
-(id<HKGraphRenderDelegate>)renderDelegate;
-(void)setRenderDelegate:(id)arg1;
-(void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(BOOL)arg5 clipToAxes:(BOOL)arg6;
-(void)fillRect:(CGRect)arg1 withTexture:(id)arg2;
-(void)drawText:(id)arg1 atPoint:(CGPoint)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 textColor:(id)arg5 font:(id)arg6 clipToAxis:(BOOL)arg7;
-(void)setNeedsRender;
-(CGRect)axisRect;
-(void)setAxisRect:(CGRect)arg1;

@end


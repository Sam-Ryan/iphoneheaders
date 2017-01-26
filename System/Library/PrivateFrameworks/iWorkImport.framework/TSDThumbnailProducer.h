/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDThumbnailProducer <NSObject>
@optional
-(BOOL)shouldReuseBitmapContext;
-(BOOL)distortedToMatch;
-(BOOL)reuseThumbnailerUntilIdleForIdentifier:(id)arg1;
-(void)configureImager:(id)arg1 forIdentifier:(id)arg2;
-(BOOL)suppressOverlayLayerForIdentifier:(id)arg1;

@required
-(id)rootInfosForIdentifier:(id)arg1;
-(CGSize*)thumbnailSizeForIdentifier:(id)arg1;
-(CGRect*)unscaledClipRectForIdentifier:(id)arg1;

@end


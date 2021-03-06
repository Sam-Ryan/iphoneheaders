/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLUIImageViewController.h>

@interface PLUIEditImageViewController : PLUIImageViewController {

	id _delegate;
	int _saveOptions;
	int _mode;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                 //@synthesize mode=_mode - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(int)imageFormat;
-(id)imageTile;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(int)cropOverlayMode;
-(unsigned long long)_contentAutoresizingMask;
-(unsigned long long)_tileAutoresizingMask;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)setImageSavingOptions:(int)arg1 ;
-(int)saveOptions;
-(id)photo;
-(id)initWithPhoto:(id)arg1 ;
-(void)cropOverlayWasOKed:(id)arg1 ;
@end


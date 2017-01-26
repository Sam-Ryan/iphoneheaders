/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@class UIImageView, MusicClientContext, NSString, SKUIClientContext;

@interface MusicWelcomePlaceholderView : UIView <MusicClientContextConsuming> {

	UIImageView* _backgroundImageView;
	double _logoImageTopInset;
	UIImageView* _logoImageView;
	MusicClientContext* _clientContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_reloadWelcomePlaceholderImages;
-(void)_handleUpdatableAssetsControllerDidChangeNotification:(id)arg1 ;
-(id)_resourceNameForWelcomeScreenImageConfiguration:(id)arg1 ;
@end


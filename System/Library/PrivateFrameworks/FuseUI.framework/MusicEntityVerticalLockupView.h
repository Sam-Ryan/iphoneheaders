/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityAbstractLockupView.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>
#import <libobjc.A.dylib/MusicEntityViewDownloadInformationObserving.h>

@protocol MusicEntityVerticalLockupViewDelegate;
@class MusicEntityViewContentDescriptor, UIImageView, NSString;

@interface MusicEntityVerticalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring, MusicEntityViewDownloadInformationObserving> {

	UIImageView* _availableOfflineBadgeImageView;
	BOOL _isAvailableOffline;
	double _textLateralEdgePadding;
	id<MusicEntityVerticalLockupViewDelegate> _delegate;
	MusicEntityDownloadInformation _downloadInformation;

}

@property (assign,nonatomic,__weak) id<MusicEntityVerticalLockupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) MusicEntityDownloadInformation downloadInformation;                     //@synthesize downloadInformation=_downloadInformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
-(void)setDelegate:(id<MusicEntityVerticalLockupViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MusicEntityVerticalLockupViewDelegate>)delegate;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(void)_handlePlayButtonTappedWithAction:(unsigned long long)arg1 ;
-(void)setTextLateralEdgePadding:(double)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(void)setDownloadInformation:(MusicEntityDownloadInformation)arg1 ;
-(BOOL)_shouldEnableArtworkViewUserInteraction;
-(BOOL)_shouldArtworkViewRespectHighlightProperty;
-(MusicEntityDownloadInformation)downloadInformation;
@end


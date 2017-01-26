/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicVerticalScrollingContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicMediaDetailSplitViewController.h>

@protocol MusicMediaDetailSplitViewControllerDelegate;
@class MusicVerticalScrollingContainerViewController, MusicClientContext, MusicMediaDetailTintInformation, UIViewController, NSString;

@interface MusicMediaProfileSplitDetailViewController : UIViewController <MusicVerticalScrollingContainerViewControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController> {

	MusicVerticalScrollingContainerViewController* _verticalScrollingContainerViewController;
	MusicClientContext* _clientContext;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	id<MusicMediaDetailSplitViewControllerDelegate> _mediaSplitViewControllerDelegate;
	UIViewController* _relatedContentViewController;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                                                                   //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                                           //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaDetailSplitViewControllerDelegate> mediaSplitViewControllerDelegate;              //@synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate - In the implementation block
@property (nonatomic,retain) UIViewController * relatedContentViewController;                                                      //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(void)_applyTintInformation;
-(void)_reloadVerticalScrollingContainerItems;
-(id<MusicMediaDetailSplitViewControllerDelegate>)mediaSplitViewControllerDelegate;
-(void)verticalScrollingContainerViewControllerDidScroll:(id)arg1 ;
-(void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1 ;
-(void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(void)setMediaSplitViewControllerDelegate:(id<MusicMediaDetailSplitViewControllerDelegate>)arg1 ;
-(void)setRelatedContentViewController:(UIViewController *)arg1 ;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(UIViewController *)relatedContentViewController;
@end


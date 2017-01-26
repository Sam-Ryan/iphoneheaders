/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIBaseSnippetViewController.h>

@protocol SiriUIReusableView;
@class UICollectionReusableView, NSAttributedString, NSString, NSArray, SAUIAppPunchOut, SAUIConfirmationOptions;

@interface SiriUISnippetViewController : SiriUIBaseSnippetViewController {

	UICollectionReusableView*<SiriUIReusableView> _headerView;
	UICollectionReusableView*<SiriUIReusableView> _footerView;
	UICollectionReusableView*<SiriUIReusableView> _transparentHeaderView;
	UICollectionReusableView*<SiriUIReusableView> _transparentFooterView;
	BOOL _topKeylineHidden;
	BOOL _wantsConfirmationInsets;
	BOOL _isFullPadWidth;
	BOOL _isTransparent;
	BOOL _loading;
	BOOL _confirmed;
	BOOL _cancelled;
	BOOL _virgin;
	BOOL _willAnimateConfirmation;
	BOOL _willAnimateCancellation;
	BOOL _showHeaderChevron;
	BOOL _provisional;
	NSAttributedString* _attributedSubtitle;
	NSString* _navigationTitle;
	NSArray* _requestContext;
	SAUIAppPunchOut* _headerPunchOut;
	SAUIAppPunchOut* _snippetPunchOut;
	long long _defaultKeylineType;
	SAUIConfirmationOptions* _previousConfirmationOptions;
	UIEdgeInsets _defaultViewInsets;

}

@property (assign,nonatomic,__weak) id<SiriUISnippetViewControllerDelegate> delegate; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitle;                                                                                                          //@synthesize attributedSubtitle=_attributedSubtitle - In the implementation block
@property (assign,nonatomic) BOOL topKeylineHidden;                                                                                                                          //@synthesize topKeylineHidden=_topKeylineHidden - In the implementation block
@property (nonatomic,copy) NSString * navigationTitle;                                                                                                                       //@synthesize navigationTitle=_navigationTitle - In the implementation block
@property (nonatomic,copy) NSArray * requestContext;                                                                                                                         //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * headerPunchOut;                                                                                                               //@synthesize headerPunchOut=_headerPunchOut - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * snippetPunchOut;                                                                                                              //@synthesize snippetPunchOut=_snippetPunchOut - In the implementation block
@property (assign,nonatomic) UIEdgeInsets defaultViewInsets;                                                                                                                 //@synthesize defaultViewInsets=_defaultViewInsets - In the implementation block
@property (assign,nonatomic) BOOL wantsConfirmationInsets;                                                                                                                   //@synthesize wantsConfirmationInsets=_wantsConfirmationInsets - In the implementation block
@property (assign,nonatomic) BOOL isFullPadWidth;                                                                                                                            //@synthesize isFullPadWidth=_isFullPadWidth - In the implementation block
@property (assign,nonatomic) BOOL isTransparent;                                                                                                                             //@synthesize isTransparent=_isTransparent - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                                                                                                  //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isConfirmed,nonatomic) BOOL confirmed;                                                                                                              //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                                                                                              //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isVirgin,nonatomic,readonly) BOOL virgin;                                                                                                                  //@synthesize virgin=_virgin - In the implementation block
@property (assign,nonatomic) long long defaultKeylineType;                                                                                                                   //@synthesize defaultKeylineType=_defaultKeylineType - In the implementation block
@property (assign,setter=_setWillAnimateConfirmation:,getter=_willAnimateConfirmation,nonatomic) BOOL willAnimateConfirmation;                                               //@synthesize willAnimateConfirmation=_willAnimateConfirmation - In the implementation block
@property (assign,setter=_setWillAnimateCancellation:,getter=_willAnimateCancellation,nonatomic) BOOL willAnimateCancellation;                                               //@synthesize willAnimateCancellation=_willAnimateCancellation - In the implementation block
@property (setter=_setPreviousConfirmationOptions:,getter=_previousConfirmationOptions,nonatomic,retain) SAUIConfirmationOptions * previousConfirmationOptions;              //@synthesize previousConfirmationOptions=_previousConfirmationOptions - In the implementation block
@property (assign,nonatomic) BOOL showHeaderChevron;                                                                                                                         //@synthesize showHeaderChevron=_showHeaderChevron - In the implementation block
@property (assign,setter=_setProvisional:,getter=_isProvisional,nonatomic) BOOL provisional;                                                                                 //@synthesize provisional=_provisional - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isLoading;
-(BOOL)isTransparent;
-(id)_privateDelegate;
-(NSString *)navigationTitle;
-(id)_footerView;
-(void)setAttributedSubtitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitle;
-(void)setLoading:(BOOL)arg1 ;
-(id)_headerView;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setManageBackgroundColor:(BOOL)arg1 ;
-(void)setDefaultViewInsets:(UIEdgeInsets)arg1 ;
-(Class)transparentFooterViewClass;
-(void)configureReusableTransparentFooterView:(id)arg1 ;
-(double)desiredHeightForTransparentFooterView;
-(BOOL)removedAfterDialogProgresses;
-(BOOL)isVirgin;
-(void)_setVirgin:(BOOL)arg1 ;
-(long long)_pinAnimationType;
-(long long)_insertionAnimation;
-(long long)_replacementAnimation;
-(void)setTopKeylineHidden:(BOOL)arg1 ;
-(void)siriWillLayoutSnippetView;
-(void)_cellDidLayoutSubviews;
-(void)siriDidLayoutSnippetView;
-(BOOL)_hasConfirmationButtons;
-(BOOL)_willAnimateConfirmation;
-(BOOL)_willAnimateCancellation;
-(Class)footerViewClass;
-(BOOL)_hasConfirmationOrCancelledInsets;
-(double)desiredHeightForHeaderView;
-(double)desiredHeightForFooterView;
-(double)desiredHeightForTransparentHeaderView;
-(id)_transparentHeaderView;
-(id)_transparentFooterView;
-(UIEdgeInsets)defaultViewInsets;
-(SAUIAppPunchOut *)snippetPunchOut;
-(void)_snippetPunchOutButtonTapped;
-(SAUIAppPunchOut *)headerPunchOut;
-(BOOL)showHeaderChevron;
-(void)setIsFullPadWidth:(BOOL)arg1 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
-(void)setWantsConfirmationInsets:(BOOL)arg1 ;
-(void)setShowHeaderChevron:(BOOL)arg1 ;
-(BOOL)_isProvisional;
-(BOOL)wantsConfirmationInsets;
-(id)_previousConfirmationOptions;
-(void)configureReusableFooterView:(id)arg1 ;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(BOOL)topKeylineHidden;
-(void)headerTapped:(id)arg1 ;
-(void)confirmButtonTapped:(id)arg1 ;
-(Class)transparentHeaderViewClass;
-(id)_createReusableViewIfNeededWithClass:(Class)arg1 ;
-(void)willCancel;
-(void)willConfirm;
-(BOOL)isMemoryIntensive;
-(void)_snippetViewControllerWillBeRemoved;
-(id)alternativeAceCommandsToPerformIfNotExposingViews;
-(void)setNavigationTitle:(NSString *)arg1 ;
-(NSArray *)requestContext;
-(void)setRequestContext:(NSArray *)arg1 ;
-(void)setHeaderPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setSnippetPunchOut:(SAUIAppPunchOut *)arg1 ;
-(BOOL)isFullPadWidth;
-(void)setIsTransparent:(BOOL)arg1 ;
-(long long)defaultKeylineType;
-(void)setDefaultKeylineType:(long long)arg1 ;
-(void)_setWillAnimateConfirmation:(BOOL)arg1 ;
-(void)_setWillAnimateCancellation:(BOOL)arg1 ;
-(void)_setPreviousConfirmationOptions:(id)arg1 ;
-(void)_setProvisional:(BOOL)arg1 ;
-(BOOL)isConfirmed;
-(void)setConfirmed:(BOOL)arg1 ;
@end


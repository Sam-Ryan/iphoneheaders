/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>
#import <libobjc.A.dylib/SKUIPreviewContainerView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class NSMapTable, SKUITracklistColumnData, NSMutableDictionary, SUPlayerStatus, SKUIGradientView, SKUIPreviewProgressIndicator, UIView, SKUITrackViewElement, NSString;

@interface SKUITracklistLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIPreviewContainerView, SKUIViewElementView> {

	NSMapTable* _buyButtonDescriptorToButton;
	SKUITracklistColumnData* _columnData;
	NSMutableDictionary* _columnViewsByIndex;
	NSMapTable* _imageViewToImageResourceCacheKey;
	SUPlayerStatus* _lastPlayerStatus;
	SKUIGradientView* _offerConfirmationGradientView;
	SKUIPreviewProgressIndicator* _previewProgressIndicator;
	long long _previewState;
	UIView* _separatorView;
	SKUITrackViewElement* _track;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)showPreviewProgressWithStatus:(id)arg1 animated:(BOOL)arg2 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
-(id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2 ;
-(void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1 ;
-(id)_previewMediaURL;
-(void)hidePreviewProgressAnimated:(BOOL)arg1 ;
-(void)togglePreviewPlaybackAnimated:(BOOL)arg1 ;
-(id)_previewColumnView;
-(id)_previewControlViewElement;
-(void)_enumerateViewElementViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)_layoutConfirmationGradientRelativeToView:(id)arg1 alpha:(double)arg2 ;
@end


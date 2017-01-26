/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUCellConfigurationView;
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class UIView;

@interface SUCellConfiguration : NSObject {

	id _context;
	unsigned _isDeleteConfirmationVisible : 1;
	CGSize _layoutSize;
	unsigned _needsDisplay : 1;
	id _representedObject;
	UIView*<SUCellConfigurationView> _view;

}

@property (nonatomic,retain) id context; 
@property (nonatomic,retain) id representedObject;                               //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,nonatomic) CGSize layoutSize;                                  //@synthesize layoutSize=_layoutSize - In the implementation block
@property (assign,nonatomic) BOOL needsDisplay; 
@property (assign,nonatomic) UIView*<SUCellConfigurationView> view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImages; 
@property (nonatomic,readonly) unsigned long long numberOfLabels; 
@property (assign,nonatomic) BOOL isDeleteConfirmationVisible; 
+(double)minimumRowHeight;
+(double)rowHeightForContext:(id)arg1 representedObject:(id)arg2 ;
+(id)copyDefaultContext;
-(void)dealloc;
-(void)reloadData;
-(UIView*<SUCellConfigurationView>)view;
-(void)setView:(UIView*<SUCellConfigurationView>)arg1 ;
-(id)context;
-(BOOL)needsDisplay;
-(void)setNeedsDisplay:(BOOL)arg1 ;
-(CGSize)layoutSize;
-(void)setContext:(id)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(unsigned long long)indexOfLabelForPurchaseAnimation;
-(void)setLayoutSize:(CGSize)arg1 ;
-(void)drawBackgroundWithModifiers:(unsigned long long)arg1 ;
-(void)drawWithModifiers:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLabels;
-(id)stringForLabelAtIndex:(unsigned long long)arg1 ;
-(CGRect)frameForLabelAtIndex:(unsigned long long)arg1 ;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1 ;
-(BOOL)getShadowColor:(id*)arg1 offset:(CGSize*)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4 ;
-(id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(CGRect)frameForImageAtIndex:(unsigned long long)arg1 ;
-(BOOL)isDeleteConfirmationVisible;
-(void)setIsDeleteConfirmationVisible:(BOOL)arg1 ;
-(CGRect)frameForAccessoryViewWithFrame:(CGRect)arg1 ;
-(unsigned long long)numberOfImages;
@end


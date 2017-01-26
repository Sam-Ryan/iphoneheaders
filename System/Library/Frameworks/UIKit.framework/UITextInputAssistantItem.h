/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIKeyboardAssistantBar, NSArray, UIColor;

@interface UITextInputAssistantItem : NSObject {

	UIKeyboardAssistantBar* _owner;
	BOOL _allowsHidingShortcuts;
	BOOL _independentGroupSizes;
	NSArray* _leadingBarButtonGroups;
	NSArray* _trailingBarButtonGroups;
	NSArray* _centerBarButtonGroups;
	double _marginOverride;
	UIColor* _detachedBackgroundColor;
	UIColor* _detachedTintColor;

}

@property (assign,nonatomic) BOOL allowsHidingShortcuts;                                                                                         //@synthesize allowsHidingShortcuts=_allowsHidingShortcuts - In the implementation block
@property (nonatomic,copy) NSArray * leadingBarButtonGroups;                                                                                     //@synthesize leadingBarButtonGroups=_leadingBarButtonGroups - In the implementation block
@property (nonatomic,copy) NSArray * trailingBarButtonGroups;                                                                                    //@synthesize trailingBarButtonGroups=_trailingBarButtonGroups - In the implementation block
@property (setter=_setCenterBarButtonGroups:,getter=_centerBarButtonGroups,nonatomic,copy) NSArray * centerBarButtonGroups;                      //@synthesize centerBarButtonGroups=_centerBarButtonGroups - In the implementation block
@property (assign,setter=_setIndependentGroupSizes:,getter=_independentGroupSizes,nonatomic) BOOL independentGroupSizes;                         //@synthesize independentGroupSizes=_independentGroupSizes - In the implementation block
@property (assign,setter=_setMarginOverride:,getter=_marginOverride,nonatomic) double marginOverride;                                            //@synthesize marginOverride=_marginOverride - In the implementation block
@property (setter=_setDetachedBackgroundColor:,getter=_detachedBackgroundColor,nonatomic,retain) UIColor * detachedBackgroundColor;              //@synthesize detachedBackgroundColor=_detachedBackgroundColor - In the implementation block
@property (setter=_setDetachedTintColor:,getter=_detachedTintColor,nonatomic,retain) UIColor * detachedTintColor;                                //@synthesize detachedTintColor=_detachedTintColor - In the implementation block
@property (assign,setter=_setOwner:,getter=_owner,nonatomic,__weak) UIKeyboardAssistantBar * owner; 
@property (getter=_hasItemsToDisplay,nonatomic,readonly) BOOL hasItemsToDisplay; 
@property (getter=_requiresPredictionDisabled,nonatomic,readonly) BOOL requiresPredictionDisabled; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)_owner;
-(NSArray *)leadingBarButtonGroups;
-(void)setLeadingBarButtonGroups:(NSArray *)arg1 ;
-(NSArray *)trailingBarButtonGroups;
-(void)setTrailingBarButtonGroups:(NSArray *)arg1 ;
-(BOOL)_independentGroupSizes;
-(void)_setOwner:(id)arg1 ;
-(BOOL)_hasItemsToDisplay;
-(BOOL)_requiresPredictionDisabled;
-(void)_setCenterBarButtonGroups:(id)arg1 ;
-(void)_setIndependentGroupSizes:(BOOL)arg1 ;
-(void)_setMarginOverride:(double)arg1 ;
-(BOOL)allowsHidingShortcuts;
-(void)setAllowsHidingShortcuts:(BOOL)arg1 ;
-(id)_centerBarButtonGroups;
-(double)_marginOverride;
-(id)_detachedBackgroundColor;
-(void)_setDetachedBackgroundColor:(id)arg1 ;
-(id)_detachedTintColor;
-(void)_setDetachedTintColor:(id)arg1 ;
@end


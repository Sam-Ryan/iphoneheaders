/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIBarButtonItemGroupOwner;
@class NSMutableArray, UIBarButtonItem, _UIButtonGroupViewController, NSArray;

@interface UIBarButtonItemGroup : NSObject <NSCoding> {

	NSMutableArray* _barButtonItems;
	BOOL _hidden;
	BOOL _locked;
	float _priority;
	UIBarButtonItem* _representativeItem;
	double _minimumLeadingSpace;
	double _minimumTrailingSpace;
	id<_UIBarButtonItemGroupOwner> _owner;
	_UIButtonGroupViewController* _representativeUI;

}

@property (nonatomic,copy) NSArray * barButtonItems; 
@property (nonatomic,retain) UIBarButtonItem * representativeItem;                                                                               //@synthesize representativeItem=_representativeItem - In the implementation block
@property (getter=isDisplayingRepresentativeItem,nonatomic,readonly) BOOL displayingRepresentativeItem; 
@property (assign,setter=_setHidden:,getter=_isHidden,nonatomic) BOOL hidden;                                                                    //@synthesize hidden=_hidden - In the implementation block
@property (assign,setter=_setMinimumLeadingSpace:,getter=_minimumLeadingSpace,nonatomic) double minimumLeadingSpace;                             //@synthesize minimumLeadingSpace=_minimumLeadingSpace - In the implementation block
@property (assign,setter=_setMinimumTrailingSpace:,getter=_minimumTrailingSpace,nonatomic) double minimumTrailingSpace;                          //@synthesize minimumTrailingSpace=_minimumTrailingSpace - In the implementation block
@property (assign,setter=_setPriority:,getter=_priority,nonatomic) float priority;                                                               //@synthesize priority=_priority - In the implementation block
@property (getter=_items,nonatomic,readonly) NSArray * items; 
@property (assign,setter=_setOwner:,getter=_owner,nonatomic,__weak) id<_UIBarButtonItemGroupOwner> owner;                                        //@synthesize owner=_owner - In the implementation block
@property (setter=_setRepresentativeUI:,getter=_representativeUI,nonatomic,retain) _UIButtonGroupViewController * representativeUI;              //@synthesize representativeUI=_representativeUI - In the implementation block
@property (assign,setter=_setLocked:,getter=_isLocked,nonatomic) BOOL locked;                                                                    //@synthesize locked=_locked - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)_setLocked:(BOOL)arg1 ;
-(BOOL)_isLocked;
-(id)_items;
-(id)_owner;
-(void)_setHidden:(BOOL)arg1 ;
-(BOOL)_isHidden;
-(BOOL)isDisplayingRepresentativeItem;
-(UIBarButtonItem *)representativeItem;
-(void)_setRepresentativeUI:(id)arg1 ;
-(void)_validateAllItems;
-(void)_setOwner:(id)arg1 ;
-(id)initWithBarButtonItems:(id)arg1 representativeItem:(id)arg2 ;
-(void)_removeBarButtonItem:(id)arg1 ;
-(void)_removeRepresentative:(id)arg1 ;
-(NSArray *)barButtonItems;
-(void)setBarButtonItems:(NSArray *)arg1 ;
-(void)setRepresentativeItem:(UIBarButtonItem *)arg1 ;
-(void)_setMinimumLeadingSpace:(double)arg1 ;
-(void)_setMinimumTrailingSpace:(double)arg1 ;
-(void)_setPriority:(float)arg1 ;
-(double)_minimumLeadingSpace;
-(double)_minimumTrailingSpace;
-(float)_priority;
-(id)_representativeUI;
@end


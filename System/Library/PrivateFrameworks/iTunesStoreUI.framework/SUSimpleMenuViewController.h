/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class NSString, NSArray;

@interface SUSimpleMenuViewController : SUMenuViewController {

	NSString* _cancelButtonTitle;
	NSArray* _titles;

}

@property (nonatomic,copy) NSArray * titles;                          //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
-(void)dealloc;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(void)reloadContentSizeForViewInPopover;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(BOOL)isMenuItemEnabledAtIndex:(long long)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(id)initWithTitles:(id)arg1 ;
-(long long)numberOfMenuItems;
-(void)_cancelAction:(id)arg1 ;
@end


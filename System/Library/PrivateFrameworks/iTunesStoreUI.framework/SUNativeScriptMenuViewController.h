/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUScriptFunction, NSArray;

@interface SUNativeScriptMenuViewController : SUMenuViewController {

	SUScriptFunction* _action;
	NSArray* _menuItems;

}

@property (nonatomic,retain) SUScriptFunction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                    //@synthesize menuItems=_menuItems - In the implementation block
-(void)dealloc;
-(SUScriptFunction *)action;
-(void)setAction:(SUScriptFunction *)arg1 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(id)copyScriptViewController;
-(void)performActionForMenuItemAtIndex:(long long)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(BOOL)isMenuItemEnabledAtIndex:(long long)arg1 ;
-(long long)numberOfMenuItems;
@end


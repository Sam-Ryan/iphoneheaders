/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptButtonNativeObject.h>

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {

	BOOL _isBackButton;

}
+(id)objectWithDefaultButtonForScriptButton:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)image;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(int)buttonType;
-(id)styleString;
-(BOOL)isLoading;
-(BOOL)isBackButton;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)disconnectButtonAction;
-(void)connectButtonAction;
-(void)setStyleFromString:(id)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)systemItemString;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isShowingConfirmation;
@end


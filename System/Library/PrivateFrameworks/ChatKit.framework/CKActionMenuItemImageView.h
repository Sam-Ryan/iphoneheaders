/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>
#import <libobjc.A.dylib/CKActionMenuItemView.h>

@class UIColor, NSString;

@interface CKActionMenuItemImageView : UIImageView <CKActionMenuItemView> {

	UIColor* _unhighlightedTintColor;
	UIColor* _highlightedTintColor;
	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateTintColor;
-(id)initWithImage:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3 ;
@end


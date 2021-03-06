/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIView;

@interface WFWirelessCell : UITableViewCell {

	NSDictionary* _dict;
	UIView* _topLine;
	UIView* _bottomLine;
	BOOL _showSeparator;
	id _userInfo;

}

@property (nonatomic,readonly) id userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;              //@synthesize showSeparator=_showSeparator - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithDictionary:(id)arg1 ;
-(id)userInfo;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
@end


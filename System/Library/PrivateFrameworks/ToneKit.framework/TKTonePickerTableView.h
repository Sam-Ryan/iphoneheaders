/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@protocol TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver;
@interface TKTonePickerTableView : UITableView {

	id<TKTonePickerTableViewLayoutMarginsObserver> _layoutMarginsObserver;
	id<TKTonePickerTableViewSeparatorObserver> _separatorObserver;

}

@property (assign,nonatomic) id<TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver;              //@synthesize layoutMarginsObserver=_layoutMarginsObserver - In the implementation block
@property (assign,nonatomic) id<TKTonePickerTableViewSeparatorObserver> separatorObserver;                      //@synthesize separatorObserver=_separatorObserver - In the implementation block
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(void)setSeparatorColor:(id)arg1 ;
-(id<TKTonePickerTableViewLayoutMarginsObserver>)layoutMarginsObserver;
-(id<TKTonePickerTableViewSeparatorObserver>)separatorObserver;
-(void)_handleSeparatorColorDidChange;
-(void)setLayoutMarginsObserver:(id<TKTonePickerTableViewLayoutMarginsObserver>)arg1 ;
-(void)setSeparatorObserver:(id<TKTonePickerTableViewSeparatorObserver>)arg1 ;
@end


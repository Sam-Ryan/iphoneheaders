/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel, UITextView;

@interface EKEventDetailURLCell : EKEventDetailCell {

	UILabel* _URLTitleView;
	UITextView* _URLView;

}
-(BOOL)update;
-(void)setURL:(id)arg1 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(id)_URLView;
-(id)_URLTitleView;
@end

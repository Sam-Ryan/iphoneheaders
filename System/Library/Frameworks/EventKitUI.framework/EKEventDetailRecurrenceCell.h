/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {

	UILabel* _recurrenceLabel;
	double _lastLayoutWidth;

}
-(void)layoutSubviews;
-(double)height;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)_recurrenceLabel;
-(id)_myTableView;
-(void)setRecurrenceString:(id)arg1 ;
@end


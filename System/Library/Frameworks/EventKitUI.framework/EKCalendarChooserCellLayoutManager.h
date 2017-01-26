/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@interface EKCalendarChooserCellLayoutManager : UITableViewCellLayoutManager {

	id _realLayoutManager;

}
+(id)sharedLayoutManagerForStyle:(long long)arg1 ;
-(id)defaultTextLabelFontForCell:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(double)defaultTextLabelFontSizeForCell:(id)arg1 ;
-(void)getTextLabelRect:(CGRect*)arg1 detailTextLabelRect:(CGRect*)arg2 forCell:(id)arg3 rowWidth:(double)arg4 ;
-(double)defaultDetailTextLabelFontSizeForCell:(id)arg1 ;
-(id)defaultDetailTextLabelFontForCell:(id)arg1 ;
-(CGRect)textRectForCell:(id)arg1 ;
-(id)initWithCellStyle:(long long)arg1 ;
-(BOOL)rect:(CGRect)arg1 trailsOtherRect:(CGRect)arg2 byDistance:(double*)arg3 ;
@end


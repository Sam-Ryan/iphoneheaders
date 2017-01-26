/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class SBAlertItem, NSString, SBUISound, NSDate;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem {

	SBAlertItem* _alertItem;
	NSString* _title;
	NSString* _message;
	SBUISound* _sound;
	NSDate* _originDate;

}
-(id)sourceDate;
-(long long)defaultActionType;
-(void)reloadDisplayProperties;
-(id)categoryImage;
-(/*^block*/id)ignoreAction;
-(BOOL)matchesContext:(id)arg1 ;
-(id)initWithAlertItem:(id)arg1 configuration:(id)arg2 ;
-(void)dealloc;
-(id)category;
-(/*^block*/id)action;
-(id)title;
-(unsigned long long)priority;
-(id)initWithConfiguration:(id)arg1 ;
-(id)subActions;
-(BOOL)isSticky;
-(id)subActionLabels;
-(id)sound;
@end


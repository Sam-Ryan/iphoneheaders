/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class UILocalNotification, UIImage, NSDate;

@interface SBSnoozedAlarmListItem : SBAwayListItem {

	UILocalNotification* _localNotification;
	UIImage* _iconImage;

}

@property (nonatomic,retain) UILocalNotification * localNotification;              //@synthesize localNotification=_localNotification - In the implementation block
@property (nonatomic,readonly) NSDate * fireDate; 
@property (nonatomic,readonly) UIImage * iconImage;                                //@synthesize iconImage=_iconImage - In the implementation block
-(BOOL)canBeRemovedByNotificationCenterPresentation;
-(BOOL)canBeRemovedByUnlock;
-(UILocalNotification *)localNotification;
-(void)setLocalNotification:(UILocalNotification *)arg1 ;
-(id)init;
-(id)sortDate;
-(UIImage *)iconImage;
-(NSDate *)fireDate;
@end


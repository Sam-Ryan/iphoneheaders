/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UILocalNotification, NSString;

@interface TimerManager : NSObject {

	int _state;
	UILocalNotification* _notification;
	double _remainingTime;

}

@property (assign,nonatomic) double defaultDuration; 
@property (nonatomic,readonly) NSString * defaultSound; 
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) double fireTime; 
@property (nonatomic,readonly) double remainingTime; 
+(id)sharedManager;
+(BOOL)isTimerNotification:(id)arg1 ;
+(BOOL)upgrade;
+(BOOL)discardOldVersion;
+(id)copyFetchScheduledNotification;
+(id)newNotificationAt:(double)arg1 withSound:(id)arg2 ;
+(void)setSoundID:(id)arg1 forNotification:(id)arg2 ;
+(void)updateTimerShortcutItem;
-(double)fireTime;
-(BOOL)cancel;
-(int)state;
-(BOOL)resume;
-(BOOL)pause;
-(double)remainingTime;
-(NSString *)defaultSound;
-(void)reloadStateAndRefreshLocalNotifications;
-(void)reloadState;
-(void)setDefaultSound:(NSString *)arg1 ;
-(void)scheduleAt:(double)arg1 withSound:(id)arg2 ;
-(void)changeSound:(id)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(double)defaultDuration;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class NSMutableArray, NSString, BBObserver, NSDate, UIImage, BBBulletin, UIViewController;

@interface SBAwayBulletinListItem : SBAwayListItem {

	NSMutableArray* _bulletins;
	int _personID;
	NSString* _contactInfo;
	BBObserver* _observer;
	NSDate* _sortDate;
	NSDate* _displayDate;
	NSString* _message;
	UIImage* _listItemImage;
	BOOL _shouldPlayLightsAndSirens;
	BBBulletin* _activeBulletin;
	UIViewController* _secondaryContentViewController;

}

@property (assign,nonatomic) BOOL shouldPlayLightsAndSirens;                       //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
@property (retain) BBBulletin * activeBulletin;                                    //@synthesize activeBulletin=_activeBulletin - In the implementation block
@property (retain) UIViewController * secondaryContentViewController;              //@synthesize secondaryContentViewController=_secondaryContentViewController - In the implementation block
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(void)setSecondaryContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)secondaryContentViewController;
-(id)attachmentImageForKey:(id)arg1 ;
-(BBBulletin *)activeBulletin;
-(BOOL)wantsHighlightOnInsert;
-(BOOL)canBeRemovedByNotificationCenterPresentation;
-(BOOL)canBeRemovedByUnlock;
-(void)_updateActiveBulletin;
-(void)_updateSortDate;
-(void)_updateDisplayDate;
-(id)sortedBulletins;
-(void)setActiveBulletin:(BBBulletin *)arg1 ;
-(BOOL)_suppressesMessageForPrivacy;
-(unsigned long long)maxMessageLines;
-(id)bulletinWithID:(id)arg1 ;
-(BOOL)hasSamePersonAsBulletin:(id)arg1 ;
-(BOOL)_hasCustomSecondaryContent;
-(BOOL)canSnooze;
-(id)initWithBulletin:(id)arg1 andObserver:(id)arg2 ;
-(BOOL)containsBulletinWithID:(id)arg1 ;
-(BOOL)canCoalesceWithBulletin:(id)arg1 ;
-(long long)snoozeButtonindex;
-(id)description;
-(id)title;
-(id)date;
-(void)_update;
-(id)subtitle;
-(id)sortDate;
-(id)message;
-(id)observer;
-(id)iconImage;
-(BOOL)hasEventDate;
-(BOOL)wantsFullscreenPresentation;
-(BOOL)shouldPlayLightsAndSirens;
-(BOOL)inertWhenLocked;
-(BOOL)allowsAutomaticRemovalFromLockScreen;
-(BOOL)overridesQuietMode;
-(BOOL)overridesPocketMode;
-(void)_updateImage;
-(id)attachmentText;
-(void)_updateMessage;
-(id)publishDate;
-(void)setShouldPlayLightsAndSirens:(BOOL)arg1 ;
-(void)buttonPressed;
-(id)bulletins;
-(void)modifyBulletin:(id)arg1 ;
-(void)removeBulletin:(id)arg1 ;
-(void)removeAllBulletins;
-(BOOL)isCritical;
-(void)addBulletin:(id)arg1 ;
@end


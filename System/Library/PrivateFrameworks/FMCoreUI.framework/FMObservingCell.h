/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSMutableDictionary, NSMutableSet;

@interface FMObservingCell : UITableViewCell {

	id _representedObject;
	NSMutableDictionary* _kvoObservationTokens;
	NSMutableSet* _notificationTokens;

}

@property (assign,nonatomic,__weak) id representedObject;                             //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvoObservationTokens;              //@synthesize kvoObservationTokens=_kvoObservationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationTokens;                       //@synthesize notificationTokens=_notificationTokens - In the implementation block
-(void)prepareForReuse;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)removeKVOObservationTokens;
-(void)removeNotificationTokens;
-(void)addObserversForRepresentedObject:(id)arg1 ;
-(NSMutableDictionary *)kvoObservationTokens;
-(void)setKvoObservationTokens:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)notificationTokens;
-(void)setNotificationTokens:(NSMutableSet *)arg1 ;
-(void)addKVOObservationToken:(id)arg1 forObject:(id)arg2 ;
-(void)addNotificationToken:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FMAlertManager : NSObject {

	NSMutableDictionary* _activeAlerts;
	NSMutableDictionary* _activeCFNotificationsByCategory;

}

@property (nonatomic,retain) NSMutableDictionary * activeAlerts;                                 //@synthesize activeAlerts=_activeAlerts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeCFNotificationsByCategory;              //@synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)initSingleton;
-(void)setActiveAlerts:(NSMutableDictionary *)arg1 ;
-(void)setActiveCFNotificationsByCategory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activeCFNotificationsByCategory;
-(NSMutableDictionary *)activeAlerts;
-(id)_xpcTransactionNameFor:(id)arg1 ;
-(void)activateAlert:(id)arg1 ;
@end


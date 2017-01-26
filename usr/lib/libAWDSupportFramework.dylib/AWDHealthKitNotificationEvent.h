/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHealthKitAchievement, AWDHealthKitActivityCache, AWDHealthKitConcurrentCalendarItem, AWDHealthKitExperimentalCondition, AWDHealthKitNotificationResponseFlags, NSMutableArray, AWDHealthKitWeeklySummaryDetail;

@interface AWDHealthKitNotificationEvent : PBCodable <NSCopying> {

	SCD_Struct_AW21* _goalTypes;
	long long _endDate;
	long long _startDate;
	unsigned long long _timestamp;
	AWDHealthKitAchievement* _achievement;
	AWDHealthKitActivityCache* _activityCache;
	int _alertType;
	AWDHealthKitConcurrentCalendarItem* _calendarItem;
	AWDHealthKitExperimentalCondition* _experimentalCondition;
	AWDHealthKitNotificationResponseFlags* _responseFlags;
	int _testAction;
	NSMutableArray* _views;
	AWDHealthKitWeeklySummaryDetail* _weeklySummaryDetail;
	BOOL _dndEnabled;
	BOOL _failedPosting;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) int alertType;                                                          //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                                                    //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                                                      //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasDndEnabled; 
@property (assign,nonatomic) BOOL dndEnabled;                                                        //@synthesize dndEnabled=_dndEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasFailedPosting; 
@property (assign,nonatomic) BOOL failedPosting;                                                     //@synthesize failedPosting=_failedPosting - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentalCondition; 
@property (nonatomic,retain) AWDHealthKitExperimentalCondition * experimentalCondition;              //@synthesize experimentalCondition=_experimentalCondition - In the implementation block
@property (assign,nonatomic) BOOL hasTestAction; 
@property (assign,nonatomic) int testAction;                                                         //@synthesize testAction=_testAction - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendarItem; 
@property (nonatomic,retain) AWDHealthKitConcurrentCalendarItem * calendarItem;                      //@synthesize calendarItem=_calendarItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * views;                                                 //@synthesize views=_views - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityCache; 
@property (nonatomic,retain) AWDHealthKitActivityCache * activityCache;                              //@synthesize activityCache=_activityCache - In the implementation block
@property (nonatomic,readonly) BOOL hasAchievement; 
@property (nonatomic,retain) AWDHealthKitAchievement * achievement;                                  //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,readonly) BOOL hasWeeklySummaryDetail; 
@property (nonatomic,retain) AWDHealthKitWeeklySummaryDetail * weeklySummaryDetail;                  //@synthesize weeklySummaryDetail=_weeklySummaryDetail - In the implementation block
@property (nonatomic,readonly) unsigned long long goalTypesCount; 
@property (nonatomic,readonly) unsigned* goalTypes; 
@property (nonatomic,readonly) BOOL hasResponseFlags; 
@property (nonatomic,retain) AWDHealthKitNotificationResponseFlags * responseFlags;                  //@synthesize responseFlags=_responseFlags - In the implementation block
+(Class)viewsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearViews;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasAlertType;
-(void)setAlertType:(int)arg1 ;
-(int)alertType;
-(void)setHasAlertType:(BOOL)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setActivityCache:(AWDHealthKitActivityCache *)arg1 ;
-(BOOL)hasActivityCache;
-(AWDHealthKitActivityCache *)activityCache;
-(unsigned long long)goalTypesCount;
-(void)clearGoalTypes;
-(unsigned*)goalTypes;
-(void)setGoalTypes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setExperimentalCondition:(AWDHealthKitExperimentalCondition *)arg1 ;
-(BOOL)hasExperimentalCondition;
-(AWDHealthKitExperimentalCondition *)experimentalCondition;
-(void)setCalendarItem:(AWDHealthKitConcurrentCalendarItem *)arg1 ;
-(void)setViews:(NSMutableArray *)arg1 ;
-(void)setAchievement:(AWDHealthKitAchievement *)arg1 ;
-(void)setWeeklySummaryDetail:(AWDHealthKitWeeklySummaryDetail *)arg1 ;
-(void)setResponseFlags:(AWDHealthKitNotificationResponseFlags *)arg1 ;
-(void)addViews:(id)arg1 ;
-(unsigned long long)viewsCount;
-(id)viewsAtIndex:(unsigned long long)arg1 ;
-(unsigned)goalTypesAtIndex:(unsigned long long)arg1 ;
-(void)addGoalTypes:(unsigned)arg1 ;
-(id)alertTypeAsString:(int)arg1 ;
-(int)StringAsAlertType:(id)arg1 ;
-(void)setDndEnabled:(BOOL)arg1 ;
-(void)setHasDndEnabled:(BOOL)arg1 ;
-(BOOL)hasDndEnabled;
-(void)setFailedPosting:(BOOL)arg1 ;
-(void)setHasFailedPosting:(BOOL)arg1 ;
-(BOOL)hasFailedPosting;
-(int)testAction;
-(void)setTestAction:(int)arg1 ;
-(void)setHasTestAction:(BOOL)arg1 ;
-(BOOL)hasTestAction;
-(id)testActionAsString:(int)arg1 ;
-(int)StringAsTestAction:(id)arg1 ;
-(BOOL)hasCalendarItem;
-(BOOL)hasAchievement;
-(BOOL)hasWeeklySummaryDetail;
-(BOOL)hasResponseFlags;
-(BOOL)dndEnabled;
-(BOOL)failedPosting;
-(AWDHealthKitConcurrentCalendarItem *)calendarItem;
-(AWDHealthKitAchievement *)achievement;
-(AWDHealthKitWeeklySummaryDetail *)weeklySummaryDetail;
-(AWDHealthKitNotificationResponseFlags *)responseFlags;
-(NSMutableArray *)views;
-(void)setEndDate:(long long)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(long long)startDate;
-(long long)endDate;
@end


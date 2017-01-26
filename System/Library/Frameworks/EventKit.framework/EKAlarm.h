/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKObjectToOneRelation, NSString, NSURL, NSDate, EKStructuredLocation, EKObject, EKCalendar, EKCalendarItem, NSArray;

@interface EKAlarm : EKObject <NSCopying> {

	EKObjectToOneRelation* _locationRelation;
	long long _type;
	NSString* _emailAddress;
	NSString* _soundName;
	NSURL* _url;

}

@property (assign,nonatomic) double relativeOffset; 
@property (nonatomic,copy) NSDate * absoluteDate; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (assign,nonatomic) long long proximity; 
@property (nonatomic,readonly) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                 //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * soundName;                                    //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,copy) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isAbsolute; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) EKObject * owner; 
@property (nonatomic,retain) EKCalendar * calendarOwner; 
@property (nonatomic,retain) EKCalendarItem * calendarItemOwner; 
@property (nonatomic,copy) NSDate * acknowledgedDate; 
@property (nonatomic,readonly) NSString * externalID; 
@property (assign,getter=isDefaultAlarm,nonatomic) BOOL defaultAlarm; 
@property (nonatomic,retain) EKAlarm * originalAlarm; 
@property (nonatomic,copy) NSArray * snoozedAlarms; 
@property (nonatomic,readonly) BOOL isSnoozedAlarm; 
@property (nonatomic,retain) EKObjectToOneRelation * locationRelation;              //@synthesize locationRelation=_locationRelation - In the implementation block
+(long long)maxPublicProximity;
+(int)_currentAuthorizationStatus;
+(BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg1 ;
+(BOOL)areLocationsAvailable;
+(BOOL)areLocationsAllowed;
+(BOOL)areLocationsCurrentlyEnabled;
+(double)defaultGeofencedReminderRadius;
+(id)alarmWithAbsoluteDate:(id)arg1 ;
+(id)alarmWithRelativeOffset:(double)arg1 ;
-(id)localizedDescription;
-(id)_localizedDescription:(BOOL)arg1 isAllDay:(BOOL)arg2 ;
-(id)longLocalizedDescription;
-(id)longLocalizedAllDayDescription;
-(id)localizedAllDayDescription;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSURL *)url;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(void)setUrl:(NSURL *)arg1 ;
-(EKObject *)owner;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)soundName;
-(long long)proximity;
-(void)setProximity:(long long)arg1 ;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(BOOL)rebase;
-(id)_locationRelation;
-(BOOL)isSnoozedAlarm;
-(NSArray *)snoozedAlarms;
-(EKCalendarItem *)calendarItemOwner;
-(EKAlarm *)originalAlarm;
-(void)setAcknowledgedDate:(NSDate *)arg1 ;
-(void)setOriginalAlarm:(EKAlarm *)arg1 ;
-(NSDate *)acknowledgedDate;
-(EKCalendar *)calendarOwner;
-(BOOL)isDefaultAlarm;
-(void)setDefaultAlarm:(BOOL)arg1 ;
-(void)setSnoozedAlarms:(NSArray *)arg1 ;
-(id)initWithAbsoluteDate:(id)arg1 ;
-(id)initWithRelativeOffset:(double)arg1 ;
-(id)_originalAlarmRelation;
-(id)_snoozedAlarmsRelation;
-(id)ownerUUID;
-(void)addSnoozedAlarm:(id)arg1 ;
-(void)removeSnoozedAlarm:(id)arg1 ;
-(EKObjectToOneRelation *)locationRelation;
-(void)setLocationRelation:(EKObjectToOneRelation *)arg1 ;
-(void)setRelativeOffset:(double)arg1 ;
-(double)relativeOffset;
-(EKStructuredLocation *)structuredLocation;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(NSString *)externalID;
-(BOOL)isAbsolute;
-(NSDate *)absoluteDate;
-(BOOL)isTopographicallyEqualToAlarm:(id)arg1 ;
-(void)setAbsoluteDate:(NSDate *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
@end


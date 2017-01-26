/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class NSString, EKPersistentCalendar, EKPersistentLocation, NSDate, NSTimeZone, NSURL, NSData, EKPersistentOrganizer, NSSet, EKPersistentAttendee;

@interface EKPersistentCalendarItem : EKPersistentObject

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,retain) EKPersistentCalendar * calendar; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) EKPersistentLocation * location; 
@property (nonatomic,copy) EKPersistentLocation * clientLocation; 
@property (nonatomic,copy) EKPersistentLocation * startLocation; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,copy) NSTimeZone * startTimeZone; 
@property (nonatomic,copy) NSTimeZone * endTimeZone; 
@property (nonatomic,copy) NSString * calendarScale; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) int sequence; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSURL * action; 
@property (nonatomic,copy) NSData * appLink; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSData * externalData; 
@property (nonatomic,copy) NSString * uniqueID; 
@property (nonatomic,retain) EKPersistentOrganizer * organizer; 
@property (nonatomic,readonly) BOOL hasAlarms; 
@property (nonatomic,readonly) BOOL hasRecurrenceRules; 
@property (nonatomic,readonly) BOOL hasAttendees; 
@property (nonatomic,readonly) BOOL hasNotes; 
@property (nonatomic,readonly) long long selfParticipantStatus; 
@property (nonatomic,copy) NSSet * alarms; 
@property (assign,getter=isDefaultAlarmRemoved,nonatomic) BOOL defaultAlarmRemoved; 
@property (nonatomic,copy) NSSet * recurrenceRules; 
@property (nonatomic,copy) NSSet * attendees; 
@property (nonatomic,retain) EKPersistentAttendee * selfAttendee; 
@property (nonatomic,copy) NSDate * participationStatusModifiedDate; 
@property (nonatomic,copy) NSSet * exceptionDates; 
@property (nonatomic,copy) NSSet * attachments; 
@property (nonatomic,copy) NSString * sharedItemCreatedByDisplayName; 
@property (nonatomic,copy) NSString * sharedItemCreatedByEmailAddress; 
@property (nonatomic,copy) NSString * sharedItemCreatedByFirstName; 
@property (nonatomic,copy) NSString * sharedItemCreatedByLastName; 
@property (nonatomic,copy) NSDate * sharedItemCreatedDate; 
@property (nonatomic,copy) NSTimeZone * sharedItemCreatedTimeZone; 
@property (nonatomic,copy) NSString * sharedItemModifiedByDisplayName; 
@property (nonatomic,copy) NSString * sharedItemModifiedByEmailAddress; 
@property (nonatomic,copy) NSString * sharedItemModifiedByFirstName; 
@property (nonatomic,copy) NSString * sharedItemModifiedByLastName; 
@property (nonatomic,copy) NSDate * sharedItemModifiedDate; 
@property (nonatomic,copy) NSTimeZone * sharedItemModifiedTimeZone; 
@property (nonatomic,readonly) int sequenceNumber; 
@property (getter=isDetached,nonatomic,readonly) BOOL detached; 
@property (nonatomic,retain) EKPersistentCalendarItem * originalItem; 
@property (nonatomic,copy) NSSet * detachedItems; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(void)setSequence:(int)arg1 ;
-(int)sequence;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)action;
-(NSString *)title;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(NSString *)UUID;
-(void)setAction:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setStartLocation:(EKPersistentLocation *)arg1 ;
-(EKPersistentLocation *)location;
-(void)setURL:(NSURL *)arg1 ;
-(void)setCalendar:(EKPersistentCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(EKPersistentCalendar *)calendar;
-(void)setLocation:(EKPersistentLocation *)arg1 ;
-(NSSet *)attachments;
-(void)setAttachments:(NSSet *)arg1 ;
-(void)setAppLink:(NSData *)arg1 ;
-(NSData *)appLink;
-(int)sequenceNumber;
-(void)setAllDay:(BOOL)arg1 ;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(BOOL)hasAlarms;
-(NSSet *)exceptionDates;
-(NSSet *)detachedItems;
-(BOOL)hasNotes;
-(NSString *)calendarScale;
-(void)setCalendarScale:(NSString *)arg1 ;
-(NSString *)sharedItemCreatedByFirstName;
-(NSString *)sharedItemCreatedByLastName;
-(NSString *)sharedItemModifiedByFirstName;
-(NSString *)sharedItemModifiedByLastName;
-(void)setOrganizer:(EKPersistentOrganizer *)arg1 ;
-(void)setSelfAttendee:(EKPersistentAttendee *)arg1 ;
-(void)addExceptionDate:(id)arg1 ;
-(void)addDetachedItem:(id)arg1 ;
-(void)deleteSelfAndDetached;
-(EKPersistentCalendarItem *)originalItem;
-(BOOL)isDefaultAlarmRemoved;
-(void)setDefaultAlarmRemoved:(BOOL)arg1 ;
-(void)removeRecurrenceRule:(id)arg1 ;
-(void)setSharedItemCreatedByDisplayName:(NSString *)arg1 ;
-(void)setSharedItemCreatedByFirstName:(NSString *)arg1 ;
-(void)setSharedItemCreatedByLastName:(NSString *)arg1 ;
-(void)setSharedItemCreatedDate:(NSDate *)arg1 ;
-(NSTimeZone *)sharedItemCreatedTimeZone;
-(void)setSharedItemCreatedTimeZone:(NSTimeZone *)arg1 ;
-(void)setSharedItemModifiedByDisplayName:(NSString *)arg1 ;
-(void)setSharedItemModifiedByEmailAddress:(NSString *)arg1 ;
-(void)setSharedItemModifiedByFirstName:(NSString *)arg1 ;
-(void)setSharedItemModifiedByLastName:(NSString *)arg1 ;
-(void)setSharedItemModifiedDate:(NSDate *)arg1 ;
-(NSTimeZone *)sharedItemModifiedTimeZone;
-(void)setSharedItemModifiedTimeZone:(NSTimeZone *)arg1 ;
-(void)setParticipationStatusModifiedDate:(NSDate *)arg1 ;
-(NSDate *)participationStatusModifiedDate;
-(void)primitiveValueChangedForKey:(id)arg1 ;
-(void)removeExceptionDate:(id)arg1 ;
-(void)setOriginalItem:(EKPersistentCalendarItem *)arg1 ;
-(void)setExceptionDates:(NSSet *)arg1 ;
-(void)setDetachedItems:(NSSet *)arg1 ;
-(void)removeDetachedItem:(id)arg1 ;
-(int)attendeeCount;
-(void)setSharedItemCreatedByEmailAddress:(NSString *)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)setExternalID:(NSString *)arg1 ;
-(BOOL)hasAttachments;
-(EKPersistentLocation *)clientLocation;
-(void)removeAttachment:(id)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(NSSet *)attendees;
-(BOOL)hasAttendees;
-(void)removeAttendee:(id)arg1 ;
-(void)addAttendee:(id)arg1 ;
-(void)setClientLocation:(EKPersistentLocation *)arg1 ;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
-(BOOL)isAllDay;
-(void)setStartTimeZone:(NSTimeZone *)arg1 ;
-(void)setEndTimeZone:(NSTimeZone *)arg1 ;
-(EKPersistentOrganizer *)organizer;
-(void)setAttendees:(NSSet *)arg1 ;
-(NSString *)externalID;
-(BOOL)hasRecurrenceRules;
-(NSString *)sharedItemModifiedByDisplayName;
-(NSDate *)sharedItemModifiedDate;
-(NSString *)sharedItemCreatedByDisplayName;
-(NSDate *)sharedItemCreatedDate;
-(NSString *)sharedItemModifiedByEmailAddress;
-(NSString *)sharedItemCreatedByEmailAddress;
-(NSSet *)alarms;
-(void)setAlarms:(NSSet *)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(NSSet *)recurrenceRules;
-(long long)selfParticipantStatus;
-(void)removeAlarm:(id)arg1 ;
-(EKPersistentAttendee *)selfAttendee;
-(void)setRecurrenceRules:(NSSet *)arg1 ;
-(void)addRecurrenceRule:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(BOOL)isDetached;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)addAttachment:(id)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(EKPersistentLocation *)startLocation;
-(NSString *)uniqueID;
-(BOOL)validate:(id*)arg1 ;
-(NSData *)externalData;
-(void)setExternalData:(NSData *)arg1 ;
@end


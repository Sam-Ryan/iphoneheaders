/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSWriting.h>

@class NSMutableDictionary, NSMutableArray, NSString, NSArray, ICSDate, ICSDuration, ICSUserAddress, ICSTrigger, NSURL, ICSStructuredLocation;

@interface ICSComponent : NSObject <ICSWriting> {

	NSMutableDictionary* _properties;
	NSMutableArray* _components;
	NSString* _unrecognizedComponentName;

}

@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (assign) int classification; 
@property (retain) ICSDate * created; 
@property (retain) NSString * description; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (readonly) BOOL isAllDay; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDuration * duration; 
@property (retain) NSArray * exdate; 
@property (retain) NSArray * exrule; 
@property (retain) ICSDate * last_modified; 
@property (retain) NSString * location; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSArray * rdate; 
@property (retain) ICSDate * recurrence_id; 
@property (retain) NSArray * relatedTo; 
@property (retain) NSArray * rrule; 
@property (assign) unsigned long long sequence; 
@property (assign) int status; 
@property (retain) NSString * statusString; 
@property (retain) NSString * summary; 
@property (retain) ICSTrigger * trigger; 
@property (retain) NSString * uid; 
@property (retain) NSURL * url; 
@property (assign) unsigned long long priority; 
@property (retain) NSString * unrecognizedComponentName; 
@property (assign) int x_calendarserver_access; 
@property (retain) NSString * x_apple_dropbox; 
@property (retain) NSString * x_apple_ews_changekey; 
@property (retain) NSString * x_apple_ews_itemid; 
@property (assign) BOOL x_apple_ews_needsserverconfirmation; 
@property (retain) NSString * x_apple_ews_permission; 
@property (assign) BOOL x_apple_ignore_on_restore; 
@property (retain) NSString * x_apple_etag; 
@property (retain) NSString * x_apple_scheduletag; 
@property (retain) NSString * x_apple_serverFilename; 
@property (assign) BOOL x_apple_suggestionInfoChangesAcknowledged; 
@property (assign) unsigned long long x_apple_suggestionInfoChangedFields; 
@property (retain) NSString * x_apple_suggestionInfoOpaqueKey; 
@property (assign) ICSDate * x_apple_suggestionInfoTimestamp; 
@property (retain) NSString * x_apple_suggestionInfoUniqueKey; 
@property (retain) ICSStructuredLocation * x_apple_structured_location; 
@property (retain) NSArray * conferences; 
@property (retain) NSMutableArray * components;                                         //@synthesize components=_components - In the implementation block
+(id)inheritanceKeywords;
+(id)name;
+(unsigned long long)relationshipTypeFromString:(id)arg1 ;
+(id)stringFromRelationshipType:(unsigned long long)arg1 ;
+(id)stringFromStatus:(int)arg1 ;
+(int)statusFromString:(id)arg1 ;
+(id)makeUID;
-(void)fixPropertiesInheritance:(id)arg1 ;
-(void)fixComponent;
-(void)fixAlarms;
-(void)fixAttendees;
-(void)fixAttachments;
-(void)fixRelatedTo;
-(void)fixRecurrenceRules;
-(void)fixRecurrenceDates;
-(void)fixExceptionRules;
-(void)fixExceptionDates;
-(void)fixSuggestionInfo;
-(void)setSequence:(unsigned long long)arg1 ;
-(unsigned long long)sequence;
-(NSString *)description;
-(ICSDuration *)duration;
-(NSURL *)url;
-(void)setDuration:(ICSDuration *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSArray *)attach;
-(NSString *)location;
-(NSString *)uid;
-(void)setLocation:(NSString *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setUid:(NSString *)arg1 ;
-(void)setClassification:(int)arg1 ;
-(int)classification;
-(NSString *)summary;
-(void)setTrigger:(ICSTrigger *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(BOOL)forcedAllDay;
-(void)setExrule:(NSArray *)arg1 ;
-(NSArray *)exrule;
-(void)setRdate:(NSArray *)arg1 ;
-(NSArray *)rdate;
-(NSString *)x_apple_dropbox;
-(void)setX_apple_dropbox:(NSString *)arg1 ;
-(NSString *)x_apple_ews_changekey;
-(void)setX_apple_ews_changekey:(NSString *)arg1 ;
-(NSString *)x_apple_ews_itemid;
-(void)setX_apple_ews_itemid:(NSString *)arg1 ;
-(NSString *)x_apple_ews_permission;
-(void)setX_apple_ews_permission:(NSString *)arg1 ;
-(BOOL)x_apple_ews_needsserverconfirmation;
-(void)setX_apple_ews_needsserverconfirmation:(BOOL)arg1 ;
-(void)setX_apple_ignore_on_restore:(BOOL)arg1 ;
-(BOOL)x_apple_ignore_on_restore;
-(void)setX_apple_etag:(NSString *)arg1 ;
-(NSString *)x_apple_etag;
-(void)setX_apple_scheduletag:(NSString *)arg1 ;
-(NSString *)x_apple_scheduletag;
-(void)setX_apple_serverFilename:(NSString *)arg1 ;
-(NSString *)x_apple_serverFilename;
-(void)setConferences:(NSArray *)arg1 ;
-(NSArray *)conferences;
-(void)setX_apple_end_location:(id)arg1 ;
-(id)x_apple_end_location;
-(ICSDate *)x_apple_suggestionInfoTimestamp;
-(void)setX_apple_suggestionInfoTimestamp:(ICSDate *)arg1 ;
-(ICSDate *)last_modified;
-(void)setX_calendarserver_access:(int)arg1 ;
-(ICSStructuredLocation *)x_apple_structured_location;
-(id)x_apple_travel_start;
-(NSArray *)relatedTo;
-(NSArray *)exdate;
-(int)x_calendarserver_access;
-(void)setRrule:(NSArray *)arg1 ;
-(void)setAttach:(NSArray *)arg1 ;
-(void)setRelatedTo:(NSArray *)arg1 ;
-(id)x_apple_travel_duration;
-(id)x_apple_travel_advisory_behavior;
-(NSString *)x_apple_suggestionInfoOpaqueKey;
-(NSString *)x_apple_suggestionInfoUniqueKey;
-(unsigned long long)x_apple_suggestionInfoChangedFields;
-(BOOL)x_apple_suggestionInfoChangesAcknowledged;
-(void)setX_apple_travel_duration:(id)arg1 ;
-(void)setX_apple_travel_advisory_behavior:(id)arg1 ;
-(void)setX_apple_suggestionInfoOpaqueKey:(NSString *)arg1 ;
-(void)setX_apple_suggestionInfoUniqueKey:(NSString *)arg1 ;
-(void)setX_apple_suggestionInfoChangesAcknowledged:(BOOL)arg1 ;
-(void)setX_apple_suggestionInfoChangedFields:(unsigned long long)arg1 ;
-(void)setX_apple_travel_start:(id)arg1 ;
-(void)setX_apple_structured_location:(ICSStructuredLocation *)arg1 ;
-(void)setOrganizer:(ICSUserAddress *)arg1 ;
-(id)allProperties;
-(ICSTrigger *)trigger;
-(NSString *)statusString;
-(void)setSummary:(NSString *)arg1 ;
-(BOOL)isAllDay;
-(ICSUserAddress *)organizer;
-(void)setStatusString:(NSString *)arg1 ;
-(void)setForcedAllDay:(BOOL)arg1 ;
-(void)setAttendee:(NSArray *)arg1 ;
-(void)setDtstamp:(ICSDate *)arg1 ;
-(ICSDate *)dtstamp;
-(void)setDtend:(ICSDate *)arg1 ;
-(void)setDtstart:(ICSDate *)arg1 ;
-(NSArray *)attendee;
-(ICSDate *)recurrence_id;
-(ICSDate *)dtend;
-(ICSDate *)dtstart;
-(void)setCreated:(ICSDate *)arg1 ;
-(ICSDate *)created;
-(void)setLast_modified:(ICSDate *)arg1 ;
-(NSArray *)rrule;
-(void)setRecurrence_id:(ICSDate *)arg1 ;
-(void)setExdate:(NSArray *)arg1 ;
-(id)properties;
-(void)addComponent:(id)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(void)setPropertyValue:(id)arg1 forName:(id)arg2 ;
-(void)addProperty:(id)arg1 withValue:(id)arg2 ;
-(void)setPropertyValue:(id)arg1 type:(int)arg2 forName:(id)arg3 ;
-(id)init;
-(id)debugDescription;
-(NSMutableArray *)components;
-(void)setComponents:(NSMutableArray *)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(NSString *)unrecognizedComponentName;
-(BOOL)ignorePropertyWithName:(id)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)setUnrecognizedComponentName:(NSString *)arg1 ;
-(id)propertiesForName:(id)arg1 ;
-(void)removePropertiesForName:(id)arg1 ;
-(void)setProperties:(id)arg1 forName:(id)arg2 ;
-(void)setProperty:(id)arg1 forName:(id)arg2 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(BOOL)validate:(id*)arg1 ;
@end


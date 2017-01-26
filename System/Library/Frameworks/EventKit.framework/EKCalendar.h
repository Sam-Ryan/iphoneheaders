/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class NSString, EKSource, NSURL, NSArray, NSSet, NSData;

@interface EKCalendar : EKObject {

	CGColorRef _color;
	BOOL _isMain;
	unsigned _loadFlags;

}

@property (nonatomic,readonly) NSString * localizedRemindersTitle; 
@property (nonatomic,retain) EKSource * source; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) BOOL allowsContentModifications; 
@property (getter=isSubscribed,nonatomic,readonly) BOOL subscribed; 
@property (getter=isImmutable,nonatomic,readonly) BOOL immutable; 
@property (assign,nonatomic) CGColorRef CGColor; 
@property (nonatomic,readonly) unsigned long long supportedEventAvailabilities; 
@property (nonatomic,readonly) unsigned long long allowedEntityTypes; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSURL * externalURI; 
@property (assign,nonatomic) int displayOrder; 
@property (nonatomic,copy) NSString * symbolicColorName; 
@property (nonatomic,readonly) NSString * colorString; 
@property (nonatomic,readonly) BOOL allowsEvents; 
@property (nonatomic,readonly) BOOL allowsTasks; 
@property (nonatomic,readonly) BOOL isDefaultCalendarForSource; 
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) BOOL prohibitsScheduling; 
@property (nonatomic,readonly) BOOL hasEvents; 
@property (nonatomic,readonly) BOOL hasTasks; 
@property (assign,nonatomic) unsigned long long sharingStatus; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (nonatomic,copy) NSString * sharedOwnerName; 
@property (nonatomic,copy) NSURL * sharedOwnerAddress; 
@property (nonatomic,readonly) NSString * sharedOwnerEmail; 
@property (nonatomic,readonly) BOOL isSharingInvitation; 
@property (assign,nonatomic) unsigned long long sharingInvitationResponse; 
@property (nonatomic,readonly) BOOL canBePublished; 
@property (nonatomic,readonly) BOOL canBeShared; 
@property (nonatomic,readonly) BOOL isMarkedUndeletable; 
@property (nonatomic,readonly) BOOL isMarkedImmutableSharees; 
@property (nonatomic,readonly) BOOL schedulingProhibited; 
@property (nonatomic,readonly) NSString * publishedURL; 
@property (assign,nonatomic) BOOL isPublished; 
@property (nonatomic,readonly) BOOL isFacebookBirthdayCalendar; 
@property (nonatomic,readonly) BOOL isHolidaySubscribedCalendar; 
@property (nonatomic,readonly) BOOL isFamilyCalendar; 
@property (nonatomic,readonly) BOOL isSuggestionsCalendar; 
@property (nonatomic,readonly) BOOL isMutableSuggestionsCalendar; 
@property (assign,nonatomic) BOOL isIgnoringEventAlerts; 
@property (assign,nonatomic) BOOL isIgnoringSharedCalendarNotifications; 
@property (nonatomic,readonly) BOOL allowsIgnoringSharedEventChangeNotifications; 
@property (nonatomic,copy) NSArray * sharees; 
@property (nonatomic,copy) NSSet * allAlarms; 
@property (nonatomic,copy) NSSet * alarms; 
@property (nonatomic,copy) NSString * selfIdentityDisplayName; 
@property (nonatomic,copy) NSString * selfIdentityEmail; 
@property (nonatomic,copy) NSURL * selfIdentityAddress; 
@property (nonatomic,copy) NSString * selfIdentityFirstName; 
@property (nonatomic,copy) NSString * selfIdentityLastName; 
@property (nonatomic,copy) NSString * ownerIdentityDisplayName; 
@property (nonatomic,copy) NSString * ownerIdentityEmail; 
@property (nonatomic,copy) NSURL * ownerIdentityAddress; 
@property (nonatomic,copy) NSString * ownerIdentityFirstName; 
@property (nonatomic,copy) NSString * ownerIdentityLastName; 
@property (nonatomic,copy) NSData * digest; 
@property (nonatomic,readonly) BOOL automaticEventLocationGeocodingAllowed; 
@property (assign,nonatomic) unsigned loadFlags;                                               //@synthesize loadFlags=_loadFlags - In the implementation block
@property (assign,nonatomic) BOOL isMainCalendarForSource;                                     //@synthesize isMain=_isMain - In the implementation block
+(id)typeDescription:(long long)arg1 ;
+(id)calendarWithEventStore:(id)arg1 ;
+(id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2 ;
-(NSString *)localizedRemindersTitle;
-(BOOL)canBeDeleted:(id)arg1 ;
-(id)uiColor;
-(CGColorRef)CGColor;
-(void)dealloc;
-(BOOL)isHidden;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setSource:(EKSource *)arg1 ;
-(long long)type;
-(EKSource *)source;
-(NSString *)title;
-(void)reset;
-(NSString *)calendarIdentifier;
-(BOOL)hasTasks;
-(void)_setSource:(id)arg1 ;
-(int)entityType;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)symbolicColorName;
-(void)setColorString:(NSString *)arg1 ;
-(BOOL)prohibitsScheduling;
-(BOOL)isMutableSuggestionsCalendar;
-(void)setSharedOwnerName:(NSString *)arg1 ;
-(void)setSharedOwnerAddress:(NSURL *)arg1 ;
-(unsigned long long)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned long long)arg1 ;
-(unsigned long long)invitationStatus;
-(NSString *)selfIdentityDisplayName;
-(void)setSelfIdentityDisplayName:(NSString *)arg1 ;
-(void)setSelfIdentityEmail:(NSString *)arg1 ;
-(NSURL *)selfIdentityAddress;
-(void)setSelfIdentityAddress:(NSURL *)arg1 ;
-(NSString *)selfIdentityFirstName;
-(void)setSelfIdentityFirstName:(NSString *)arg1 ;
-(NSString *)selfIdentityLastName;
-(void)setSelfIdentityLastName:(NSString *)arg1 ;
-(NSString *)ownerIdentityDisplayName;
-(void)setOwnerIdentityDisplayName:(NSString *)arg1 ;
-(NSString *)ownerIdentityEmail;
-(void)setOwnerIdentityEmail:(NSString *)arg1 ;
-(NSURL *)ownerIdentityAddress;
-(void)setOwnerIdentityAddress:(NSURL *)arg1 ;
-(NSString *)ownerIdentityFirstName;
-(void)setOwnerIdentityFirstName:(NSString *)arg1 ;
-(NSString *)ownerIdentityLastName;
-(void)setOwnerIdentityLastName:(NSString *)arg1 ;
-(id)bulkRequests;
-(void)setBulkRequests:(id)arg1 ;
-(id)subcalAccountID;
-(void)setSubcalAccountID:(id)arg1 ;
-(id)pushKey;
-(void)setPushKey:(id)arg1 ;
-(NSData *)digest;
-(void)setDigest:(NSData *)arg1 ;
-(NSURL *)externalURI;
-(id)_alarmsRelation;
-(id)findOriginalAlarmStartingWith:(id)arg1 ;
-(NSSet *)allAlarms;
-(void)setAllAlarms:(NSSet *)arg1 ;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3 ;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)removeAllSnoozedAlarms;
-(BOOL)automaticEventLocationGeocodingAllowed;
-(void)clearInvitationStatus;
-(BOOL)getColorRed:(int*)arg1 green:(int*)arg2 blue:(int*)arg3 ;
-(id)_sourceRelation;
-(id)_shareesRelation;
-(void)addAlarms:(id)arg1 ;
-(void)removeAlarms:(id)arg1 ;
-(void)setCGColor:(CGColorRef)arg1 ;
-(unsigned)loadFlags;
-(void)setLoadFlags:(unsigned)arg1 ;
-(BOOL)isMainCalendarForSource;
-(void)setIsMainCalendarForSource:(BOOL)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(BOOL)remove:(id*)arg1 ;
-(NSString *)externalID;
-(unsigned long long)supportedEventAvailabilities;
-(BOOL)isIgnoringEventAlerts;
-(BOOL)isFamilyCalendar;
-(unsigned long long)sharingStatus;
-(NSString *)sharedOwnerName;
-(NSArray *)sharees;
-(BOOL)canBeShared;
-(void)setSharees:(NSArray *)arg1 ;
-(NSString *)sharedOwnerEmail;
-(BOOL)isMarkedImmutableSharees;
-(void)removeSharee:(id)arg1 ;
-(void)setSharingStatus:(unsigned long long)arg1 ;
-(void)addSharee:(id)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(BOOL)isHolidaySubscribedCalendar;
-(BOOL)isMarkedUndeletable;
-(BOOL)isSubscribed;
-(BOOL)allowsEvents;
-(void)setDisplayOrder:(int)arg1 ;
-(BOOL)schedulingProhibited;
-(BOOL)isDefaultCalendarForSource;
-(NSURL *)sharedOwnerAddress;
-(NSSet *)alarms;
-(void)setAlarms:(NSSet *)arg1 ;
-(BOOL)isSuggestionsCalendar;
-(BOOL)isFacebookBirthdayCalendar;
-(BOOL)isSharingInvitation;
-(int)displayOrder;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(BOOL)allowsContentModifications;
-(BOOL)allowsIgnoringSharedEventChangeNotifications;
-(void)setIsIgnoringSharedCalendarNotifications:(BOOL)arg1 ;
-(BOOL)isIgnoringSharedCalendarNotifications;
-(BOOL)hasEvents;
-(void)setIsIgnoringEventAlerts:(BOOL)arg1 ;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(NSString *)selfIdentityEmail;
-(BOOL)allowsTasks;
-(BOOL)isPublished;
-(NSString *)publishedURL;
-(BOOL)canBePublished;
-(void)setIsPublished:(BOOL)arg1 ;
-(BOOL)refresh;
-(BOOL)isImmutable;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(NSString *)colorString;
@end


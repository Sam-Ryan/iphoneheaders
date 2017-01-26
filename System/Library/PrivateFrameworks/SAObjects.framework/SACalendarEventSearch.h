/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSDate, NSNumber, NSString, NSArray;

@interface SACalendarEventSearch : SABaseClientBoundCommand {

	NSURL* _targetAppId;
	NSURL* _eventId;

}

@property (nonatomic,copy) NSURL * targetAppId;                 //@synthesize targetAppId=_targetAppId - In the implementation block
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSURL * eventId;                     //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,retain) NSNumber * limit; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSArray * participants; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)eventSearch;
+(id)eventSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSURL *)targetAppId;
-(void)setTargetAppId:(NSURL *)arg1 ;
-(NSURL *)eventId;
-(void)setEventId:(NSURL *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)participants;
-(id)encodedClassName;
-(void)setLimit:(NSNumber *)arg1 ;
-(NSNumber *)limit;
@end


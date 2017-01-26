/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <SAObjects/SADomainObjectDelete.h>

@class EKEventStore;

@interface CalAssistantEventDelete : SADomainObjectDelete {

	EKEventStore* _eventStore;

}
-(id)_deleteEvent:(id)arg1 ;
-(id)_validateEvent:(id)arg1 ;
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
-(CalDatabase*)database;
-(void)setDatabase:(CalDatabase*)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end


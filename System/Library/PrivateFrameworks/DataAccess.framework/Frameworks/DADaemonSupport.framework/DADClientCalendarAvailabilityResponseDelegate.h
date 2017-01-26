/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarAvailabilityResponseConsumer.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, NSArray, NSObject;

@interface DADClientCalendarAvailabilityResponseDelegate : DADClientDelegate <DAEventsCalendarAvailabilityResponseConsumer> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _ignoredEventID;
	NSArray* _addresses;
	id _requestID;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)calendarAvailabilityRequestFinishedWithError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ignoredEventID:(id)arg5 addresses:(id)arg6 ;
-(void)performRequest;
-(void)calendarAvailabilityRequestReturnedResults:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end


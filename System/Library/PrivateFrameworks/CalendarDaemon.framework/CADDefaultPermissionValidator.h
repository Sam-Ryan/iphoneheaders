/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADPermissionValidator.h>

@class ClientConnection, NSString;

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator> {

	ClientConnection* _connection;

}

@property (retain) ClientConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL canModifySuggestedEventCalendar; 
@property (readonly) BOOL canMakeSpotlightChanges; 
@property (readonly) BOOL canModifyCalendarDatabase; 
@property (readonly) BOOL canSetAutomaticLocationGeocodingAllowedValue; 
-(id)init;
-(ClientConnection *)connection;
-(void)setConnection:(ClientConnection *)arg1 ;
-(id)initWithClientConnection:(id)arg1 ;
-(BOOL)canSetAutomaticLocationGeocodingAllowedValue;
-(BOOL)canMakeSpotlightChanges;
-(BOOL)canModifySuggestedEventCalendar;
-(BOOL)canModifyCalendarDatabase;
@end

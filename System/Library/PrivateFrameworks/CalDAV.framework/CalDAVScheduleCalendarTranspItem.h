/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _transparent;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * transparent;              //@synthesize transparent=_transparent - In the implementation block
@property (nonatomic,readonly) BOOL isScheduleTransparent; 
-(BOOL)isScheduleTransparent;
-(id)copyParseRules;
-(void)setTransparent:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)transparent;
@end


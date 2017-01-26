/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem {

	CoreDAVLeafItem* _rank;
	CoreDAVLeafItem* _language;
	CoreDAVLeafItem* _region;
	CoreDAVLeafItem* _calendarDescription;

}

@property (nonatomic,retain) CoreDAVLeafItem * rank;                             //@synthesize rank=_rank - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * language;                         //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * region;                           //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * calendarDescription;              //@synthesize calendarDescription=_calendarDescription - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(void)setRegion:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)region;
-(CoreDAVLeafItem *)language;
-(void)setLanguage:(CoreDAVLeafItem *)arg1 ;
-(void)setRank:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)rank;
-(CoreDAVLeafItem *)calendarDescription;
-(void)setCalendarDescription:(CoreDAVLeafItem *)arg1 ;
@end


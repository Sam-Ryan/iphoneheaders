/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:01:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNVCardDateComponentsFormatter, NSCalendar;

@interface CNVCardDateComponentsParser : NSObject {

	CNVCardDateComponentsFormatter* _formatter;
	NSCalendar* _gregorianCalendar;

}
-(void)dealloc;
-(id)init;
-(id)gregorianDateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 omitYear:(long long)arg2 ;
-(id)dateComponentsFromString:(id)arg1 calendarIdentifier:(id)arg2 ;
@end


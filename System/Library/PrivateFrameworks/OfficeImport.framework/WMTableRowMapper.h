/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDTableRow;

@interface WMTableRowMapper : CMMapper {

	WDTableRow* mWdTableRow;
	double mHeight;

}
+(BOOL)isTableRowDeleted:(id)arg1 ;
-(void)setRowProperties:(id)arg1 ;
-(double)height;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDTableRow:(id)arg1 parent:(id)arg2 ;
@end


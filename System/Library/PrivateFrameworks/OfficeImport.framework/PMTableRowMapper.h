/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTable, OADTableRow;

@interface PMTableRowMapper : CMMapper {

	OADTable* mTable;
	OADTableRow* mRow;
	unsigned long long mRowIndex;

}
-(float)height;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(unsigned long long)cellCount;
-(id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3 ;
@end


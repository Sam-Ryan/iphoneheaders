/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXCell : NSObject
+(int)edCellTypeFromXmlCellElement:(xmlNode*)arg1 isDate:(BOOL*)arg2 isFmlaStr:(BOOL*)arg3 stringIndex:(BOOL*)arg4 ;
+(BOOL)edBoolFromXmlBoolString:(id)arg1 ;
+(double)dateTimeNumberFromXmlDateString:(id)arg1 state:(id)arg2 ;
+(int)edErrorFromXmlErrorString:(id)arg1 ;
+(void)initialize;
+(void)edCellFromXmlCellElement:(xmlNode*)arg1 edRowInfo:(EDRowInfo*)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCECellValue.h>

@interface TSCEBooleanCellValue : TSCECellValue {

	TSCEBooleanValue* mBooleanValue;

}
-(void)encodeToArchive:(BooleanCellValueArchive*)arg1 ;
-(BOOL)isEqualToCellValue:(id)arg1 ;
-(id)initWithArchive:(const BooleanCellValueArchive*)arg1 locale:(id)arg2 ;
-(id)initWithBooleanValue:(TSCEBooleanValue*)arg1 locale:(id)arg2 ;
-(id)initWithBoolean:(BOOL)arg1 locale:(id)arg2 ;
-(void)dealloc;
-(id)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCEBooleanValue*)booleanValue;
-(SCD_Struct_TS61)formatStruct;
@end


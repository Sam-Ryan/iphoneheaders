/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@interface TNFormSelection : TSKSelection {

	unsigned char _fieldIndex;
	unsigned short _recordIndex;

}

@property (nonatomic,readonly) unsigned short recordIndex;              //@synthesize recordIndex=_recordIndex - In the implementation block
@property (nonatomic,readonly) unsigned char fieldIndex;                //@synthesize fieldIndex=_fieldIndex - In the implementation block
+(Class)archivedSelectionClass;
+(id)selectionForRecordIndex:(unsigned short)arg1 fieldIndex:(unsigned char)arg2 ;
+(id)selection;
-(id)initWithRecordIndex:(unsigned short)arg1 fieldIndex:(unsigned char)arg2 ;
-(unsigned short)recordIndex;
-(unsigned char)fieldIndex;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


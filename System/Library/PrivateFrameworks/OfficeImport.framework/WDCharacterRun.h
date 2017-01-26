/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSMutableString;

@interface WDCharacterRun : WDRun {

	WDCharacterProperties* mProperties;
	NSMutableString* mString;
	BOOL mBinaryWriterContentFlag;

}
-(BOOL)binaryWriterContentFlag;
-(void)setBinaryWriterContentFlag:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(void)appendString:(id)arg1 ;
-(BOOL)isEmpty;
-(id)string;
-(void)setString:(id)arg1 ;
-(id)properties;
-(int)runType;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(void)copyPropertiesFrom:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(void)setPropertiesForDocument;
-(void)clearString;
-(id)initWithParagraph:(id)arg1 string:(id)arg2 ;
-(void)clearProperties;
@end


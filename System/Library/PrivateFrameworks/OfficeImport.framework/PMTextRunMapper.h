/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTextRun;

@interface PMTextRunMapper : CMMapper {

	OADTextRun* mTextRun;

}
-(id)fontScheme;
-(id)copyCharacterStyleWithState:(id)arg1 ;
-(BOOL)_isDefaultFill:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOadTextRun:(id)arg1 parent:(id)arg2 ;
-(void)addFontForLanguageType:(int)arg1 toCharacterStyle:(id)arg2 ;
@end


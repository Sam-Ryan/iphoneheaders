/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSATheme.h>

@interface TPTheme : TSATheme
+(id)themeWithContext:(id)arg1 alternate:(int)arg2 withStylesheet:(id)arg3 ;
+(void)initialize;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)headerAndFooterStyle;
-(id)bodyStyle;
-(id)_paragraphStylePresetWithName:(id)arg1 orContentTag:(id)arg2 ;
-(void)p_saveToArchive:(ThemeArchive*)arg1 archiver:(id)arg2 ;
-(id)footnoteStyle;
@end

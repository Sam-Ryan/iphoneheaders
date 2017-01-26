/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TCOfficeFontInfo : NSObject {

	BOOL _isBold;
	BOOL _isItalic;
	NSString* _fontName;
	NSString* _alphaFontName;

}

@property (nonatomic,readonly) NSString * fontName;                   //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) NSString * alphaFontName;              //@synthesize alphaFontName=_alphaFontName - In the implementation block
@property (nonatomic,readonly) BOOL isBold;                           //@synthesize isBold=_isBold - In the implementation block
@property (nonatomic,readonly) BOOL isItalic;                         //@synthesize isItalic=_isItalic - In the implementation block
+(id)officeFontInfoWithFontName:(id)arg1 alphaFontName:(id)arg2 isBold:(BOOL)arg3 isItalic:(BOOL)arg4 ;
-(void)dealloc;
-(id)description;
-(NSString *)fontName;
-(BOOL)isBold;
-(BOOL)isItalic;
-(id)initWithFontName:(id)arg1 alphaFontName:(id)arg2 isBold:(BOOL)arg3 isItalic:(BOOL)arg4 ;
-(NSString *)alphaFontName;
@end


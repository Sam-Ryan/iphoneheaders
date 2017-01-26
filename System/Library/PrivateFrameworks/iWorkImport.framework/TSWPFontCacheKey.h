/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSWPFontCacheKey : NSObject {

	NSString* _fontName;
	double _fontSize;
	unsigned long long _hash;

}

@property (nonatomic,readonly) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double fontSize;                  //@synthesize fontSize=_fontSize - In the implementation block
+(id)cacheKeyWithFontName:(id)arg1 size:(double)arg2 ;
-(id)initWithFontName:(id)arg1 size:(double)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)fontName;
-(double)fontSize;
@end


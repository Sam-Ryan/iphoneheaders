/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKCSSToken;

@interface IKCSSTokenizer : NSObject {

	unsigned long long currentOffset;
	unsigned long long textBytesCharCount;
	unsigned short* textBytes;
	IKCSSToken* reconsumeToken;

}
+(BOOL)isWhitespace:(unsigned short)arg1 ;
+(BOOL)isDigit:(unsigned short)arg1 ;
+(BOOL)isNameStartCodePoint:(unsigned short)arg1 ;
+(BOOL)isUppercaseLetter:(unsigned short)arg1 ;
+(BOOL)isLowercaseLetter:(unsigned short)arg1 ;
+(BOOL)isLetter:(unsigned short)arg1 ;
+(BOOL)isNonASCIICodePoint:(unsigned short)arg1 ;
+(BOOL)isNewline:(unsigned short)arg1 ;
+(BOOL)isHexDigit:(unsigned short)arg1 ;
+(BOOL)isNameCodePoint:(unsigned short)arg1 ;
+(BOOL)isNonPrintable:(unsigned short)arg1 ;
-(void)dealloc;
-(id)initWithText:(id)arg1 ;
-(id)_consumeToken:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(BOOL)isEOF:(unsigned long long)arg1 ;
-(unsigned short)_getChar:(unsigned long long)arg1 ;
-(id)_consumeWhitespace:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeString:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 toEndChar:(unsigned short)arg3 ;
-(id)_consumeHash:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeDollar:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeAsterisk:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumePlus:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeMinus:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeDot:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeSlash:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeLessThan:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeAt:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeBackslash:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeCaret:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeNumeric:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeNameStart:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumePipe:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeTilde:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(BOOL)isValidEscape:(unsigned long long)arg1 ;
-(unsigned short)_consumeEscapedCodePoint:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(BOOL)wouldStartIdentifier:(unsigned long long)arg1 ;
-(id)_consumeName:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeIdentLike:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(BOOL)wouldStartNumber:(unsigned long long)arg1 ;
-(id)_consumeUrl:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(void)_consumeBadUrlRemnants:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)_consumeNumber:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
-(id)getNextToken;
-(void)reconsumeToken:(id)arg1 ;
-(id)_consumeUnicodeRange:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 ;
@end


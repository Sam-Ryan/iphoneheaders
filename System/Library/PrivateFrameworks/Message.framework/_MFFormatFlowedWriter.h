/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class MFPlainTextDocument, NSMutableString;

@interface _MFFormatFlowedWriter : NSObject {

	MFPlainTextDocument* _inputDocument;
	unsigned _encoding;
	NSMutableString* _outputString;
	NSMutableString* _quotedString;
	unsigned _addedTrailingSpaces : 1;
	NSMutableString* _lineString;

}
+(id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned)arg2 ;
-(void)dealloc;
-(id)outputString;
-(BOOL)addedTrailingSpaces;
-(id)quotedString;
-(unsigned long long)_findLineBreakInRange:(NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(BOOL)arg3 ;
-(void)_outputQuotedParagraph:(id)arg1 range:(NSRange)arg2 withQuoteLevel:(unsigned)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:26:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/CloudRecentsMigrator.migrator/CloudRecentsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInputStream, NSData, NSMutableData, NSError, NSString;

@interface CRCSVParser : NSObject {

	BOOL _shouldAbort;
	NSInputStream* _stream;
	NSData* _separatorData;
	NSMutableData* _data;
	unsigned long long _head;
	BOOL _consumedNullText;
	/*^block*/id _parsedLineBlock;
	NSError* _parserError;
	NSString* _separator;

}

@property (nonatomic,copy) NSString * separator;              //@synthesize separator=_separator - In the implementation block
-(id)_parseSeparator;
-(void)_fillBuffer:(unsigned long long)arg1 ;
-(id)_parseDoubleQuote;
-(id)_parseField;
-(unsigned long long)_availableBytes;
-(id)_consumeSingleCharacter:(char)arg1 ;
-(BOOL)parseableDataAvailable;
-(id)_parseLineSeparator;
-(void)setParsedLineBlock:(/*^block*/id)arg1 ;
-(id)_parseText;
-(id)_parseTwoDoubleQuotes;
-(BOOL)_ensureBufferSize:(unsigned long long)arg1 ;
-(id)_parseEscapedText;
-(id)_parseRecord;
-(void)abortParsing;
-(id)parserError;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)setSeparator:(NSString *)arg1 ;
-(BOOL)shouldProceedParsing;
-(void)didFinishParsing;
-(void)didFindError:(id)arg1 ;
-(BOOL)parse;
-(NSString *)separator;
@end


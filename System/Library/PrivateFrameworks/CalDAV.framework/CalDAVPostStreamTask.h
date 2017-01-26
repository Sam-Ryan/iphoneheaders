/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask {

	NSString* _previousScheduleTag;
	NSString* _filename;

}

@property (nonatomic,retain) NSString * previousScheduleTag;              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
@property (nonatomic,retain) NSString * filename;                         //@synthesize filename=_filename - In the implementation block
-(void)setFilename:(NSString *)arg1 ;
-(id)requestBody;
-(NSString *)previousScheduleTag;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)lossyAsciiFilename;
-(id)utf8PercentEscapedFilename;
-(id)responseData;
-(id)additionalHeaderValues;
-(id)requestBodyStream;
-(NSString *)filename;
@end


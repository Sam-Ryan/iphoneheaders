/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalLogWriter.h>

@class NSString;

@interface CalLogFileWriter : CalLogWriter {

	NSString* _path;
	int _fileDescriptor;
	BOOL _fileDescriptorIsValid;

}

@property (nonatomic,retain) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int fileDescriptor;                      //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (assign,nonatomic) BOOL fileDescriptorIsValid;              //@synthesize fileDescriptorIsValid=_fileDescriptorIsValid - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)setFileDescriptorIsValid:(BOOL)arg1 ;
-(BOOL)fileDescriptorIsValid;
-(void)setFileDescriptor:(int)arg1 ;
-(int)fileDescriptor;
-(void)write:(id)arg1 ;
@end

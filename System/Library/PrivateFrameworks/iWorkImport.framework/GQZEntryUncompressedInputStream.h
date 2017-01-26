/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/GQZEntryInputStream.h>

@protocol GQZArchiveInputStream;
@class NSString;

@interface GQZEntryUncompressedInputStream : NSObject <GQZEntryInputStream> {

	long long mOffset;
	long long mEnd;
	id<GQZArchiveInputStream> mInput;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 input:(id)arg3 ;
-(void)dealloc;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)readToOwnBuffer:(const char**)arg1 size:(unsigned long long*)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ReportCrash/ReportCrash-Structs.h>
@class NSMutableDictionary;

@interface KCContainer : NSObject {

	unsigned _type;
	int _pid;
	unsigned long long _tag;
	NSMutableDictionary* _data;
	NSMutableDictionary* _truncated_threads;

}

@property (nonatomic,readonly) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long tag;                               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) int pid;                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * truncated_threads;              //@synthesize truncated_threads=_truncated_threads - In the implementation block
-(id)initWithKCData:(kcdata_item*)arg1 ;
-(void)omit;
-(NSMutableDictionary *)truncated_threads;
-(void)dealloc;
-(unsigned)type;
-(NSMutableDictionary *)data;
-(unsigned long long)tag;
-(void)setPid:(int)arg1 ;
-(int)pid;
@end


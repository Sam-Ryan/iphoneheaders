/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface KNRecordingEvent : NSObject <NSCopying> {

	double mStartTime;

}

@property (nonatomic,readonly) double startTime; 
@property (getter=isIgnoredWhenSeeking,nonatomic,readonly) BOOL ignoredWhenSeeking; 
@property (nonatomic,readonly) BOOL canPrecedeDiscontinuity; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(id)initWithStartTime:(double)arg1 ;
-(BOOL)isIgnoredWhenSeeking;
-(BOOL)canPrecedeDiscontinuity;
-(id)recordingEventByAddingTimeOffset:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
@end


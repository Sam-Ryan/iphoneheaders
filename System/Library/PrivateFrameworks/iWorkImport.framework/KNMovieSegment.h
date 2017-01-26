/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSPData;

@interface KNMovieSegment : NSObject {

	TSPData* mMovieData;
	double mStartTime;

}

@property (nonatomic,readonly) TSPData * movieData; 
@property (getter=isEmptySegment,nonatomic,readonly) BOOL emptySegment; 
@property (nonatomic,readonly) double startTime; 
-(void)saveToArchive:(MovieSegmentArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 archive:(const MovieSegmentArchive*)arg2 unarchiver:(id)arg3 ;
-(TSPData *)movieData;
-(id)movieSegmentByAddingTimeOffset:(double)arg1 ;
-(id)initWithMovieData:(id)arg1 startTime:(double)arg2 ;
-(id)initEmptySegmentWithStartTime:(double)arg1 ;
-(BOOL)isEmptySegment;
-(void)dealloc;
-(id)init;
-(double)startTime;
@end


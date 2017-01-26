/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSArray;

@interface KNRecordingMovieTrack : TSPObject {

	NSArray* mMovieSegments;

}

@property (nonatomic,readonly) NSArray * movieSegments; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(RecordingMovieTrackArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const RecordingMovieTrackArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 movieSegments:(id)arg2 ;
-(id)movieTrackByReplacingSegmentAfterTime:(double)arg1 withMovieTrack:(id)arg2 ;
-(NSArray *)movieSegments;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end

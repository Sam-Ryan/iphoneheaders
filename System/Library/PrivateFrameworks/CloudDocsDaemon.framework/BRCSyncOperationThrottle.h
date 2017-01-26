/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {

	BOOL _isSyncDown;
	int _lastErrorKind;
	double _delay;
	double _nextTry;
	NSString* _containerID;

}

@property (nonatomic,readonly) double delay;                      //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double nextTry;                    //@synthesize nextTry=_nextTry - In the implementation block
@property (nonatomic,readonly) int lastErrorKind;                 //@synthesize lastErrorKind=_lastErrorKind - In the implementation block
@property (nonatomic,retain) NSString * containerID;              //@synthesize containerID=_containerID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)delay;
-(void)clear;
-(void)setContainerID:(NSString *)arg1 ;
-(NSString *)containerID;
-(void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1 ;
-(id)initWithContainerID:(id)arg1 isSyncDown:(BOOL)arg2 ;
-(void)updateAfterSchedulingTask;
-(BOOL)updateForClearingOutOfQuota;
-(void)updateForError:(id)arg1 ;
-(double)nextTry;
-(int)lastErrorKind;
@end


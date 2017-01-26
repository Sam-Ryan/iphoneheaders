/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBProcessState;

@interface FBApplicationProcessExitContext : NSObject {

	FBProcessState* _stateBeforeExiting;
	unsigned long long _launchdExitReason;
	unsigned long long _exitReason;
	long long _terminationReason;

}

@property (nonatomic,readonly) unsigned long long exitReason;                         //@synthesize exitReason=_exitReason - In the implementation block
@property (nonatomic,readonly) long long terminationReason;                           //@synthesize terminationReason=_terminationReason - In the implementation block
@property (nonatomic,copy,readonly) FBProcessState * stateBeforeExiting;              //@synthesize stateBeforeExiting=_stateBeforeExiting - In the implementation block
@property (nonatomic,readonly) long long exitStatus; 
@property (nonatomic,readonly) BOOL exitedNormally; 
@property (nonatomic,readonly) int exitCode; 
@property (nonatomic,readonly) int terminationSignal; 
+(unsigned long long)exitReasonForLaunchdExitReason:(unsigned long long)arg1 ;
+(id)descriptionForExitReason:(unsigned long long)arg1 ;
-(long long)terminationReason;
-(void)dealloc;
-(id)description;
-(id)initWithExitReason:(unsigned long long)arg1 terminationReason:(long long)arg2 state:(id)arg3 ;
-(unsigned long long)exitReason;
-(BOOL)exitedNormally;
-(long long)exitStatus;
-(int)exitCode;
-(int)terminationSignal;
-(BOOL)consideredJetsam;
-(BOOL)fairPlayFailure;
-(FBProcessState *)stateBeforeExiting;
@end


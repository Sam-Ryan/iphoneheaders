/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface SBLockScreenViewRequesterTracker : NSObject {

	NSMutableSet* _requesters;

}
-(BOOL)hasRequesters;
-(void)setRequested:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)addRequester:(id)arg1 ;
-(void)removeRequester:(id)arg1 ;
@end


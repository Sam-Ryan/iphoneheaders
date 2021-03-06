/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface IMCallMonitor : NSObject {

	id _callCenter;
	BOOL _wasOnCall;
	NSDate* _lastCallDate;

}

@property (nonatomic,readonly) BOOL isOnCall; 
@property (nonatomic,retain,readonly) NSDate * dateLastCallEnded;              //@synthesize lastCallDate=_lastCallDate - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)isOnCall;
-(NSDate *)dateLastCallEnded;
@end


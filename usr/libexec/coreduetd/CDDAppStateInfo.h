/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDate, NSString;

@interface CDDAppStateInfo : NSObject {

	NSNumber* _state;
	NSDate* _timestamp;
	NSNumber* _processId;
	NSString* _displayId;

}

@property (retain) NSNumber * state;                  //@synthesize state=_state - In the implementation block
@property (retain) NSDate * timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (retain) NSNumber * processId;              //@synthesize processId=_processId - In the implementation block
@property (retain) NSString * displayId;              //@synthesize displayId=_displayId - In the implementation block
-(id)initWithState:(id)arg1 timestamp:(id)arg2 displayId:(id)arg3 processId:(id)arg4 ;
-(void)setDisplayId:(NSString *)arg1 ;
-(void)setProcessId:(NSNumber *)arg1 ;
-(NSDate *)timestamp;
-(NSNumber *)state;
-(void)setState:(NSNumber *)arg1 ;
-(NSString *)displayId;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSNumber *)processId;
@end


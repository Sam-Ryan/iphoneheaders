/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMStopWatch : NSObject {

	unsigned long long _startTime;
	NSString* _description;

}
+(id)stopwatchWithDescription:(id)arg1 ;
+(id)stopwatch;
+(void)initialize;
-(void)reportWithMarker:(id)arg1 ;
-(id)init;
-(id)description;
-(void)reset;
-(void)start;
-(double)time;
-(void)setDescription:(id)arg1 ;
-(void)report;
@end


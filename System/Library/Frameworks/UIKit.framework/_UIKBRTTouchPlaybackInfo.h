/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIKBRTTouchPlaybackInfo : NSObject {

	int _rowId;
	double _timeIntervalSinceLastStep;

}

@property (nonatomic,readonly) int rowId;                                     //@synthesize rowId=_rowId - In the implementation block
@property (nonatomic,readonly) double timeIntervalSinceLastStep;              //@synthesize timeIntervalSinceLastStep=_timeIntervalSinceLastStep - In the implementation block
+(id)withRowId:(int)arg1 andTimeInterval:(double)arg2 ;
-(id)initWithRowId:(int)arg1 andTimeInterval:(double)arg2 ;
-(int)rowId;
-(double)timeIntervalSinceLastStep;
@end

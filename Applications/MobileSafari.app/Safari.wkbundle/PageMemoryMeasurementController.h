/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileSafari.app/Safari.wkbundle/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/MeasurementControllerBase.h>

@class NSTimer;

@interface PageMemoryMeasurementController : MeasurementControllerBase {

	NSTimer* _waitForMemoryPressureHandler;

}
-(id)_memoryUsage;
-(void)_waitForMemoryPressureHandlerTimerFired:(id)arg1 ;
-(void)_postPageLoadEnd;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureVideoDataOutput.h>

@class CAMCaptureEngine;

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput {

	CAMCaptureEngine* __engine;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _engine;              //@synthesize _engine=__engine - In the implementation block
-(void)changeToDirection:(long long)arg1 ;
-(id)initWithEngine:(id)arg1 ;
-(CAMCaptureEngine *)_engine;
@end


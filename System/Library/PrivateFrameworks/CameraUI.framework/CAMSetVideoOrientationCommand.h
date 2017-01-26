/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSetVideoOrientationCommand : CAMCaptureCommand {

	long long __captureOrientation;

}

@property (nonatomic,readonly) long long _captureOrientation;              //@synthesize _captureOrientation=__captureOrientation - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(long long)_captureOrientation;
-(long long)_videoOrientationForCaptureOrientation:(long long)arg1 ;
-(id)initWithCaptureOrientation:(long long)arg1 ;
@end


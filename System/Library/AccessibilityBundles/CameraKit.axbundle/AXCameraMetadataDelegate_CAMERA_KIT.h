/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/CameraKit.axbundle/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>

@class NSString;

@interface AXCameraMetadataDelegate_CAMERA_KIT : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_accessibilityHandleMetadataOutput:(id)arg1 ;
-(BOOL)markDetectionInProgress;
-(void)performDetectionsWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleFaceOutput:(id)arg1 ;
-(void)markDetectionFinished;
-(void)updateAccessibleFaceElementsWithFaces:(id)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
@end


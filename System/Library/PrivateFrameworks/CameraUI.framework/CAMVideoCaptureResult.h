/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSURL, NSArray, NSDate, NSError;

@interface CAMVideoCaptureResult : NSObject {

	BOOL _finalReferenceVideo;
	NSURL* _localDestinationURL;
	NSURL* _masterVideoURL;
	NSArray* _metadata;
	double _videoZoomFactor;
	long long _reason;
	IOSurfaceRef _videoPreviewSurface;
	NSDate* _captureDate;
	NSError* _error;
	SCD_Struct_CA2 _duration;
	SCD_Struct_CA2 _stillDisplayTime;

}

@property (nonatomic,readonly) NSURL * localDestinationURL;                                        //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,readonly) NSURL * masterVideoURL;                                             //@synthesize masterVideoURL=_masterVideoURL - In the implementation block
@property (getter=isFinalReferenceVideo,nonatomic,readonly) BOOL finalReferenceVideo;              //@synthesize finalReferenceVideo=_finalReferenceVideo - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 duration;                                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillDisplayTime;                                    //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata;                                            //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) double videoZoomFactor;                                             //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (nonatomic,readonly) long long reason;                                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef videoPreviewSurface;                                   //@synthesize videoPreviewSurface=_videoPreviewSurface - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                               //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                    //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(SCD_Struct_CA2)duration;
-(long long)reason;
-(NSArray *)metadata;
-(NSDate *)captureDate;
-(SCD_Struct_CA2)stillDisplayTime;
-(NSError *)error;
-(NSURL *)localDestinationURL;
-(NSURL *)masterVideoURL;
-(BOOL)isFinalReferenceVideo;
-(double)videoZoomFactor;
-(id)initWithURL:(id)arg1 masterVideoURL:(id)arg2 isFinalReferenceVideo:(BOOL)arg3 duration:(SCD_Struct_CA2)arg4 stillDisplayTime:(SCD_Struct_CA2)arg5 metadata:(id)arg6 videoZoomFactor:(double)arg7 reason:(long long)arg8 videoPreviewSurface:(void*)arg9 error:(id)arg10 ;
-(IOSurfaceRef)videoPreviewSurface;
@end


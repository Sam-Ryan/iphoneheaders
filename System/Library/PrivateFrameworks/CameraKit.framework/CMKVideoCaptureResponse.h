/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKCaptureResponse.h>

@class NSString, UIImage;

@interface CMKVideoCaptureResponse : CMKCaptureResponse {

	BOOL _unplayable;
	BOOL _didCompleteUnexpectedly;
	short _assetSubtype;
	int _recordingStoppedReason;
	NSString* _videoCapturePath;
	UIImage* _videoPreviewImage;
	double _duration;

}

@property (nonatomic,copy) NSString * videoCapturePath;                          //@synthesize videoCapturePath=_videoCapturePath - In the implementation block
@property (assign,nonatomic) int recordingStoppedReason;                         //@synthesize recordingStoppedReason=_recordingStoppedReason - In the implementation block
@property (nonatomic,retain) UIImage * videoPreviewImage;                        //@synthesize videoPreviewImage=_videoPreviewImage - In the implementation block
@property (getter=isSuccessful,nonatomic,readonly) BOOL successful; 
@property (assign,nonatomic) short assetSubtype;                                 //@synthesize assetSubtype=_assetSubtype - In the implementation block
@property (assign,nonatomic) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isUnplayable,nonatomic) BOOL unplayable;                //@synthesize unplayable=_unplayable - In the implementation block
@property (assign,nonatomic) BOOL didCompleteUnexpectedly;                       //@synthesize didCompleteUnexpectedly=_didCompleteUnexpectedly - In the implementation block
+(double)minimumVideoCaptureDuration;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setVideoCapturePath:(NSString *)arg1 ;
-(UIImage *)videoPreviewImage;
-(void)setVideoPreviewImage:(UIImage *)arg1 ;
-(BOOL)isSuccessful;
-(int)recordingStoppedReason;
-(BOOL)isUnplayable;
-(void)setRecordingStoppedReason:(int)arg1 ;
-(void)setUnplayable:(BOOL)arg1 ;
-(BOOL)didCompleteUnexpectedly;
-(void)setDidCompleteUnexpectedly:(BOOL)arg1 ;
-(void)setAssetSubtype:(short)arg1 ;
-(short)assetSubtype;
-(NSString *)videoCapturePath;
@end


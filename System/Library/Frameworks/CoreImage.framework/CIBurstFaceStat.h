/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CIBurstFaceStat : NSObject <NSCopying> {

	BOOL leftEyeOpen;
	BOOL rightEyeOpen;
	BOOL smiling;
	BOOL foundByFaceCore;
	BOOL hasLeftEye;
	BOOL hasRightEye;
	BOOL leftEyePleasant;
	BOOL rightEyePleasant;
	BOOL mouthPleasant;
	BOOL hasRollAngle;
	BOOL hasYawAngle;
	BOOL smallFace;
	BOOL _isSyncedWithImage;
	float normalizedSigma;
	int faceId;
	int hwFaceId;
	int framesSinceLast;
	float focusScore;
	float normalizedFocusScore;
	float faceScore;
	float leftEyeBlinkScore;
	float rightEyeBlinkScore;
	float smileScore;
	int FCRLeftEyeFeaturesOffset;
	int FCRRightEyeFeaturesOffset;
	int FCRSmileFeaturesOffset;
	int FCRBlinkFeaturesSize;
	int FCRSmileFeaturesSize;
	float faceHOGTime;
	float faceCropTime;
	float faceScoreTime;
	float normalizedSmileScore;
	float rollAngle;
	float yawAngle;
	NSMutableArray* FCRSmileAndBlinkFeatures;
	NSMutableArray* faceHOG;
	double timestamp;
	CGRect faceRect;
	CGRect normalizedFaceRect;
	CGRect leftEyeRect;
	CGRect rightEyeRect;
	CGRect _hwFaceRect;

}

@property (assign) BOOL leftEyeOpen; 
@property (assign) BOOL rightEyeOpen; 
@property (assign) BOOL smiling; 
@property (assign) float leftEyeBlinkScore; 
@property (assign) float rightEyeBlinkScore; 
@property (assign) float smileScore; 
@property (assign) BOOL hasLeftEye; 
@property (assign) BOOL hasRightEye; 
@property (assign) BOOL foundByFaceCore; 
@property (assign) CGRect faceRect; 
@property (assign) CGRect normalizedFaceRect; 
@property (assign) int faceId; 
@property (assign) int framesSinceLast; 
@property (assign) float focusScore; 
@property (assign) float faceScore; 
@property (assign) CGRect leftEyeRect; 
@property (assign) CGRect rightEyeRect; 
@property (assign) int FCRLeftEyeFeaturesOffset; 
@property (assign) int FCRRightEyeFeaturesOffset; 
@property (assign) int FCRSmileFeaturesOffset; 
@property (assign) int FCRBlinkFeaturesSize; 
@property (assign) int FCRSmileFeaturesSize; 
@property (assign) NSMutableArray * FCRSmileAndBlinkFeatures; 
@property (assign) float faceHOGTime; 
@property (assign) float faceCropTime; 
@property (assign) float faceScoreTime; 
@property (assign) NSMutableArray * faceHOG; 
@property (assign) float normalizedSmileScore; 
@property (assign) BOOL leftEyePleasant; 
@property (assign) BOOL rightEyePleasant; 
@property (assign) BOOL mouthPleasant; 
@property (assign) int hwFaceId; 
@property (assign) CGRect hwFaceRect;                                      //@synthesize hwFaceRect=_hwFaceRect - In the implementation block
@property (assign) float normalizedFocusScore; 
@property (assign) float normalizedSigma; 
@property (assign) BOOL hasRollAngle; 
@property (assign) BOOL hasYawAngle; 
@property (assign) float rollAngle; 
@property (assign) float yawAngle; 
@property (assign) double timestamp; 
@property (assign) BOOL isSyncedWithImage;                                 //@synthesize isSyncedWithImage=_isSyncedWithImage - In the implementation block
@property (assign) BOOL smallFace; 
-(int)faceId;
-(CGRect)normalizedFaceRect;
-(BOOL)hasLeftEye;
-(CGRect)leftEyeRect;
-(float)leftEyeBlinkScore;
-(BOOL)hasRightEye;
-(CGRect)rightEyeRect;
-(float)rightEyeBlinkScore;
-(float)smileScore;
-(float)focusScore;
-(BOOL)leftEyeOpen;
-(BOOL)rightEyeOpen;
-(BOOL)smiling;
-(BOOL)smallFace;
-(int)FCRLeftEyeFeaturesOffset;
-(int)FCRRightEyeFeaturesOffset;
-(int)FCRSmileFeaturesOffset;
-(int)FCRBlinkFeaturesSize;
-(int)FCRSmileFeaturesSize;
-(void)setSmiling:(BOOL)arg1 ;
-(float)normalizedFocusScore;
-(CGRect)faceRect;
-(void)setFaceId:(int)arg1 ;
-(void)setFaceRect:(CGRect)arg1 ;
-(int)framesSinceLast;
-(void)setFramesSinceLast:(int)arg1 ;
-(void)setHwFaceId:(int)arg1 ;
-(int)hwFaceId;
-(CGRect)hwFaceRect;
-(void)setHwFaceRect:(CGRect)arg1 ;
-(BOOL)isSyncedWithImage;
-(void)setNormalizedFaceRect:(CGRect)arg1 ;
-(void)setFoundByFaceCore:(BOOL)arg1 ;
-(void)setHasLeftEye:(BOOL)arg1 ;
-(void)setHasRightEye:(BOOL)arg1 ;
-(void)setLeftEyeOpen:(BOOL)arg1 ;
-(void)setRightEyeOpen:(BOOL)arg1 ;
-(void)setLeftEyeBlinkScore:(float)arg1 ;
-(void)setRightEyeBlinkScore:(float)arg1 ;
-(void)setSmileScore:(float)arg1 ;
-(void)setSmallFace:(BOOL)arg1 ;
-(void)setLeftEyeRect:(CGRect)arg1 ;
-(void)setRightEyeRect:(CGRect)arg1 ;
-(BOOL)foundByFaceCore;
-(void)setFocusScore:(float)arg1 ;
-(void)setNormalizedFocusScore:(float)arg1 ;
-(void)setNormalizedSigma:(float)arg1 ;
-(void)setIsSyncedWithImage:(BOOL)arg1 ;
-(float)normalizedSigma;
-(float)faceScore;
-(float)normalizedSmileScore;
-(BOOL)leftEyePleasant;
-(BOOL)rightEyePleasant;
-(BOOL)mouthPleasant;
-(NSMutableArray *)faceHOG;
-(NSMutableArray *)FCRSmileAndBlinkFeatures;
-(id)initWithFaceStat:(id)arg1 ;
-(void)setFaceScore:(float)arg1 ;
-(void)setFCRLeftEyeFeaturesOffset:(int)arg1 ;
-(void)setFCRRightEyeFeaturesOffset:(int)arg1 ;
-(void)setFCRSmileFeaturesOffset:(int)arg1 ;
-(void)setFCRBlinkFeaturesSize:(int)arg1 ;
-(void)setFCRSmileFeaturesSize:(int)arg1 ;
-(void)setFCRSmileAndBlinkFeatures:(NSMutableArray *)arg1 ;
-(float)faceHOGTime;
-(void)setFaceHOGTime:(float)arg1 ;
-(float)faceCropTime;
-(void)setFaceCropTime:(float)arg1 ;
-(float)faceScoreTime;
-(void)setFaceScoreTime:(float)arg1 ;
-(void)setFaceHOG:(NSMutableArray *)arg1 ;
-(void)setNormalizedSmileScore:(float)arg1 ;
-(void)setLeftEyePleasant:(BOOL)arg1 ;
-(void)setRightEyePleasant:(BOOL)arg1 ;
-(void)setMouthPleasant:(BOOL)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasRollAngle:(BOOL)arg1 ;
-(void)setRollAngle:(float)arg1 ;
-(void)setHasYawAngle:(BOOL)arg1 ;
-(void)setYawAngle:(float)arg1 ;
-(BOOL)hasRollAngle;
-(float)rollAngle;
-(BOOL)hasYawAngle;
-(float)yawAngle;
@end


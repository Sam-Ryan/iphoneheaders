/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>

@class NSDictionary, NSArray, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding> {

	NSDictionary* _formatDictionary;
	BOOL _isMultiStreamFormat;
	BOOL _isExternalFormat;
	opaqueCMFormatDescriptionRef _formatDescription;

}

@property (readonly) unsigned mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (getter=isExperimental,readonly) BOOL experimental; 
@property (getter=isDefaultActiveFormat,readonly) BOOL defaultActiveFormat; 
@property (readonly) int videoFormatIndex; 
@property (readonly) unsigned videoFormat; 
@property (readonly) SCD_Struct_BW12 videoDimensions; 
@property (readonly) SCD_Struct_BW12 sensorDimensions; 
@property (readonly) float videoMinSupportedFrameRate; 
@property (readonly) float videoMaxSupportedFrameRate; 
@property (readonly) float videoDefaultMinFrameRate; 
@property (readonly) float videoDefaultMaxFrameRate; 
@property (readonly) float videoFieldOfView; 
@property (getter=isVideoBinned,readonly) BOOL videoBinned; 
@property (readonly) int videoStabilizationTypeOverrideForStandard; 
@property (readonly) int videoStabilizationTypeOverrideForCinematic; 
@property (getter=isVideoZoomSupported,readonly) BOOL videoZoomSupported; 
@property (readonly) float videoMaxZoomFactor; 
@property (readonly) float videoZoomFactorUpscaleThreshold; 
@property (getter=isVideoZoomDynamicSensorCropSupported,readonly) BOOL videoZoomDynamicSensorCropSupported; 
@property (getter=isVideoLowLightBinningSwitchSupported,readonly) BOOL videoLowLightBinningSwitchSupported; 
@property (readonly) int videoRawBitDepth; 
@property (readonly) int temporalNoiseReductionMode; 
@property (readonly) BOOL ispChromaNoiseReductionEnabled; 
@property (readonly) float minISO; 
@property (readonly) float maxISO; 
@property (readonly) SCD_Struct_BW2 minExposureDuration; 
@property (readonly) SCD_Struct_BW2 maxExposureDuration; 
@property (readonly) float aeMaxGain; 
@property (readonly) int maxIntegrationTimeOverride; 
@property (readonly) int autoFocusSystem; 
@property (getter=isMultiStreamFormat,readonly) BOOL multiStreamFormat; 
@property (readonly) BOOL hasFrontEndScalerCompanionIndex; 
@property (readonly) int frontEndScalerCompanionIndex; 
@property (readonly) SCD_Struct_BW12 sensorCropDimensions; 
@property (readonly) SCD_Struct_BW12 sourceCropAspectRatio; 
@property (readonly) BOOL hasSensorHDRCompanionIndex; 
@property (readonly) int sensorHDRCompanionIndex; 
@property (readonly) BOOL prefersSensorHDREnabled; 
@property (readonly) BOOL capturesStillsFromVideoStream; 
@property (getter=isPhotoFormat,readonly) BOOL photoFormat; 
@property (getter=isHighResPhotoFormat,readonly) BOOL highResPhotoFormat; 
@property (readonly) BOOL needsPreviewDPCC; 
@property (getter=isStillImageStabilizationSupported,readonly) BOOL stillImageStabilizationSupported; 
@property (getter=isIrisSupported,readonly) BOOL irisSupported; 
@property (readonly) int stillImageStabilizationFusionScheme; 
@property (getter=isHDRSupported,readonly) BOOL hdrSupported; 
@property (getter=isHighResStillImageSupported,readonly) BOOL highResStillImageSupported; 
@property (getter=isQuadraHighResStillImageSupported,readonly) BOOL quadraHighResStillImageSupported; 
@property (readonly) SCD_Struct_BW12 highResStillImageDimensions; 
@property (getter=isStillImageISPChromaNoiseReductionEnabled,readonly) BOOL stillImageISPChromaNoiseReductionEnabled; 
@property (getter=isHighProfileH264Supported,readonly) BOOL highProfileH264Supported; 
@property (readonly) NSArray * AVCaptureSessionPresets; 
@property (readonly) float videoScaleFactor; 
@property (readonly) BOOL isExternalFormat; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned)videoFormat;
-(BOOL)hasFrontEndScalerCompanionIndex;
-(int)videoStabilizationTypeOverrideForStandard;
-(int)videoStabilizationTypeOverrideForCinematic;
-(BOOL)capturesStillsFromVideoStream;
-(int)frontEndScalerCompanionIndex;
-(int)sensorHDRCompanionIndex;
-(SCD_Struct_BW12)sensorCropDimensions;
-(SCD_Struct_BW12)sourceCropAspectRatio;
-(int)temporalNoiseReductionMode;
-(BOOL)ispChromaNoiseReductionEnabled;
-(BOOL)isStillImageISPChromaNoiseReductionEnabled;
-(int)maxIntegrationTimeOverride;
-(float)aeMaxGain;
-(BOOL)isMultiStreamFormat;
-(int)stillImageStabilizationFusionScheme;
-(BOOL)isVideoZoomSupported;
-(SCD_Struct_BW12)_outputDimensions;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(BOOL)isExternalFormat;
-(id)copyWithNewVideoPixelFormat:(unsigned)arg1 ;
-(SCD_Struct_BW12)_maxUseableSensorDimensions;
-(SCD_Struct_BW12)_visibleSensorDimensionsIncludingCinematic:(BOOL)arg1 ;
-(float)videoScaleFactor;
-(BOOL)isPhotoFormat;
-(BOOL)isIrisSupported;
-(BOOL)isVideoStabilizationModeSupported:(int)arg1 ;
-(BOOL)isDefaultActiveFormat;
-(NSArray *)AVCaptureSessionPresets;
-(SCD_Struct_BW2)minExposureDuration;
-(SCD_Struct_BW2)maxExposureDuration;
-(float)minISO;
-(float)maxISO;
-(SCD_Struct_BW12)sensorDimensions;
-(float)videoFieldOfView;
-(BOOL)isVideoBinned;
-(float)videoZoomFactorUpscaleThreshold;
-(BOOL)isExperimental;
-(float)videoMinSupportedFrameRate;
-(float)videoMaxSupportedFrameRate;
-(BOOL)hasSensorHDRCompanionIndex;
-(SCD_Struct_BW12)highResStillImageDimensions;
-(BOOL)isHighResStillImageSupported;
-(BOOL)prefersSensorHDREnabled;
-(BOOL)isVideoLowLightBinningSwitchSupported;
-(BOOL)isVideoZoomDynamicSensorCropSupported;
-(int)videoRawBitDepth;
-(BOOL)isHighResPhotoFormat;
-(BOOL)isHighProfileH264Supported;
-(BOOL)needsPreviewDPCC;
-(int)videoFormatIndex;
-(float)videoDefaultMaxFrameRate;
-(float)videoDefaultMinFrameRate;
-(BOOL)isQuadraHighResStillImageSupported;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(unsigned)mediaType;
-(float)videoMaxZoomFactor;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(SCD_Struct_BW12)videoDimensions;
-(BOOL)isStillImageStabilizationSupported;
-(BOOL)isHDRSupported;
-(int)autoFocusSystem;
@end


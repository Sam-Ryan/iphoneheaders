/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, AVCaptureConnection, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {

	AVCaptureVideoPreviewLayerInternal* _internal;

}

@property (nonatomic,retain) AVCaptureSession * session; 
@property (nonatomic,readonly) AVCaptureConnection * connection; 
@property (copy) NSString * videoGravity; 
@property (getter=isOrientationSupported,nonatomic,readonly) BOOL orientationSupported; 
@property (assign,nonatomic) long long orientation; 
@property (getter=isMirroringSupported,nonatomic,readonly) BOOL mirroringSupported; 
@property (assign,nonatomic) BOOL automaticallyAdjustsMirroring; 
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored; 
+(void)initialize;
+(id)layerWithSession:(id)arg1 ;
+(id)layerWithSessionWithNoConnection:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(id)_input;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(AVCaptureConnection *)connection;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id)sinkID;
-(void)bumpChangeSeed;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(int)changeSeed;
-(void)setSinkID:(id)arg1 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)liveConnections;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(double)previewRotationDegrees;
-(BOOL)automaticallyAdjustsMirroring;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2 ;
-(void)centerSublayer:(long long)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(BOOL)_automaticallyAdjustsMirroring;
-(BOOL)_isMirrored;
-(void)_updateCaptureDeviceTransform;
-(BOOL)isMirroringSupported;
-(BOOL)isChromaNoiseReductionSupported;
-(void)_setSensorAndEstimatedPreviewSizes;
-(BOOL)isOrientationSupported;
-(void)setAutomaticallyAdjustsMirroring:(BOOL)arg1 ;
-(void)setMirrored:(BOOL)arg1 ;
-(BOOL)isChromaNoiseReductionEnabled;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(id)activeConnections;
-(id)connections;
-(NSString *)videoGravity;
-(BOOL)isMirrored;
-(long long)_orientation;
-(id)initWithSession:(id)arg1 ;
-(AVCaptureSession *)session;
-(BOOL)isPaused;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
@end


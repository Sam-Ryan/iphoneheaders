/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaRep.h>

@protocol TSDAudioHUDController;
@class TSKAVPlayerController, CALayer, TSDMovieInfo;

@interface TSDAudioRep : TSDMediaRep {

	TSKAVPlayerController* mPlayerController;
	CALayer* mPlayPauseButtonLayer;
	CALayer* mAudioImageLayer;
	CALayer* mSpinnerLayer;
	float mDynamicVolume;
	BOOL mIsChangingDynamicVolume;
	id<TSDAudioHUDController> mAudioHUDController;

}

@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(BOOL)directlyManagesLayerContent;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(BOOL)canResetMediaSize;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)shouldAllowReplacementFromPaste;
-(BOOL)shouldAllowReplacementFromDrop;
-(void)dealloc;
-(Class)layerClass;
-(void)drawInContext:(CGContextRef)arg1 ;
-(TSDMovieInfo *)movieInfo;
@end


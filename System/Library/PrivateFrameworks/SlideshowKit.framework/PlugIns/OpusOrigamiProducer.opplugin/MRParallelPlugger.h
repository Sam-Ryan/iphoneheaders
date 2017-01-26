/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCAnimationPath, MRAnimationPathScalar, MRAnimationContext, MCPlugParallel;

@interface MRParallelPlugger : NSObject {

	MCAnimationPath* mAnimationPathParam1;
	MCAnimationPath* mAnimationPathParam2;
	MCAnimationPath* mAnimationPathXY;
	MRAnimationPathScalar* mAnimationPathX;
	MRAnimationPathScalar* mAnimationPathY;
	MRAnimationPathScalar* mAnimationPathZ;
	MRAnimationPathScalar* mAnimationPathScale;
	MRAnimationPathScalar* mAnimationPathRX;
	MRAnimationPathScalar* mAnimationPathRY;
	MRAnimationPathScalar* mAnimationPathRZ;
	MRAnimationPathScalar* mAnimationPathOpacity;
	MRAnimationContext* mAnimationContext;
	BOOL mPlugWasSetSinceLastRendering;
	unsigned char mCurrentLayoutIndex;
	BOOL mNeedsUpdate;
	MCPlugParallel* mPlug;

}

@property (nonatomic,copy) MCPlugParallel * plug; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) BOOL needsUpdate; 
-(unsigned char)currentLayoutIndex;
-(void)setOpacityAnimationPath:(id)arg1 ;
-(void)setPlug:(MCPlugParallel *)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(BOOL)applyAtTime:(double)arg1 toSublayer:(id)arg2 withArguments:(id)arg3 ;
-(MCPlugParallel *)plug;
-(void)dealloc;
-(id)init;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end

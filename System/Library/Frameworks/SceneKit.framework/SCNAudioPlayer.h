/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class AVAudioNode, AVAudioPlayerNode, SCNAudioSource;

@interface SCNAudioPlayer : NSObject {

	AVAudioNode* _audioNode;
	AVAudioPlayerNode* _audioPlayer;
	SCNAudioSource* _audioSource;
	C3DNodeRef _nodeRef;
	C3DSceneRef _scene;
	BOOL _customAudioNode;
	BOOL _completed;
	/*^block*/id willStartPlayback;
	/*^block*/id didFinishPlayback;

}

@property (nonatomic,copy) id willStartPlayback; 
@property (nonatomic,copy) id didFinishPlayback; 
@property (nonatomic,readonly) AVAudioNode * audioNode;                   //@synthesize audioNode=_audioNode - In the implementation block
@property (nonatomic,readonly) SCNAudioSource * audioSource;              //@synthesize audioSource=_audioSource - In the implementation block
@property (readonly) C3DSceneRef scene;                                   //@synthesize scene=_scene - In the implementation block
@property (readonly) BOOL customAudioNode;                                //@synthesize customAudioNode=_customAudioNode - In the implementation block
@property (assign) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
@property (readonly) AVAudioPlayerNode * audioPlayer;                     //@synthesize audioPlayer=_audioPlayer - In the implementation block
+(id)audioPlayerWithAVAudioNode:(id)arg1 ;
+(id)audioPlayerWithSource:(id)arg1 ;
-(BOOL)completed;
-(void)dealloc;
-(void)reset;
-(void)setCompleted:(BOOL)arg1 ;
-(SCNAudioSource *)audioSource;
-(id)initWithSource:(id)arg1 ;
-(void)recycle;
-(void)play;
-(id)initWithAVAudioNode:(id)arg1 ;
-(void)setWillStartPlayback:(id)arg1 ;
-(void)setDidFinishPlayback:(id)arg1 ;
-(id)didFinishPlayback;
-(id)willStartPlayback;
-(id)audioBufferFormat;
-(void)setNodeRef:(C3DNodeRef)arg1 ;
-(C3DNodeRef)nodeRef;
-(void*)__CFObject;
-(AVAudioNode *)audioNode;
-(BOOL)customAudioNode;
-(AVAudioPlayerNode *)audioPlayer;
-(C3DSceneRef)scene;
@end


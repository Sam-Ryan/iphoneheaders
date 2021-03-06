/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction {

	FBSScene* _scene;
	FBSSerialQueue* _callOutQueue;

}

@property (nonatomic,retain) FBSScene * scene;                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) FBSSerialQueue * callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
-(FBSSerialQueue *)callOutQueue;
-(void)dealloc;
-(FBSScene *)scene;
-(void)setScene:(FBSScene *)arg1 ;
@end


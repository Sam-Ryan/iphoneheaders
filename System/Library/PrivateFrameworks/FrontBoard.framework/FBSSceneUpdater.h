/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSSceneUpdater <NSObject>
@required
-(void)scene:(id)arg1 didReceiveActions:(id)arg2;
-(void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
-(void)unregisterDelegateForSceneID:(id)arg1;
-(BOOL)willObserveLayersManually;
-(void)scene:(id)arg1 didAttachLayer:(id)arg2;
-(void)scene:(id)arg1 didUpdateLayer:(id)arg2;
-(void)scene:(id)arg1 didDetachLayer:(id)arg2;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;

@end

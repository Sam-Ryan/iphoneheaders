/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUISceneManager <NSObject>
@required
-(id)workspace:(id)arg1 identityForSceneWithName:(id)arg2 specification:(id)arg3;
-(void)registerSceneWorkspace:(id)arg1;
-(void)invalidateSceneWorkspace:(id)arg1;
-(void)workspace:(id)arg1 createSceneWithName:(id)arg2 specification:(id)arg3;
-(void)workspace:(id)arg1 destroySceneWithIdentity:(id)arg2;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartBoundsLayoutSceneDelegate.h>

@interface TSCH3DChartBoundsLayoutSceneDelegatePie : TSCH3DChartBoundsLayoutSceneDelegate
-(id)interestedClasses;
-(BOOL)willBeginProcessingSceneObject:(id)arg1 ;
-(void)didEndProcessingSceneObject:(id)arg1 ;
-(ElementRenderPass)renderPassForSceneObject:(id)arg1 ;
-(BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)willProcessElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(ElementRenderPass)renderPassForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(void)didTransformElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willRenderElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willSubmitElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
@end

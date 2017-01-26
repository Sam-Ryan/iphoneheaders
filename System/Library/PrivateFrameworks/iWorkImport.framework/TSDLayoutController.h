/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDCanvas, TSDRootLayout, NSMutableSet, TSDLayout;

@interface TSDLayoutController : NSObject {

	TSDCanvas* mCanvas;
	TSDRootLayout* mRootLayout;
	CFDictionaryRef mLayoutsByInfo;
	NSMutableSet* mInvalidLayouts;
	NSMutableSet* mLayoutsNeedingRecreating;
	NSMutableSet* mInvalidChildrenLayouts;
	TSDLayout* mValidatingLayout;

}
+(void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(/*^block*/id)arg2 ;
+(id)allInteractiveLayoutControllers;
-(BOOL)isLayoutOffscreen;
-(id)layoutForInfo:(id)arg1 ;
-(id)layoutForInfo:(id)arg1 childOfLayout:(id)arg2 ;
-(void)invalidateLayout:(id)arg1 ;
-(void)invalidateChildrenOfLayout:(id)arg1 ;
-(id)rootLayout;
-(void)validateLayoutWithDependencies:(id)arg1 ;
-(void)i_registerLayout:(id)arg1 ;
-(void)i_unregisterLayout:(id)arg1 ;
-(void)i_removeAllLayouts;
-(CGRect)rectOfTopLevelLayouts;
-(void)validateLayouts;
-(id)layoutsInRect:(CGRect)arg1 ;
-(id)validatedLayoutForInfo:(id)arg1 ;
-(id)layoutsForInfo:(id)arg1 ;
-(void)validateLayouts:(id)arg1 ;
-(id)sortLayoutsForDependencies:(id)arg1 ;
-(void)validateLayoutsWithDependencies:(id)arg1 ;
-(id)validatedLayoutsForInfo:(id)arg1 ;
-(void)invalidateLayoutForRecreation:(id)arg1 ;
-(id)layoutsForInfos:(id)arg1 ;
-(id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2 ;
-(void)notifyThatLayoutsChangedOutsideOfLayout;
-(void)invalidateLayoutProxiesWithKeyPath:(id)arg1 ;
-(void)dealloc;
-(id)canvas;
-(void)setInfos:(id)arg1 ;
-(id)initWithCanvas:(id)arg1 ;
@end


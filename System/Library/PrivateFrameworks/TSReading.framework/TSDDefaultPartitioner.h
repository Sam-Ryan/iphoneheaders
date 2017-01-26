/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPartitioner.h>
#import <TSReading/TSDCanvasDelegate.h>

@protocol TSDInfo;
@class NSObject, TSDCanvas, TSDLayout, TSUPointerKeyDictionary, NSString;

@interface TSDDefaultPartitioner : NSObject <TSDPartitioner, TSDCanvasDelegate> {

	NSObject*<TSDInfo> mInfo;
	TSDCanvas* mCanvas;
	TSDLayout* mLayout;
	TSUPointerKeyDictionary* mMainRepsByCanvas;
	TSUPointerKeyDictionary* mCachedImagesByCanvas;
	TSUPointerKeyDictionary* mPartialRepsByCanvas;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)i_layout;
-(void)p_generateLayouts;
-(void)p_teardownLayouts;
-(unsigned long long)p_edgesForHintBounds:(CGRect)arg1 ;
-(id)p_nextHintForSize:(CGSize)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 ;
-(id)p_firstHintForSize:(CGSize)arg1 ;
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2 ;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4 ;
-(id)hintForLayout:(id)arg1 ;
-(id)i_repForCanvas:(id)arg1 ;
-(CGImageRef)i_cachedImageForCanvas:(id)arg1 ;
-(void)i_setCachedImage:(CGImageRef)arg1 forCanvas:(id)arg2 ;
-(void)i_removeCachedImageForCanvas:(id)arg1 ;
-(void)i_registerPartialRep:(id)arg1 ;
-(void)i_unregisterPartialRep:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(id)documentRoot;
@end


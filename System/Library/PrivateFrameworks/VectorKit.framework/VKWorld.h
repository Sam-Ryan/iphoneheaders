/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKWorldDelegate;
#import <VectorKit/VectorKit-Structs.h>
@class VKModelObject;

@interface VKWorld : NSObject {

	id<VKWorldDelegate> _delegate;
	VKModelObject* _modelRoot;

}

@property (nonatomic,readonly) VKModelObject * modelRoot;               //@synthesize modelRoot=_modelRoot - In the implementation block
@property (assign,nonatomic) id<VKWorldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<VKWorldDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<VKWorldDelegate>)delegate;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 dispatchQueue:(id)arg4 ;
-(VKModelObject *)modelRoot;
-(void)worldLayoutDidChange;
-(void)worldDisplayDidChange;
-(void)runAnimation:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/FBSceneHostSnapshotView.h>
@class FBSceneSnapshot;


@protocol FBSceneHostSnapshotView <NSObject>
@property (nonatomic,retain,readonly) FBSceneSnapshot * sceneSnapshot; 
@property (nonatomic,retain,readonly) id IOSurface; 
@required
-(id)IOSurface;
-(FBSceneSnapshot *)sceneSnapshot;

@end


@class FBSceneSnapshot, NSString;

@interface FBSceneHostSnapshotView : UIView <FBSceneHostSnapshotView> {

	FBSceneSnapshot* _snapshot;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) FBSceneSnapshot * sceneSnapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain,readonly) id IOSurface; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)_initWithSnapshot:(id)arg1 ;
-(id)IOSurface;
-(FBSceneSnapshot *)sceneSnapshot;
@end


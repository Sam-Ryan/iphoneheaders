/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@protocol NSObjectNSCopying;
@class CALayerHost, CPDistributedMessagingCenter;

@interface MNRemoteView : UIView {

	CALayerHost* _layer;
	CPDistributedMessagingCenter* _center;
	id<NSObject><NSCopying> _remoteViewIdentifier;
	BOOL _hasSentInitialResizeMessage;
	BOOL _hasMovedToWindow;
	BOOL _beingMovedOntoAnotherView;

}

@property (nonatomic,readonly) id<NSObject><NSCopying> remoteViewIdentifier;              //@synthesize remoteViewIdentifier=_remoteViewIdentifier - In the implementation block
+(id)messagesQueue;
-(void)_serverAppTerminated;
-(id)initWithFrame:(CGRect)arg1 messagingCenter:(id)arg2 contextIdentifier:(unsigned)arg3 remoteViewIdentifier:(id)arg4 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)invalidate;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(id<NSObject><NSCopying>)remoteViewIdentifier;
@end


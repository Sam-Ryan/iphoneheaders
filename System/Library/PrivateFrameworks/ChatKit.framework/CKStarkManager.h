/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, UIWindow, UIScreen;

@interface CKStarkManager : NSObject {

	BOOL _isStarkConnected;
	UIViewController* _starkRootViewController;
	UIWindow* _starkWindow;
	UIScreen* _starkScreen;

}

@property (nonatomic,retain) UIViewController * starkRootViewController;              //@synthesize starkRootViewController=_starkRootViewController - In the implementation block
@property (nonatomic,retain) UIWindow * starkWindow;                                  //@synthesize starkWindow=_starkWindow - In the implementation block
@property (nonatomic,retain) UIScreen * starkScreen;                                  //@synthesize starkScreen=_starkScreen - In the implementation block
@property (nonatomic,readonly) BOOL isStarkConnected;                                 //@synthesize isStarkConnected=_isStarkConnected - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)isStarkConnected;
-(void)startListeningForScreenNotifications;
-(void)attachStarkToScreen:(id)arg1 ;
-(void)screenDidConnectNotification:(id)arg1 ;
-(void)screenDidDisconnectNotification:(id)arg1 ;
-(void)detachStarkScreen:(id)arg1 ;
-(void)setStarkScreen:(UIScreen *)arg1 ;
-(void)setStarkWindow:(UIWindow *)arg1 ;
-(void)setStarkRootViewController:(UIViewController *)arg1 ;
-(UIScreen *)starkScreen;
-(UIViewController *)starkRootViewController;
-(UIWindow *)starkWindow;
@end


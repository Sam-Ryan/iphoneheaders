/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppTabBarController;
@class IKJSTabBar;

@interface IKAppTabBar : NSObject {

	id<IKAppTabBarController> _controller;
	IKJSTabBar* _jsTabBar;

}

@property (nonatomic,__weak,readonly) id<IKAppTabBarController> controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) IKJSTabBar * jsTabBar;                               //@synthesize jsTabBar=_jsTabBar - In the implementation block
-(id<IKAppTabBarController>)controller;
-(IKJSTabBar *)jsTabBar;
-(void)onReload;
-(void)onSelect;
-(id)initWithTabBarController:(id)arg1 ;
-(void)setJsTabBar:(IKJSTabBar *)arg1 ;
@end


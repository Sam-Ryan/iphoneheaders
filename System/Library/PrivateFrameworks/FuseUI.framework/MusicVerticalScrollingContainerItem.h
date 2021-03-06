/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UIView, UIViewController;

@interface MusicVerticalScrollingContainerItem : NSObject <NSCoding> {

	UIView* _view;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) UIView * view;                                  //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(id)verticalScrollingContainerWithView:(id)arg1 ;
+(id)verticalScrollingContainerWithViewController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(UIView *)view;
-(UIViewController *)viewController;
-(id)initWithView:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)_handleContentScrollViewDidChangeNotification:(id)arg1 ;
-(void)_registerForContentScrollViewDidChangeNotification;
-(void)_unregisterForContentScrollViewDidChangeNotification;
@end


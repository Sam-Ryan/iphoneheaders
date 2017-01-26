/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface SXFullScreenCanvasViewController : UIViewController {

	BOOL _isObservingNavigationBar;
	BOOL _visible;

}

@property (assign,nonatomic) BOOL isObservingNavigationBar;              //@synthesize isObservingNavigationBar=_isObservingNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL visible;                               //@synthesize visible=_visible - In the implementation block
-(BOOL)isObservingNavigationBar;
-(void)setIsObservingNavigationBar:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end


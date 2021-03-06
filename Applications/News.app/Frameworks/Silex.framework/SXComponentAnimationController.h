/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSMutableSet, UIScrollView, CADisplayLink;

@interface SXComponentAnimationController : NSObject {

	NSMutableSet* _registeredComponents;
	NSMutableSet* _animatingComponents;
	UIScrollView* _scrollView;
	CADisplayLink* _displayLink;
	NSMutableSet* _animationHandlersToFinish;

}

@property (nonatomic,retain) NSMutableSet * registeredComponents;                     //@synthesize registeredComponents=_registeredComponents - In the implementation block
@property (nonatomic,retain) NSMutableSet * animatingComponents;                      //@synthesize animatingComponents=_animatingComponents - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                        //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) CADisplayLink * displayLink;                           //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,readonly) NSMutableSet * animationHandlersToFinish;              //@synthesize animationHandlersToFinish=_animationHandlersToFinish - In the implementation block
-(id)initWithHostingScrollView:(id)arg1 ;
-(void)updateVisibleBounds:(CGRect)arg1 ;
-(id)animatingHandlerForComponent:(id)arg1 ;
-(NSMutableSet *)registeredComponents;
-(id)registeredHandlerForComponent:(id)arg1 ;
-(NSMutableSet *)animatingComponents;
-(void)stopUpdatingAnimationForComponentView:(id)arg1 finishAnimation:(BOOL)arg2 ;
-(CGRect)convertRectForComponent:(id)arg1 ;
-(NSMutableSet *)animationHandlersToFinish;
-(void)finishAnimationHandlerAnimated:(id)arg1 ;
-(void)startOrStopDisplayLink;
-(void)displayLinkTick:(id)arg1 ;
-(void)registerComponentView:(id)arg1 animation:(id)arg2 ;
-(void)unregisterComponentView:(id)arg1 ;
-(void)startUpdatingAnimationForComponentView:(id)arg1 ;
-(void)stopUpdatingAnimationForComponentView:(id)arg1 ;
-(void)setRegisteredComponents:(NSMutableSet *)arg1 ;
-(void)setAnimatingComponents:(NSMutableSet *)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(CADisplayLink *)displayLink;
@end


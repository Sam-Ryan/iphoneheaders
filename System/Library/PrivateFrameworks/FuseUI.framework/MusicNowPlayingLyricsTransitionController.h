/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class MusicNowPlayingViewController, MusicNowPlayingLyricsViewController, NSString;

@interface MusicNowPlayingLyricsTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	/*^block*/id _transitionStartBlock;
	/*^block*/id _transitionFinishBlock;
	/*^block*/id _transitionEndBlock;
	MusicNowPlayingViewController* _nowPlayingViewController;
	MusicNowPlayingLyricsViewController* _lyricsViewController;
	BOOL _presenting;

}

@property (assign,getter=isPresenting,nonatomic) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)isPresenting;
-(void)_prepareTransitionForOverArtwork:(id)arg1 ;
@end


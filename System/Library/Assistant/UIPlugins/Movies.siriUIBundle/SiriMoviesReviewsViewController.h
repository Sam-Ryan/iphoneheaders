/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <SiriUI/SiriUIReviewsViewController.h>
#import <Movies/SiriUIReviewsViewControllerDelegate.h>

@protocol SVSOrientationDelegate;
@class SAMovieV2ReviewListSnippet, NSString;

@interface SiriMoviesReviewsViewController : SiriUIReviewsViewController <SiriUIReviewsViewControllerDelegate> {

	SAMovieV2ReviewListSnippet* _snippet;
	id<SVSOrientationDelegate> _orientationDelegate;

}

@property (getter=_orientationDelegate,nonatomic,retain) id<SVSOrientationDelegate> orientationDelegate;              //@synthesize orientationDelegate=_orientationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_orientationDelegate;
-(id)initWithMovieReviewListSnippet:(id)arg1 ;
-(void)setOrientationDelegate:(id<SVSOrientationDelegate>)arg1 ;
-(double)_minCellWidth;
@end


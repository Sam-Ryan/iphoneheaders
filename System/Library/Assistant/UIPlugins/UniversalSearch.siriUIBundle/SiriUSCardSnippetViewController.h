/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>

@class UIViewController;

@interface SiriUSCardSnippetViewController : SiriUISnippetViewController {

	UIViewController* _cardViewController;
	double _calculatedHeight;

}
-(id)initWithUniversalSearchCardResult:(id)arg1 snippet:(id)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(double)desiredHeightForWidth:(double)arg1 ;
@end


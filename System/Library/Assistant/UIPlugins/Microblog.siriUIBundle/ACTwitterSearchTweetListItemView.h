/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class SAMicroblogMicroblogSearchResultPost, UILabel, UIImageView, ACTwitterRetweetsView;

@interface ACTwitterSearchTweetListItemView : UIView {

	SAMicroblogMicroblogSearchResultPost* _twitterPost;
	UILabel* _fullNameLabel;
	UILabel* _screenNameLabel;
	UIImageView* _profileImageView;
	UILabel* _tweetLabel;
	UILabel* _dateLabel;
	ACTwitterRetweetsView* _retweetsView;

}
+(id)_absoluteCreationDateFormatter;
-(id)_tweetLabelHyperlinkAttributes;
-(id)initWithTwitterPost:(id)arg1 ;
-(CGSize)_calculateSizeForWidth:(double)arg1 setFrames:(BOOL)arg2 ;
-(id)_contentTextForPost:(id)arg1 ;
-(id)_screenNameLabelAttributes;
-(id)_fullNameLabelAttributes;
-(id)_tweetLabelAttributes;
-(id)_dateLabelAttributes;
-(id)_tweetLabelEmphasisedAttributes;
-(void)_enumerateMatchingRangesForString:(id)arg1 inString:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(double)_topLineBaseline;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_bottomPadding;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface ACTweetDetailStatsView : UIView {

	UILabel* _retweetsLabel;

}
+(id)_createLabel;
-(CGSize)_calculateSizeForWidth:(double)arg1 setFrames:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 tweet:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIReusableHeaderView.h>

@class UIImageView;

@interface ACMicroblogHeaderView : SiriUIReusableHeaderView {

	UIImageView* _imageMaskView;
	int _type;

}

@property (assign,nonatomic) int type;              //@synthesize type=_type - In the implementation block
-(void)layoutSubviews;
-(void)setType:(int)arg1 ;
-(int)type;
@end


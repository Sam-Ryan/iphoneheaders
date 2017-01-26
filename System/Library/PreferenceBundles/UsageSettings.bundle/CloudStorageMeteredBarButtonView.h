/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIProgressView;

@interface CloudStorageMeteredBarButtonView : UIView {

	double _percentUsed;
	UILabel* _storageString;
	UIProgressView* _progressBar;

}
+(id)barButtonItemWithString:(id)arg1 andPercentUsed:(double)arg2 ;
-(id)initWithString:(id)arg1 andPercentUsed:(double)arg2 ;
-(void)layoutSubviews;
-(void)sizeToFit;
@end

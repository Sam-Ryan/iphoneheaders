/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSString, UILabel;

@interface SLFacebookAccountVerificationFooterView : UIView <PSHeaderFooterView> {

	NSString* _verificationMessage;
	UILabel* _verificationMessageLabel;

}
-(void)layoutSubviews;
-(id)_font;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(double)_heightForMessageConstrainedToWidth:(double)arg1 ;
@end


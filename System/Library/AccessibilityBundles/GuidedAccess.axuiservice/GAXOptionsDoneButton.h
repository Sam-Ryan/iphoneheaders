/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class GAXStyleProvider;

@interface GAXOptionsDoneButton : UIButton {

	GAXStyleProvider* _styleProvider;

}

@property (nonatomic,retain) GAXStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
+(id)optionsDoneButtonWithTitle:(id)arg1 styleProvider:(id)arg2 ;
-(id)initWithTitle:(id)arg1 styleProvider:(id)arg2 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
@end


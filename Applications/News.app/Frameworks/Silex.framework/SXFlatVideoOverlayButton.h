/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>
#import <Silex/SXVideoOverlayButton.h>

@interface SXFlatVideoOverlayButton : UIButton <SXVideoOverlayButton> {

	long long _style;
	id _target;
	SEL _action;
	int _state;

}

@property (assign,nonatomic) int state;              //@synthesize state=_state - In the implementation block
-(void)recalculateBackdropView;
-(id)_normalFailedButtonImage;
-(id)_highlightedFailedButtonImage;
-(id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3 glyphMaskImageName:(id)arg4 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_normalButtonImage;
-(id)_highlightedButtonImage;
-(void)_handleTap:(id)arg1 ;
@end

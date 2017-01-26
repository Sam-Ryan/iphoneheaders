/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAnimation.h>

@interface UIFrameAnimation : UIAnimation {

	CGRect _startFrame;
	CGRect _endFrame;
	int _fieldsToChange;

}
-(void)setProgress:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(void)setSignificantRectFields:(int)arg1 ;
@end


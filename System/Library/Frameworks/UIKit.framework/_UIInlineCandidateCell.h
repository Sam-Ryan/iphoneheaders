/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface _UIInlineCandidateCell : UIView {

	NSString* _candidate;
	unsigned long long _index;
	UIFont* _font;
	CGSize _stringImageSize;
	BOOL _highlighted;
	id _target;
	SEL _action;
	BOOL _lastItem;
	BOOL _dontDrawRightEdge;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(unsigned long long)index;
-(id)initWithCandidate:(id)arg1 andIndex:(unsigned long long)arg2 withFontSize:(double)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(CGSize)stringImageSize;
-(void)setLastItem:(BOOL)arg1 ;
-(void)dontDrawRightEdge:(BOOL)arg1 ;
@end


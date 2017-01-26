/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@interface UIAccessibilityTextLineElement : UIAccessibilityElement {

	NSRange _range;
	CGRect _bounds;

}

@property (assign,nonatomic) NSRange textRange;              //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) CGRect textBounds;              //@synthesize bounds=_bounds - In the implementation block
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(CGRect)textBounds;
-(void)setTextBounds:(CGRect)arg1 ;
@end


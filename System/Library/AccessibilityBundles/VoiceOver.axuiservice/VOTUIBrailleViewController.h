/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSArray;

@interface VOTUIBrailleViewController : UIViewController {

	long long _orientation;
	NSArray* _dotNumberPositions;
	long long _typingMode;

}

@property (nonatomic,readonly) long long orientation;                     //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) NSArray * dotNumberPositions;              //@synthesize dotNumberPositions=_dotNumberPositions - In the implementation block
@property (nonatomic,readonly) long long typingMode;                      //@synthesize typingMode=_typingMode - In the implementation block
-(void)highlightBrailleDots:(id)arg1 ;
-(NSArray *)dotNumberPositions;
-(long long)typingMode;
-(id)initWithOrientation:(long long)arg1 dotNumberPositions:(id)arg2 typingMode:(long long)arg3 ;
-(void)setOrientation:(long long)arg1 dotNumberPositions:(id)arg2 typingMode:(long long)arg3 ;
-(void)flashInsertedText:(id)arg1 ;
-(long long)orientation;
-(void)loadView;
@end


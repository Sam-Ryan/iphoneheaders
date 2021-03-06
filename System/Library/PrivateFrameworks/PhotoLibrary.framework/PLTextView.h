/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UITextView.h>

@class UILabel;

@interface PLTextView : UITextView {

	UILabel* _placeholder;
	BOOL _showingPlaceholder;

}
-(void)dealloc;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)_placeholder;
-(void)updatePlaceholder;
-(void)setPlaceholderText:(id)arg1 ;
@end


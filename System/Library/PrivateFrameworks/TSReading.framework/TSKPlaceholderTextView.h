/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UITextView.h>

@class UILabel, NSString;

@interface TSKPlaceholderTextView : UITextView {

	UILabel* mPlaceholderView;

}

@property (nonatomic,retain) NSString * placeholder; 
-(void)p_textDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setTextAlignment:(long long)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
@end


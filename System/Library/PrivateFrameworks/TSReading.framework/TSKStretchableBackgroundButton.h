/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@interface TSKStretchableBackgroundButton : UIButton {

	long long mBackgroundTopCapHeight;
	long long mBackgroundLeftCapWidth;

}

@property (assign,nonatomic) long long backgroundTopCapHeight; 
@property (assign,nonatomic) long long backgroundLeftCapWidth; 
-(void)p_resetBackgroundImage;
-(void)setBackgroundTopLeftCapHeight:(long long)arg1 width:(long long)arg2 ;
-(void)guessBackgroundTopLeftCapSize;
-(void)p_resetBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setBackgroundTopCapHeight:(long long)arg1 ;
-(void)setBackgroundLeftCapWidth:(long long)arg1 ;
-(long long)backgroundTopCapHeight;
-(long long)backgroundLeftCapWidth;
-(void)awakeFromNib;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
@end


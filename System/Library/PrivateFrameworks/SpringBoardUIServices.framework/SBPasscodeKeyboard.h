/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIKeyboard.h>

@class SBUIPasscodeLockViewWithKeyboard;

@interface SBPasscodeKeyboard : UIKeyboard {

	SBUIPasscodeLockViewWithKeyboard* _lockView;

}
-(BOOL)isActive;
-(BOOL)shouldSaveMinimizationState;
-(void)minimize;
-(void)maximize;
-(BOOL)canDismiss;
-(id)initWithFrame:(CGRect)arg1 lockView:(id)arg2 ;
@end


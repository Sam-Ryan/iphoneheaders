/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableString, NSString;

@interface TPPasscodeView : UIView {

	NSMutableString* _passcodeMutableString;

}

@property (readonly) NSString * passcodeString; 
@property (retain) NSMutableString * passcodeMutableString;              //@synthesize passcodeMutableString=_passcodeMutableString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)deleteLastCharacter;
-(void)clear;
-(NSString *)passcodeString;
-(void)appendCharacter:(id)arg1 ;
-(void)setPasscodeMutableString:(NSMutableString *)arg1 ;
-(NSMutableString *)passcodeMutableString;
@end


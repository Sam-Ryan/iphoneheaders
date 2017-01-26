/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIView.h>

@class TSDLineEnd;

@interface TSDLineEndView : UIView {

	TSDLineEnd* mLineEnd;
	BOOL mOnRight;

}

@property (nonatomic,retain) TSDLineEnd * lineEnd; 
@property (assign,nonatomic) BOOL onRight; 
+(id)viewWithLineEnd:(id)arg1 onRight:(BOOL)arg2 ;
-(void)setLineEnd:(TSDLineEnd *)arg1 ;
-(void)setOnRight:(BOOL)arg1 ;
-(TSDLineEnd *)lineEnd;
-(BOOL)onRight;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
@end


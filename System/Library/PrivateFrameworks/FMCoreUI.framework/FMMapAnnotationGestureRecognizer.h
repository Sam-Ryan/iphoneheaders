/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@protocol FMMapAnnotationGestureRecognizerDelegate;
@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer {

	id<FMMapAnnotationGestureRecognizerDelegate> _touchDelegate;

}

@property (assign,nonatomic) id<FMMapAnnotationGestureRecognizerDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
-(id)init;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id<FMMapAnnotationGestureRecognizerDelegate>)touchDelegate;
-(void)setTouchDelegate:(id<FMMapAnnotationGestureRecognizerDelegate>)arg1 ;
@end


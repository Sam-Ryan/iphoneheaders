/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIKBRTRecognizerDelegate <NSObject>
@required
-(BOOL)recognizer:(id)arg1 beginTouchDownForTouchWithId:(id)arg2 atPoint:(CGPoint)arg3 forBeginState:(unsigned long long)arg4;
-(BOOL)recognizer:(id)arg1 restartTouchDownForTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5;
-(BOOL)recognizer:(id)arg1 shouldContinueTrackingTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 forResting:(BOOL)arg6;
-(void)recognizer:(id)arg1 willIgnoreTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5;
-(void)recognizer:(id)arg1 releaseTouchToLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4;
-(void)recognizer:(id)arg1 cancelTouchOnLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4;

@end


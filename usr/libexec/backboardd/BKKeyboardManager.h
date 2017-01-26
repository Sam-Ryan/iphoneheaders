/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKGestureRecognizerDelegate.h>

@protocol BKKeyboardManagerDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray, NSString;

@interface BKKeyboardManager : NSObject <BKGestureRecognizerDelegate> {

	NSMutableArray* _attachedKeyboards;
	id<BKKeyboardManagerDelegate> _delegate;
	NSMutableArray* _usableKeyboards;
	NSMutableArray* _gestureRecognizers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,copy,readonly) NSArray * attachedKeyboards; 
@property (assign,nonatomic) id<BKKeyboardManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)gestureRecognizer:(id)arg1 didChangeState:(long long)arg2 ;
-(NSArray *)attachedKeyboards;
-(void)_queue_keyboardsDetected:(id)arg1 ;
-(void)_queue_keyboardRemoved:(id)arg1 ;
-(void)_queue_usableKeyboardAttached:(id)arg1 ;
-(void)_queue_watchForGestures:(id)arg1 ;
-(void)_queue_stopWatchingForGestures:(id)arg1 ;
-(void)_queue_usableKeyboardDetached:(id)arg1 ;
-(void)setDelegate:(id<BKKeyboardManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)debugDescription;
-(id<BKKeyboardManagerDelegate>)delegate;
@end


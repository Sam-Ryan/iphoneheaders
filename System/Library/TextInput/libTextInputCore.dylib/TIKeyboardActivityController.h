/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardAssertionManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSObject, NSTimer, NSHashTable;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate> {

	BOOL _isDirty;
	BOOL _hadRecentActivity;
	BOOL _hasBackgroundActivity;
	unsigned long long _activityState;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	long long _inactiveMemoryPressureCount;
	NSTimer* _inactivityTimer;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) unsigned long long activityState; 
@property (nonatomic,retain) NSTimer * inactivityTimer;                       //@synthesize inactivityTimer=_inactivityTimer - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                       //@synthesize observers=_observers - In the implementation block
+(id)sharedController;
+(double)keyboardIdleTimeoutInterval;
-(void)dealloc;
-(id)init;
-(NSHashTable *)observers;
-(void)removeActivityObserver:(id)arg1 ;
-(void)keyboardBackgroundActivityAssertionsDidChange:(id)arg1 ;
-(NSTimer *)inactivityTimer;
-(void)keyboardAssertionsDidChange;
-(void)keyboardAssertionsDidChange:(id)arg1 ;
-(void)notifyTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)setKeyboardDirtyIfNecessary;
-(void)inactivityTimerFired:(id)arg1 ;
-(void)updateActivityState;
-(void)touchInactivityTimer;
-(void)setKeyboardCleanIfNecessary;
-(void)backgroundActivityAssertionsDidChange;
-(BOOL)shouldBecomeDirty;
-(unsigned long long)activityState;
-(id)createMemoryPressureSource;
-(void)handleMemoryStatusPressure:(unsigned long long)arg1 ;
-(void)setInactivityTimer:(NSTimer *)arg1 ;
-(void)addActivityObserver:(id)arg1 ;
-(BOOL)shouldBecomeClean;
-(void)notifyMemoryPressureLevel:(unsigned long long)arg1 ;
@end

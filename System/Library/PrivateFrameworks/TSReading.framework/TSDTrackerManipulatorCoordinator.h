/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDTrackerManipulator;
@class NSMutableSet, NSObject;

@interface TSDTrackerManipulatorCoordinator : NSObject {

	NSMutableSet* mRegisteredTMs;
	NSObject*<TSDTrackerManipulator> mControllingTM;

}

@property (nonatomic,readonly) NSObject*<TSDTrackerManipulator> controllingTM; 
+(void)p_removeDynamicSubclass:(id)arg1 ;
+(void)p_dynamicallySubclassGRForNotification:(id)arg1 ;
-(void)registerTrackerManipulator:(id)arg1 ;
-(BOOL)takeControlWithTrackerManipulator:(id)arg1 ;
-(NSObject*<TSDTrackerManipulator>)controllingTM;
-(void)operationDidEnd;
-(void)operationWillEnd;
-(BOOL)hasRegisteredTrackerManipulator:(id)arg1 ;
-(void)p_notifyControlChange;
-(BOOL)relinquishTrackerManipulatorControl:(id)arg1 ;
-(void)unregisterTrackerManipulator:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATOperationObserver.h>

@class NSMutableSet, NSString;

@interface _CATObserverManager : NSObject <CATOperationObserver> {

	NSMutableSet* mObservers;
	int mState;
	BOOL mIsObserving;
	int mWillDelegateProgress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)operationDidStart:(id)arg1 ;
-(void)addObserver:(id)arg1 forOperation:(id)arg2 ;
-(void)operationDidProgress:(id)arg1 ;
@end


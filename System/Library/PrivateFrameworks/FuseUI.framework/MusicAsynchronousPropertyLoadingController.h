/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSCountedSet, NSMapTable, NSMutableArray;

@interface MusicAsynchronousPropertyLoadingController : NSObject {

	NSOperationQueue* _asynchronousPropertyLoadingOperationQueue;
	NSCountedSet* _contentDescriptorsBeingObserved;
	NSMapTable* _contentDescriptorsToAllPropertiesToLoadAsynchronously;
	NSMapTable* _entityViewToAsynchronousPropertyLoadOperation;
	NSMutableArray* _visibleEntityViews;

}
-(void)dealloc;
-(void)_handleContentDescriptorDidInvalidateNotification:(id)arg1 ;
-(void)didEndDisplayingEntityView:(id)arg1 ;
-(void)willDisplayEntityView:(id)arg1 ;
-(BOOL)_baseEntityValueProviderSupportsConcurrentLoadingOfEntityProperties:(id)arg1 ;
-(void)_willDisplayEntityViewWithContentDescriptor:(id)arg1 ;
-(void)_rescheduleAsynchronousPropertyLoadingForEntityView:(id)arg1 ;
-(void)_cancelPendingAsynchronousPropertyLoadOperationForEntityView:(id)arg1 ;
-(void)_didEndDisplayingEntityViewWithContentDescriptor:(id)arg1 ;
-(void)_didCompleteAsynchronousPropertyLoadForEntityView:(id)arg1 fromBaseEntityValueProvider:(id)arg2 values:(id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SoftwareBehaviorServices/SoftwareBehaviorServices-Structs.h>
@class NSMutableDictionary, NSLock;

@interface SBManagerClientCache : NSObject {

	BOOL _behaviorBundleSupport;
	BOOL _behaviorBundleSupportKnown;
	NSMutableDictionary* _keyValueCache;
	NSLock* _cacheLock;
	dispatch_queue_sRef _queue;
	map<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > > > >* fCallbacks;

}

@property (assign) BOOL behaviorBundleSupport;                       //@synthesize behaviorBundleSupport=_behaviorBundleSupport - In the implementation block
@property (assign) BOOL behaviorBundleSupportKnown;                  //@synthesize behaviorBundleSupportKnown=_behaviorBundleSupportKnown - In the implementation block
@property (assign) NSMutableDictionary * keyValueCache;              //@synthesize keyValueCache=_keyValueCache - In the implementation block
@property (assign) NSLock * cacheLock;                               //@synthesize cacheLock=_cacheLock - In the implementation block
@property (assign) dispatch_queue_sRef queue;                        //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(dispatch_queue_sRef)queue;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
-(void)setCacheLock:(NSLock *)arg1 ;
-(void)saveBehaviorBundleSupport:(BOOL)arg1 withValue:(BOOL)arg2 ;
-(void)setKeyValueCache:(NSMutableDictionary *)arg1 ;
-(NSLock *)cacheLock;
-(NSMutableDictionary *)keyValueCache;
-(void)setBehaviorBundleSupportKnown:(BOOL)arg1 ;
-(void)setBehaviorBundleSupport:(BOOL)arg1 ;
-(void)resetKeyValueCache;
-(id)copyCachedValueFor:(id)arg1 ;
-(void)cacheValue:(id)arg1 forKey:(id)arg2 ;
-(void)registerCallbackForEvent:(id)arg1 with:(EventCallbackData*)arg2 ;
-(BOOL)deregisterCallbackForEvent:(EventCallbackData*)arg1 ;
-(void)callCallbacksForEvent:(id)arg1 ;
-(BOOL)behaviorBundleSupport;
-(BOOL)behaviorBundleSupportKnown;
@end


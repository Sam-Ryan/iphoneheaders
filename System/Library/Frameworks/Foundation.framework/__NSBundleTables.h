/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSLock, NSMutableSet, NSMutableDictionary;

@interface __NSBundleTables : NSObject {

	NSLock* _lock;
	NSMutableSet* _staticFrameworks;
	NSMutableSet* _loadedBundles;
	NSMutableSet* _loadedFrameworks;
	NSMutableDictionary* _resolvedPathToBundles;
	CFDictionaryRef _bundleForClassMap;

}
+(id)bundleTables;
-(void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setBundle:(id)arg1 forClass:(Class)arg2 ;
-(id)loadedBundles;
-(id)allBundles;
-(void)addStaticFrameworkBundles:(id)arg1 ;
-(id)allFrameworks;
-(id)bundleForPath:(id)arg1 ;
-(void)addBundle:(id)arg1 type:(unsigned long long)arg2 ;
-(id)addBundle:(id)arg1 forPath:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)bundleForClass:(Class)arg1 ;
-(void)finalize;
@end


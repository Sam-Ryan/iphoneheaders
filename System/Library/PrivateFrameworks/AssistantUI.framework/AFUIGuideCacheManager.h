/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SAGuidanceGuideUpdate, NSObject, NSNumber, SAGuidanceGuideSnippet;

@interface AFUIGuideCacheManager : NSObject {

	SAGuidanceGuideUpdate* _cachedGuideUpdate;
	NSObject*<OS_dispatch_queue> _cacheFileQueue;

}

@property (nonatomic,readonly) NSNumber * cachedGuideTag; 
@property (nonatomic,readonly) SAGuidanceGuideSnippet * cachedGuideSnippet; 
+(id)sharedManager;
-(id)init;
-(id)_cachedGuideUpdate;
-(BOOL)_shouldCheckForUpdateAtDate:(id)arg1 ;
-(void)_updateLastCheckedWithDate:(id)arg1 ;
-(id)_pathForCachedGuideUpdate;
-(id)_aceObjectDictionaryAtFilepath:(id)arg1 ;
-(NSNumber *)cachedGuideTag;
-(SAGuidanceGuideSnippet *)cachedGuideSnippet;
-(BOOL)shouldCheckForUpdate;
-(void)updateLastCheckedDate;
-(void)updateCacheWithGuideUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearCachedGuide;
@end


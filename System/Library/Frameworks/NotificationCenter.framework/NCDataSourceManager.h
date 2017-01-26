/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NCParentDataSourceManager.h>

@class NSMutableDictionary, NCSnippetDataSourceManager, NCWidgetDataSourceManager, NSString;

@interface NCDataSourceManager : NSObject <_NCParentDataSourceManager> {

	NSMutableDictionary* _identifiersToSnippetChangeHandlers;
	NSMutableDictionary* _identifiersToWidgetChangeHandlers;
	NCSnippetDataSourceManager* _snippetDataSourceManager;
	NCWidgetDataSourceManager* _widgetDataSourceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)__sharedInstance;
+(void)requestSharedDataSourceManager:(/*^block*/id)arg1 ;
-(void)_start:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_stop:(/*^block*/id)arg1 ;
-(void)childDataSourceManagerDataSourcesDidChange:(id)arg1 ;
-(void)_begin:(/*^block*/id)arg1 ;
-(void)addSnippetDataSourceChangeHandler:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(void)addWidgetDataSourceChangeHandler:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(void)removeChangeHandlersWithIdentifier:(id)arg1 ;
@end


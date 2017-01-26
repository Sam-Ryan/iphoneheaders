/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebPluginManualLoader.h>
#import <WebKitLegacy/WebPluginContainerCheckController.h>

@class WAKView, WebDataSource, NSMutableArray, NSMutableSet, NSString;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {

	WAKView* _documentView;
	WebDataSource* _dataSource;
	NSMutableArray* _views;
	BOOL _started;
	NSMutableSet* _checksInProgress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPlugInView:(id)arg1 ;
+(void)addPlugInView:(id)arg1 ;
-(id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2 ;
-(void)pluginView:(id)arg1 receivedResponse:(id)arg2 ;
-(void)pluginView:(id)arg1 receivedData:(id)arg2 ;
-(void)pluginView:(id)arg1 receivedError:(id)arg2 ;
-(void)pluginViewFinishedLoading:(id)arg1 ;
-(void)destroyAllPlugins;
-(void)stopAllPlugins;
-(void)startAllPlugins;
-(void)addPlugin:(id)arg1 ;
-(void)destroyPlugin:(id)arg1 ;
-(void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1 ;
-(void)stopOnePlugin:(id)arg1 ;
-(void)stopOnePluginForPageCache:(id)arg1 ;
-(void)destroyOnePlugin:(id)arg1 ;
-(void)_cancelOutstandingChecks;
-(void)webPlugInContainerShowStatus:(id)arg1 ;
-(BOOL)plugInsAreRunning;
-(id)superlayerForPluginView:(id)arg1 ;
-(void)stopPluginsForPageCache;
-(void)restorePluginsFromCache;
-(BOOL)processingUserGesture;
-(id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 ;
-(void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2 ;
-(void)webPlugInContainerWillShowFullScreenForView:(id)arg1 ;
-(void)webPlugInContainerDidHideFullScreenForView:(id)arg1 ;
-(void)showStatus:(id)arg1 ;
-(id)URLPolicyCheckReferrer;
-(void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(id)webView;
-(id)webFrame;
-(id)initWithDocumentView:(id)arg1 ;
@end


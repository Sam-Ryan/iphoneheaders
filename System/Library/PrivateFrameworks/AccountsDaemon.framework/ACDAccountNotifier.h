/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSDictionary, NSMutableDictionary;

@interface ACDAccountNotifier : NSObject {

	NSSet* _notificationPlugins;
	NSDictionary* _pluginBundlesByAccountTypeID;
	NSMutableDictionary* _instantiatedPluginsByAccountTypeID;
	NSMutableDictionary* _principalObjectByPluginBundleURL;

}
+(id)sharedAccountNotifier;
+(id)_presumedAccountTypeIDsByNotificationPluginID;
-(id)init;
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4 ;
-(void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4 ;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(id)notificationPlugins;
-(id)_loadPrincipalObjectFromBundle:(id)arg1 ;
-(id)_pluginsRegisteredForAccountType:(id)arg1 ;
-(void)_faultInNotificationPlugins;
-(id)_loadPrincipalObjectsFromBundles:(id)arg1 ;
-(id)_generateMapOfNotificationPluginBundlesByAccountTypeID;
-(void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2 ;
-(void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2 ;
@end


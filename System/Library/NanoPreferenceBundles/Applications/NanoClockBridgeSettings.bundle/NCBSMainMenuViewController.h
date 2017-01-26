/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:32:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoClockBridgeSettings.bundle/NanoClockBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class NSMutableDictionary, NPSDomainAccessor, NPSManager;

@interface NCBSMainMenuViewController : BPSNotificationAppController {

	NSMutableDictionary* _sectionInfo;
	NPSDomainAccessor* _gizmoGlobalDomain;
	NPSManager* _syncManager;
	BOOL _localeForces24HourTime;
	unsigned long long _monogramSpecifierIndex;

}
-(id)_getAlertsActive:(id)arg1 ;
-(void)_writeSectionState;
-(id)_is24HourTime:(id)arg1 ;
-(void)_loadSectionInfo;
-(id)_getMonogram:(id)arg1 ;
-(void)_setNotificationsIndicatorActive:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_getNotificationsIndicatorActive:(id)arg1 ;
-(void)handleCustomMonogramChange:(id)arg1 ;
-(void)_set24HourTime:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_checkAndUpdateSettings;
-(void)_setAlertsActive:(id)arg1 withSpecifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)bundle;
-(id)_currentLocale;
-(id)localizedPaneTitle;
-(id)specifiers;
-(id)applicationBundleIdentifier;
@end


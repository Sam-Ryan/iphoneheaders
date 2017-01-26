/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/BPSInternalGlanceObserverDelegate.h>

@class NSMutableArray, NSMutableDictionary, NSString, BBSectionInfo, NGSGlance, BPSInternalGlanceManager, NPSDomainAccessor, PSSpecifier;

@interface BPSNotificationAppController : PSListController <BPSInternalGlanceObserverDelegate> {

	BOOL _mirrorSettings;
	NSMutableArray* _notificationSpecifiers;
	NSMutableDictionary* _sectionInfo;
	unsigned long long _settingsMode;
	NSString* _bundleIdentifier;
	BBSectionInfo* _bbSectionInfo;
	NSMutableArray* _notificationApplicationSpecifiers;
	NGSGlance* _glance;
	BPSInternalGlanceManager* _manager;
	NPSDomainAccessor* _bbAppsSettings;

}

@property (nonatomic,readonly) NSMutableArray * notificationSpecifiers;                       //@synthesize notificationSpecifiers=_notificationSpecifiers - In the implementation block
@property (nonatomic,readonly) BOOL mirrorSettings;                                           //@synthesize mirrorSettings=_mirrorSettings - In the implementation block
@property (nonatomic,readonly) BOOL showAlerts; 
@property (nonatomic,readonly) BOOL showPreview; 
@property (nonatomic,readonly) NSMutableDictionary * sectionInfo;                             //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,readonly) PSSpecifier * previewSwitchSpecifier; 
@property (assign,nonatomic) unsigned long long settingsMode;                                 //@synthesize settingsMode=_settingsMode - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) BBSectionInfo * bbSectionInfo;                                   //@synthesize bbSectionInfo=_bbSectionInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationApplicationSpecifiers;              //@synthesize notificationApplicationSpecifiers=_notificationApplicationSpecifiers - In the implementation block
@property (nonatomic,retain) NGSGlance * glance;                                              //@synthesize glance=_glance - In the implementation block
@property (nonatomic,retain) BPSInternalGlanceManager * manager;                              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * bbAppsSettings;                              //@synthesize bbAppsSettings=_bbAppsSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BPSInternalGlanceManager *)manager;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)bundle;
-(BOOL)showPreview;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(int)alertType;
-(NGSGlance *)glance;
-(void)setGlance:(NGSGlance *)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(NSMutableDictionary *)sectionInfo;
-(void)settingsManagerReloadedGlances:(id)arg1 ;
-(unsigned long long)settingsMode;
-(void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2 ;
-(id)showsGlance:(id)arg1 ;
-(id)bulletinBoardSettings;
-(BBSectionInfo *)bbSectionInfo;
-(id)sectionInfoForBBSectionInfo:(id)arg1 ;
-(void)setMirrorSettings:(BOOL)arg1 ;
-(BOOL)caresAboutSubsections;
-(void)updateSubsections;
-(BOOL)suppressAlertSpecifiers;
-(void)removeAlertOptions;
-(BOOL)showAlerts;
-(NSMutableArray *)notificationApplicationSpecifiers;
-(void)setSoundsValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)soundsValue:(id)arg1 ;
-(void)setVibrationValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)vibrationValue:(id)arg1 ;
-(BOOL)suppressMirrorOption;
-(void)removeMirrorOptions;
-(BOOL)suppressAllMirrorSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)mirroredApplicationGroupSpecifiers;
-(id)customGroupSpecifierForDescription:(id)arg1 ;
-(id)localizedPaneTitle;
-(void)writeSectionState;
-(void)mirrorSettingsChanged:(BOOL)arg1 ;
-(id)localizedPreviewChoiceTitle;
-(void)setShowPreviewValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)showPreviewValue:(id)arg1 ;
-(id)glanceSpecifierForIdentifier:(id)arg1 ;
-(void)_showSettingsNotifications;
-(void)setShowAlertsValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)showAlertsValue:(id)arg1 ;
-(PSSpecifier *)previewSwitchSpecifier;
-(BOOL)wantsPreviewChoice;
-(id)localizedPreviewGroupLabel;
-(id)localizedPreviewGroupFooter;
-(NSMutableArray *)notificationSpecifiers;
-(BOOL)mirrorSettings;
-(void)setSettingsMode:(unsigned long long)arg1 ;
-(void)setBbSectionInfo:(BBSectionInfo *)arg1 ;
-(void)setNotificationApplicationSpecifiers:(NSMutableArray *)arg1 ;
-(NPSDomainAccessor *)bbAppsSettings;
-(void)setBbAppsSettings:(NPSDomainAccessor *)arg1 ;
-(id)specifiers;
-(id)applicationBundleIdentifier;
-(void)setManager:(BPSInternalGlanceManager *)arg1 ;
@end


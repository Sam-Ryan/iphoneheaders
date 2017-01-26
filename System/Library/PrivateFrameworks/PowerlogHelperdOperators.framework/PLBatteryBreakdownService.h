/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogHelperdOperators/PowerlogHelperdOperators-Structs.h>
#import <PowerlogCore/PLService.h>

@class NSSet, NSDictionary;

@interface PLBatteryBreakdownService : PLService {

	BOOL _showGizmoQualifier;
	NSSet* _rootNodeNames;
	NSSet* _nonAppNames;
	NSSet* _intermediateRootNodes;
	NSSet* _deletedAppNames;
	NSSet* _webAppNames;
	NSDictionary* _nodeIDToNodeName;
	NSDictionary* _installedBundleIDToDisplayName;
	NSDictionary* _installedPluginBundleIDToPluginEntry;
	NSDictionary* _gizmoDaemonToAppBundleID;
	NSDictionary* _gizmoIDSTopicToAppBundleID;
	NSDictionary* _rootNodeNameToRootNodeEnergyKey;
	NSDictionary* _givenNameToMappedName;

}

@property (nonatomic,retain) NSSet * rootNodeNames;                                            //@synthesize rootNodeNames=_rootNodeNames - In the implementation block
@property (nonatomic,retain) NSSet * nonAppNames;                                              //@synthesize nonAppNames=_nonAppNames - In the implementation block
@property (nonatomic,retain) NSSet * intermediateRootNodes;                                    //@synthesize intermediateRootNodes=_intermediateRootNodes - In the implementation block
@property (nonatomic,retain) NSSet * deletedAppNames;                                          //@synthesize deletedAppNames=_deletedAppNames - In the implementation block
@property (nonatomic,retain) NSSet * webAppNames;                                              //@synthesize webAppNames=_webAppNames - In the implementation block
@property (nonatomic,retain) NSDictionary * nodeIDToNodeName;                                  //@synthesize nodeIDToNodeName=_nodeIDToNodeName - In the implementation block
@property (nonatomic,retain) NSDictionary * installedBundleIDToDisplayName;                    //@synthesize installedBundleIDToDisplayName=_installedBundleIDToDisplayName - In the implementation block
@property (nonatomic,retain) NSDictionary * installedPluginBundleIDToPluginEntry;              //@synthesize installedPluginBundleIDToPluginEntry=_installedPluginBundleIDToPluginEntry - In the implementation block
@property (nonatomic,retain) NSDictionary * gizmoDaemonToAppBundleID;                          //@synthesize gizmoDaemonToAppBundleID=_gizmoDaemonToAppBundleID - In the implementation block
@property (nonatomic,retain) NSDictionary * gizmoIDSTopicToAppBundleID;                        //@synthesize gizmoIDSTopicToAppBundleID=_gizmoIDSTopicToAppBundleID - In the implementation block
@property (nonatomic,retain) NSDictionary * rootNodeNameToRootNodeEnergyKey;                   //@synthesize rootNodeNameToRootNodeEnergyKey=_rootNodeNameToRootNodeEnergyKey - In the implementation block
@property (nonatomic,retain) NSDictionary * givenNameToMappedName;                             //@synthesize givenNameToMappedName=_givenNameToMappedName - In the implementation block
@property (assign) BOOL showGizmoQualifier;                                                    //@synthesize showGizmoQualifier=_showGizmoQualifier - In the implementation block
+(void)load;
+(id)whereValidName;
+(id)appNameForBundleID:(id)arg1 ;
+(id)installedPlugins;
+(id)pluginEntryFromProxy:(id)arg1 ;
+(id)rootNodeQualificationNameWithQualificationName:(id)arg1 withRootNodeName:(id)arg2 ;
+(BOOL)canSetQualifier:(int)arg1 forBundleID:(id)arg2 ;
+(id)combineQualifiers:(id)arg1 ;
-(double)totalDuration;
-(id)batteryBreakdownWithRange:(PLTimeIntervalRange)arg1 withEntryTimeInterval:(double)arg2 withQueryType:(int)arg3 ;
-(id)suggestionsWithEnergyEntries:(id)arg1 ;
-(void)clearState;
-(void)setRootNodeNames:(NSSet *)arg1 ;
-(void)setNonAppNames:(NSSet *)arg1 ;
-(void)setDeletedAppNames:(NSSet *)arg1 ;
-(void)setWebAppNames:(NSSet *)arg1 ;
-(void)setNodeIDToNodeName:(NSDictionary *)arg1 ;
-(void)setInstalledBundleIDToDisplayName:(NSDictionary *)arg1 ;
-(void)setInstalledPluginBundleIDToPluginEntry:(NSDictionary *)arg1 ;
-(void)setRootNodeNameToRootNodeEnergyKey:(NSDictionary *)arg1 ;
-(void)setGivenNameToMappedName:(NSDictionary *)arg1 ;
-(void)setGizmoDaemonToAppBundleID:(NSDictionary *)arg1 ;
-(void)setGizmoIDSTopicToAppBundleID:(NSDictionary *)arg1 ;
-(BOOL)wasGizmoConnectedInRange:(PLTimeIntervalRange)arg1 ;
-(void)setShowGizmoQualifier:(BOOL)arg1 ;
-(id)energyEntriesWithRange:(PLTimeIntervalRange)arg1 withEntryTimeInterval:(double)arg2 ;
-(id)addForegroundAndBackgroundDurations:(id)arg1 withRange:(PLTimeIntervalRange)arg2 ;
-(id)populateRootNodeEnergyKeysWithEnergyEntries:(id)arg1 ;
-(id)populateBLDKeysWithEnergyEntries:(id)arg1 ;
-(id)applyStaticNameTransformationsWithEnergyEntries:(id)arg1 ;
-(id)applyDynamicNameTransformationsWithEnergyEntries:(id)arg1 ;
-(id)combineDuplicatesWithEnergyEntries:(id)arg1 ;
-(id)adjustForegroundTimesWithEnergyEntries:(id)arg1 ;
-(id)adjustBackgroundTimesWithEnergyEntries:(id)arg1 ;
-(id)determineDisplayNamesWithEnergyEntries:(id)arg1 ;
-(id)filterWithEnergyEntries:(id)arg1 withQueryType:(int)arg2 ;
-(id)filterEnergyEntriesBasedOnTime:(id)arg1 withQueryType:(int)arg2 ;
-(id)removeNodesNotToShowInInternalUI:(id)arg1 withQueryType:(int)arg2 ;
-(id)qualifiersWithEnergyEntry:(id)arg1 ;
-(double)computeTotalForegroundDuration:(id)arg1 ;
-(double)computeTotalBackgroundDuration:(id)arg1 ;
-(BOOL)shouldShowBatteryBreakdownWithTotalSumEnergy:(double)arg1 ;
-(BOOL)shouldSuggestAutoLockWithEnergyEntries:(id)arg1 ;
-(BOOL)shouldSuggestAutoBrightnessWithEnergyEntries:(id)arg1 ;
-(BOOL)shouldSuggestReduceBrightnessWithEnergyEntries:(id)arg1 ;
-(NSDictionary *)nodeIDToNodeName;
-(NSDictionary *)rootNodeNameToRootNodeEnergyKey;
-(BOOL)showRootNodesInInternal;
-(NSSet *)intermediateRootNodes;
-(int)appTypeForName:(id)arg1 ;
-(NSDictionary *)givenNameToMappedName;
-(id)mapDeletedAppsWithEnergyEntries:(id)arg1 ;
-(id)mapPluginsToAppsWithEnergyEntries:(id)arg1 ;
-(id)mapGizmoToAppsWithEnergyEntries:(id)arg1 ;
-(id)reaccountExchangeEntriesWithEnergyEntries:(id)arg1 ;
-(id)reaccountBackupRestoreWithEnergyEntries:(id)arg1 ;
-(NSSet *)deletedAppNames;
-(NSDictionary *)installedPluginBundleIDToPluginEntry;
-(NSDictionary *)gizmoDaemonToAppBundleID;
-(NSDictionary *)gizmoIDSTopicToAppBundleID;
-(NSDictionary *)installedBundleIDToDisplayName;
-(int)minimumRequiredQueryTypeForAppType:(int)arg1 ;
-(NSSet *)rootNodeNames;
-(NSSet *)nonAppNames;
-(NSSet *)webAppNames;
-(BOOL)showGizmoQualifier;
-(void)setIntermediateRootNodes:(NSSet *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEProfileIngestionDelegate
@required
+(id)getServiceIDForPayload:(id)arg1;
+(void)profileMigrationComplete;
-(BOOL)removeConfiguration:(id)arg1;
-(id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;
-(id)ingestedConfiguration;
-(id)findConfigurationByConfigurationID:(id)arg1;
-(id)findConfigurationByName:(id)arg1;
-(id)findConfigurationByPayloadUUID:(id)arg1;
-(BOOL)loadConfigurationsForceReloadFromDisk;
-(BOOL)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
-(BOOL)saveIngestedConfiguration;
-(BOOL)removeIngestedConfiguration;
-(BOOL)removeConfigurationWithIdentifier:(id)arg1;
-(id)setAsideConfigurationName:(id)arg1 unsetAside:(BOOL)arg2;
-(BOOL)isInstalled:(id)arg1;
-(BOOL)lockConfigurations;
-(void)unlockConfigurations;
-(void)enableDefaultService;
-(BOOL)enableAlwaysOnVpn;
-(BOOL)updateDefaultAfterAddingConfiguration;
-(BOOL)updateDefaultAfterDeletingConfiguration;
-(id)copyManagedConfigurationIDs;
-(BOOL)updateAppLayerVPNMappingRules:(id)arg1;
-(BOOL)updateManagedAppRules:(id)arg1;
-(id)getCertificatesForConfigurationWithIdentifier:(id)arg1;

@end

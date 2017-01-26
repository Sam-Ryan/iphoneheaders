/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountMigrator/BasicAccount.h>
#import <AccountSettings/AccountCreationProtocol.h>

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol>
+(id)_identifier;
+(id)accountWithBasicAccount:(id)arg1 ;
+(id)basicAccountProperties;
+(id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(BOOL)arg2 ;
+(id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1 ;
+(BOOL)isTetheredSyncingDataclass:(id)arg1 ;
+(id)tetheredSourceForDataClass:(id)arg1 ;
+(id)typeString;
-(id)identifier;
-(id)displayName;
-(id)syncStoreIdentifier;
@end


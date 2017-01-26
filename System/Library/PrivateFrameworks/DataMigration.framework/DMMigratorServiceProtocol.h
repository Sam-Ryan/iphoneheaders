/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DMMigratorServiceProtocol <NSObject>
@required
-(void)forceMigrationOnNextRebootWithCompletion:(/*^block*/id)arg1;
-(void)isMigrationNeeded:(/*^block*/id)arg1;
-(void)orderedPluginIdentifiersWithCompletion:(/*^block*/id)arg1;
-(void)migrateCheckingNecessity:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)changeVisibility:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

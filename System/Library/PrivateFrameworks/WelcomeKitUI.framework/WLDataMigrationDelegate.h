/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLDataMigrationDelegate <NSObject>
@required
-(void)dataMigrator:(id)arg1 didUpdateMigrationState:(unsigned long long)arg2;
-(void)dataMigratorDidBecomeRestartable:(id)arg1;
-(void)dataMigratorDidFinish:(id)arg1 withImportErrors:(BOOL)arg2;
-(void)dataMigrator:(id)arg1 didFailWithError:(id)arg2;
-(void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2;
-(void)dataMigrator:(id)arg1 didUpdateProgressString:(id)arg2;
-(void)dataMigratorDidGetInterrupted;

@end


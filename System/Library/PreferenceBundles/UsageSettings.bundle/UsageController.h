/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class CloudStorageGroupController, NSMutableArray, PSSpecifier;

@interface UsageController : PSListController {

	CloudStorageGroupController* _cloudGroup;
	NSMutableArray* _storageSpecifiers;
	PSSpecifier* _storageUsedSpecifier;
	PSSpecifier* _storageAvailableSpecifier;

}
-(id)usageStorageSpecifiers;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
@end


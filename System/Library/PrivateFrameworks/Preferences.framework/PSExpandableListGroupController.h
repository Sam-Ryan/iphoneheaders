/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSpecifierGroupController.h>

@class PSListController, PSSpecifier, NSMutableArray, NSString;

@interface PSExpandableListGroupController : NSObject <PSSpecifierGroupController> {

	PSListController* _listController;
	PSSpecifier* _groupSpecifier;
	long long _collaspeAfterCount;
	NSMutableArray* _specifiers;
	BOOL _showAll;
	PSSpecifier* _showAllSpecifier;
	PSSpecifier* _spinnerSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadSpecifier:(id)arg1 ;
-(long long)_groupIndex;
-(id)spinnerSpecifier;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 collapseAfterCount:(long long)arg3 ;
-(id)showAllSpecifier;
-(void)showAll;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)addSpecifiers:(id)arg1 ;
-(void)removeAllSpecifiers;
-(id)specifiers;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AXNamedItemsListController.h>

@class NSArray;

@interface SCATRecipesController : AXNamedItemsListController {

	NSArray* _launchToRecipeSpecifiers;

}

@property (nonatomic,retain) NSArray * launchToRecipeSpecifiers;              //@synthesize launchToRecipeSpecifiers=_launchToRecipeSpecifiers - In the implementation block
-(id)setName:(id)arg1 forItem:(id)arg2 ;
-(id)_launchToRecipeSummary:(id)arg1 ;
-(void)setLaunchToRecipeSpecifiers:(NSArray *)arg1 ;
-(void)didSaveItems;
-(NSArray *)launchToRecipeSpecifiers;
-(id)nameForItem:(id)arg1 ;
-(BOOL)shouldAllowSelection;
-(SEL)settingsGetter;
-(SEL)settingsSetter;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end


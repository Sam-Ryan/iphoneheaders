/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUI/PUAlbumListViewController.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class WallpaperAlbumListTableViewControllerSpec, UIViewController, PSRootController, PSSpecifier, NSString;

@interface WallpaperAlbumListTableViewController : PUAlbumListViewController <PSController> {

	WallpaperAlbumListTableViewControllerSpec* _wallpaperAlbumListTableViewSpec;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;
	unsigned long long _albumCount;

}

@property (nonatomic,retain) WallpaperAlbumListTableViewControllerSpec * wallpaperAlbumListTableViewSpec;              //@synthesize wallpaperAlbumListTableViewSpec=_wallpaperAlbumListTableViewSpec - In the implementation block
@property (assign,nonatomic) UIViewController*<PSController> parentController;                                         //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                                                        //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                                  //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic) unsigned long long albumCount;                                                            //@synthesize albumCount=_albumCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)suspend;
-(long long)tableViewStyle;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSRootController *)rootController;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)setRootController:(PSRootController *)arg1 ;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
-(void)setParentController:(UIViewController*<PSController>)arg1 ;
-(UIViewController*<PSController>)parentController;
-(id)initWithSpec:(id)arg1 ;
-(BOOL)updateSpec;
-(BOOL)showsEmptyPlaceholderWhenEmpty;
-(void)setTitleForCell:(id)arg1 withCollection:(id)arg2 ;
-(BOOL)showsTopPlaceholdersSection;
-(BOOL)showsBottomPlaceholdersSection;
-(id)backgroundColorForTableView;
-(BOOL)canShowSyncProgress;
-(BOOL)canBeShownFromSuspendedState;
-(void)handleMagicCategorySelection:(id)arg1 ;
-(void)setAlbumCount:(unsigned long long)arg1 ;
-(void)_navigateToDynamic;
-(void)_navigateToVR;
-(void)_navigateToPanorama;
-(void)_navigateToStills;
-(void)_navigateToMotion;
-(WallpaperAlbumListTableViewControllerSpec *)wallpaperAlbumListTableViewSpec;
-(void)navigateToAssetContainer:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_navigateToWallpaperGridControllerWithCategoryKey:(id)arg1 andTitle:(id)arg2 ;
-(void)_configureWallpaperViewControllerAllowedActions:(id)arg1 ;
-(void)setWallpaperAlbumListTableViewSpec:(WallpaperAlbumListTableViewControllerSpec *)arg1 ;
-(unsigned long long)albumCount;
@end


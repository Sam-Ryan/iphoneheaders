/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class WebBookmarkCollection, _SFFolderPickerTableViewCellLayoutManager;

@interface SafariFavoritesFolderPickerContoller : SafariSettingsListController {

	WebBookmarkCollection* _bookmarkCollection;
	_SFFolderPickerTableViewCellLayoutManager* _cellLayoutManager;

}
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)willBecomeActive;
-(id)_tintedFolderImage;
-(id)specifiers;
-(void)_webBookmarksDidReload:(id)arg1 ;
-(void)_showBookmarksBeingSyncedAlert;
@end

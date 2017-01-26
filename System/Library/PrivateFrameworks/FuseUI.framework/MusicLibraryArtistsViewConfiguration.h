/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class MusicEntityViewDescriptor;

@interface MusicLibraryArtistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration {

	MusicEntityViewDescriptor* _artistsTableViewDescriptor;
	MusicEntityViewDescriptor* _recentlyAddedOverviewTableViewDescriptor;
	BOOL _shouldIncludeRecentlyAddedOverview;

}

@property (assign,nonatomic) BOOL shouldIncludeRecentlyAddedOverview;              //@synthesize shouldIncludeRecentlyAddedOverview=_shouldIncludeRecentlyAddedOverview - In the implementation block
-(id)init;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4 ;
-(void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2 ;
-(id)_detailViewControllerForEntityValueContext:(id)arg1 sourceViewController:(id)arg2 ;
-(void)configureContentDescriptorForSearchResults:(id)arg1 ;
-(void)setShouldIncludeRecentlyAddedOverview:(BOOL)arg1 ;
-(id)newContextualActionsEntityValueContext;
-(id)_entityViewDescriptorsForCurrentProperties;
-(id)_artistsTableViewDescriptor;
-(id)_loadArtistsTableViewDescriptor;
-(id)_recentlyAddedOverviewTableViewDescriptor;
-(id)_loadTableViewDescriptor;
-(id)_loadArtistsEntityProvider;
-(id)_loadRecentlyAddedOverviewEntityProvider;
-(id)_loadRecentlyAddedOverviewTableViewDescriptor;
-(BOOL)wantsToDisplayDetailViewControllerUponEntityValueProviderSelection;
-(BOOL)shouldIncludeRecentlyAddedOverview;
@end


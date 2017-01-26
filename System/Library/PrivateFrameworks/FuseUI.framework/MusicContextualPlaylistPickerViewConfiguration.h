/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicPlaylistsWithNewActionViewConfiguration.h>

@protocol MusicContextualPlaylistPickerDelegate;
@interface MusicContextualPlaylistPickerViewConfiguration : MusicPlaylistsWithNewActionViewConfiguration {

	BOOL _includesRecentlyModifiedPlaylistsSection;
	id<MusicContextualPlaylistPickerDelegate> _playlistPickerDelegate;

}

@property (nonatomic,readonly) BOOL includesRecentlyModifiedPlaylistsSection; 
@property (assign,nonatomic,__weak) id<MusicContextualPlaylistPickerDelegate> playlistPickerDelegate;              //@synthesize playlistPickerDelegate=_playlistPickerDelegate - In the implementation block
-(id)newViewController;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2 ;
-(BOOL)includesRecentlyModifiedPlaylistsSection;
-(void)setPlaylistPickerDelegate:(id<MusicContextualPlaylistPickerDelegate>)arg1 ;
-(id<MusicContextualPlaylistPickerDelegate>)playlistPickerDelegate;
@end


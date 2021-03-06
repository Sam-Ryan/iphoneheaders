/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicUpNextCompositeDataSource.h>
#import <libobjc.A.dylib/MusicActionableHeaderViewDelegate.h>
#import <libobjc.A.dylib/MusicMediaPickerDelegate.h>
#import <libobjc.A.dylib/MusicUpNextSectionHeaderDelegate.h>

@class MusicEntityViewHorizontalLockupContentDescriptor, NSString;

@interface MusicUpNextQueueDataSource : MusicUpNextCompositeDataSource <MusicActionableHeaderViewDelegate, MusicMediaPickerDelegate, MusicUpNextSectionHeaderDelegate> {

	NSRange _hardQueueRange;
	NSRange _softQueueRange;
	BOOL _showsRadioQueue;
	BOOL _ignoreQueueChanges;
	MusicEntityViewHorizontalLockupContentDescriptor* _horizontalLockupContentDescriptor;
	MusicEntityViewHorizontalLockupContentDescriptor* _radioStationHorizontalLockupContentDescriptor;

}

@property (nonatomic,readonly) MusicEntityViewHorizontalLockupContentDescriptor * radioStationHorizontalLockupContentDescriptor;              //@synthesize radioStationHorizontalLockupContentDescriptor=_radioStationHorizontalLockupContentDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(Class)tableViewCellClass;
-(void)mediaPickerNavigationController:(id)arg1 didFinishWithSelectedEntities:(id)arg2 ;
-(id)horizontalLockupContentDescriptorForIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)horizontalLockupContentDescriptor;
-(id)updatesForPlayerChangedFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)_registerForPlayerNotifications:(id)arg1 ;
-(void)_unregisterForPlayerNotifications:(id)arg1 ;
-(void)_currentItemWillChange:(id)arg1 ;
-(void)_currentItemDidChange:(id)arg1 ;
-(void)addButtonPressedForSectionHeader:(id)arg1 ;
-(void)clearButtonPressedForSectionHeader:(id)arg1 ;
-(NSRange)_hardQueueRangeForPlaylistMananger:(id)arg1 ;
-(NSRange)_softQueueRangeForPlaylistMananger:(id)arg1 ;
-(id)_indexPathsForSection:(long long)arg1 ;
-(void)_clearHardQueue;
-(void)_clearSoftQueue;
-(void)_dismissPicker;
-(BOOL)_canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)_sectionIsHardQueueSection:(long long)arg1 ;
-(BOOL)_displayHeaderForSection:(unsigned long long)arg1 ;
-(BOOL)_displayAddButtonForSection:(unsigned long long)arg1 ;
-(BOOL)_displayClearButtonForSection:(unsigned long long)arg1 ;
-(BOOL)_softQueueIsRadioQueue;
-(void)_queueContentsDidChange:(id)arg1 ;
-(MusicEntityViewHorizontalLockupContentDescriptor *)radioStationHorizontalLockupContentDescriptor;
@end


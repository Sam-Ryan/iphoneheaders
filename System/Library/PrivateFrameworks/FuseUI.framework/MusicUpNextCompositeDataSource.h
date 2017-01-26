/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MusicEntityProviding.h>

@protocol MusicUpNextCompositeDataSourceDelegate;
@class MusicEntityViewHorizontalLockupContentDescriptor, MusicSectionEntityValueContext, MPUAVPlayer, NSString;

@interface MusicUpNextCompositeDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, MusicEntityProviding> {

	MusicEntityViewHorizontalLockupContentDescriptor* _horizontalLockupContentDescriptor;
	MusicSectionEntityValueContext* _sectionEntityValueContext;
	MPUAVPlayer* _player;
	id<MusicUpNextCompositeDataSourceDelegate> _delegate;

}

@property (nonatomic,retain) MPUAVPlayer * player;                                                                                //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<MusicUpNextCompositeDataSourceDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MusicEntityViewHorizontalLockupContentDescriptor * horizontalLockupContentDescriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MusicUpNextCompositeDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id<MusicUpNextCompositeDataSourceDelegate>)delegate;
-(unsigned long long)numberOfSections;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)setPlayer:(MPUAVPlayer *)arg1 ;
-(MPUAVPlayer *)player;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)hasEntities;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(Class)tableViewCellClass;
-(id)tableViewCellReuseIdentifier;
-(id)tableViewHeaderReusueIdentifier;
-(Class)tableViewHeaderClass;
-(id)horizontalLockupContentDescriptorForIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(double)maxCellHeightForTraitCollection:(id)arg1 ;
-(MusicEntityViewHorizontalLockupContentDescriptor *)horizontalLockupContentDescriptor;
-(void)_configureEntityValueContextOutput:(id)arg1 ;
-(id)updatesForPlayerChangedFromItem:(id)arg1 toItem:(id)arg2 ;
-(BOOL)isNowPlayingDataSource;
-(void)invalidateSizes;
@end


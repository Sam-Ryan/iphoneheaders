/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicUpNextCompositeDataSource.h>

@protocol MusicUpNextCompositeDataSourceDelegate;
@class MPUAVPlayer, MusicEntityViewHorizontalLockupContentDescriptor;

@interface MusicUpNextNowPlayingDataSource : MusicUpNextCompositeDataSource {

	BOOL _hidesViews;
	MPUAVPlayer* _player;
	id<MusicUpNextCompositeDataSourceDelegate> _delegate;
	MusicEntityViewHorizontalLockupContentDescriptor* _horizontalLockupContentDescriptor;

}

@property (assign,nonatomic) BOOL hidesViews;              //@synthesize hidesViews=_hidesViews - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)delegate;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(id)player;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(Class)tableViewCellClass;
-(id)tableViewCellReuseIdentifier;
-(id)tableViewHeaderReusueIdentifier;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)horizontalLockupContentDescriptor;
-(id)updatesForPlayerChangedFromItem:(id)arg1 toItem:(id)arg2 ;
-(BOOL)isNowPlayingDataSource;
-(void)invalidateSizes;
-(void)setHidesViews:(BOOL)arg1 ;
-(BOOL)hidesViews;
@end


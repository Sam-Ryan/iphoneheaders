/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSLIconPostionsStoreDelegate;
@class NPSManager;

@interface CSLIconPositionsStore : NSObject {

	NPSManager* _syncManager;
	BOOL _initialSyncComplete;
	id<CSLIconPostionsStoreDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSLIconPostionsStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)loadDefaultPositions;
-(void)_savePositions:(id)arg1 usingKey:(id)arg2 ;
-(void)actionsOnInitialSyncComplete;
-(void)saveTargetPositions:(id)arg1 ;
-(void)_saveLocalPositions:(id)arg1 usingKey:(id)arg2 ;
-(id)loadTargetPositions;
-(id)_loadLocalPositionsUsingKey:(id)arg1 ;
-(id)_loadPositionsUsingKey:(id)arg1 ;
-(void)savePositions:(id)arg1 ;
-(id)loadPositions;
-(void)positionsChanged;
-(void)initialSyncComplete;
-(void)setDelegate:(id<CSLIconPostionsStoreDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CSLIconPostionsStoreDelegate>)delegate;
@end


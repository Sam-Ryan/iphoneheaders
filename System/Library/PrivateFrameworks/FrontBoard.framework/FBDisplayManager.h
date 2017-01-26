/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMapTable, NSMutableSet, FBSDisplay;

@interface FBDisplayManager : NSObject {

	NSHashTable* _observers;
	NSMapTable* _displayIDToFBSDisplayMap;
	NSMutableSet* _displaysDebouncing;
	FBSDisplay* _mainDisplay;

}

@property (nonatomic,retain) FBSDisplay * mainDisplay;              //@synthesize mainDisplay=_mainDisplay - In the implementation block
+(id)sharedInstance;
+(id)mainDisplay;
-(id)init;
-(id)description;
-(void)addObserver:(id)arg1 ;
-(FBSDisplay *)mainDisplay;
-(id)displays;
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_initializeDisplays;
-(BOOL)_caDisplayIsMainDisplay:(id)arg1 ;
-(void)_caDisplayDidConnect:(id)arg1 debounce:(BOOL)arg2 broadcast:(BOOL)arg3 ;
-(id)_fbsDisplayForCADisplay:(id)arg1 ;
-(void)setMainDisplay:(FBSDisplay *)arg1 ;
-(void)_broadcastFBSDisplayDidConnect:(id)arg1 ;
-(void)_debounceDisplay:(id)arg1 broadcast:(BOOL)arg2 ;
-(void)_displayDidDebounce:(id)arg1 broadcast:(BOOL)arg2 ;
-(void)_caDisplayDidDisconnect:(id)arg1 ;
@end


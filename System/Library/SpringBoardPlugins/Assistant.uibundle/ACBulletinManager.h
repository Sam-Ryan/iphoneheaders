/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Assistant/Assistant-Structs.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol ACBulletinManagerDelegate;
@class BBObserver, NSMutableDictionary, NSString;

@interface ACBulletinManager : NSObject <BBObserverDelegate> {

	BBObserver* _observer;
	NSMutableDictionary* _currentBulletins;
	id<ACBulletinManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ACBulletinManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<ACBulletinManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ACBulletinManagerDelegate>)delegate;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)_setupObserver;
-(void)_bulletinsDidChange;
-(id)_displayNameForSectionID:(id)arg1 ;
-(id)currentBulletins;
-(id)bulletinForIdentifier:(id)arg1 ;
-(void)markBulletinWithIdentifier:(id)arg1 asRead:(BOOL)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface _GAXSettingsFastStorage : NSObject {

	NSMutableDictionary* _settingsStorage;

}

@property (nonatomic,retain) NSMutableDictionary * settingsStorage;                              //@synthesize settingsStorage=_settingsStorage - In the implementation block
@property (nonatomic,retain) NSString * activeAppID; 
@property (nonatomic,retain) NSString * savedASAMAppIdForLostMode; 
@property (assign,getter=isActiveAppSelfLocked,nonatomic) BOOL activeAppSelfLocked; 
@property (assign,nonatomic) BOOL selfLockUnmanaged; 
-(void)_updateSetting:(id)arg1 withKey:(id)arg2 ;
-(NSString *)savedASAMAppIdForLostMode;
-(BOOL)selfLockUnmanaged;
-(void)setSelfLockUnmanaged:(BOOL)arg1 ;
-(void)setActiveAppSelfLocked:(BOOL)arg1 ;
-(void)setSettingsStorage:(NSMutableDictionary *)arg1 ;
-(void)setSavedASAMAppIdForLostMode:(NSString *)arg1 ;
-(BOOL)isActiveAppSelfLocked;
-(void)setActiveAppID:(NSString *)arg1 ;
-(NSString *)activeAppID;
-(NSMutableDictionary *)settingsStorage;
-(void)dealloc;
-(id)init;
-(id)_loadSettings;
@end


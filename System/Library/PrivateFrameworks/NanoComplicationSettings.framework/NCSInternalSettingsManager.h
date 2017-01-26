/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NPSManager, NSArray, NSString, NSObject;

@interface NCSInternalSettingsManager : NSObject {

	NSMutableArray* _complicationDefinitions;
	NPSManager* _syncManager;
	NSArray* _storedSettings;
	NSString* _selectedComplicationIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL hasSettings; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * selectedComplicationIdentifier; 
-(void)loadSettings;
-(void)saveSettings;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)hasSettings;
-(void)_saveSettings;
-(void)enumerateAllComplicationDefinitionsUsingBlock:(/*^block*/id)arg1 ;
-(id)_localizedNameForComplication:(id)arg1 ;
-(unsigned long long)_numberOfActiveComplications;
-(void)enumerateComplicationDefinitionsUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)selectedComplicationIdentifier;
-(void)setSelectedComplicationIdentifier:(NSString *)arg1 ;
-(void)addComplicationDefinition:(id)arg1 ;
-(void)removeComplicationDefinitionsInArray:(id)arg1 ;
-(void)moveComplicationDefinitionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)complicationDefinitionForAppBundleIdentifier:(id)arg1 ;
-(id)complicationDefinitionForComplicationIdentifier:(id)arg1 ;
-(id)complicationDefinitionForWatchKitIdentifier:(id)arg1 ;
-(id)complicationIdentifierForComplicationDefinitionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMaximumNumberOfActiveComplications;
@end


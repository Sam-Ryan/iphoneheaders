/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItem.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPMediaItemArrayPIDEncodableItem.h>
#import <libobjc.A.dylib/MPCacheableConcreteMediaEntity.h>

@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary, NSString;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying, MPMediaItemArrayPIDEncodableItem, MPCacheableConcreteMediaEntity> {

	MPMediaLibrary* _library;
	unsigned long long _persistentID;
	MPConcreteMediaEntityPropertiesCache* _propertiesCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues; 
+(BOOL)supportsSecureCoding;
+(id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2 ;
+(id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)valueForProperty:(id)arg1 ;
-(id)cachedValueForProperty:(id)arg1 isCached:(BOOL*)arg2 ;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2 ;
-(BOOL)didSkipWithPlayedToTime:(double)arg1 ;
-(void)incrementPlayCountForPlayingToEnd;
-(BOOL)incrementPlayCountForStopTime:(double)arg1 ;
-(BOOL)existsInLibrary;
-(void)invalidateCachedProperties;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(Class)itemArrayCoderPIDDataCodingClass;
-(void)markNominalAmountHasBeenPlayed;
-(void)incrementSkipCount;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(double)nominalHasBeenPlayedThreshold;
-(id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3 ;
-(id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(BOOL*)arg2 ;
-(void)reallyIncrementPlayCount;
-(id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 ;
-(MPConcreteMediaEntityPropertiesCache *)cachedPropertyValues;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(unsigned long long)persistentID;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)mediaLibrary;
-(id)valuesForProperties:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
@end


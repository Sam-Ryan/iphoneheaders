/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3Album : ML3Collection
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2 ;
+(id)_albumArtistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2 ;
+(void)initialize;
+(id)allProperties;
+(BOOL)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(id)predisambiguatedProperties;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)propertiesForGroupingUniqueCollections;
+(id)trackForeignPersistentID;
+(long long)revisionTrackingCode;
+(id)defaultOrderingTerms;
+(id)databaseTable;
+(id)joinClausesForProperty:(id)arg1 ;
-(id)protocolItem;
-(id)multiverseIdentifier;
-(void)updateTrackValues:(id)arg1 ;
-(void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 ;
@end


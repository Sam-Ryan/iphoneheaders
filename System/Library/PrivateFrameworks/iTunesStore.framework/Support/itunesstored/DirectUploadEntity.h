/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray, MediaSocialPostEntity;

@interface DirectUploadEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * artists; 
@property (nonatomic,readonly) MediaSocialPostEntity * postEntity; 
+(id)newEntityValuesWithMediaSocialAttachment:(id)arg1 ;
+(id)databaseTable;
-(MediaSocialPostEntity *)postEntity;
-(void)setProcessingWithResponse:(id)arg1 ;
-(void)resetStatusProperties;
-(id)insertEntitiesForArtists:(id)arg1 withProperties:(id)arg2 ;
-(void)deleteAssetFile;
-(NSArray *)artists;
-(BOOL)deleteFromDatabase;
-(long long)setFailedWithError:(id)arg1 ;
@end

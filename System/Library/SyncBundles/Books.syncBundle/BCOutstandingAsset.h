/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSData, NSDictionary;

@interface BCOutstandingAsset : NSManagedObject

@property (nonatomic,retain) NSString * persistentID; 
@property (nonatomic,retain) NSNumber * restoreRelated; 
@property (nonatomic,retain) NSData * assetDictionary; 
@property (nonatomic,retain) NSString * downloadCompletePath; 
@property (nonatomic,retain) NSDictionary * assetDictionaryAsDictionary; 
-(NSDictionary *)assetDictionaryAsDictionary;
-(void)setAssetDictionaryAsDictionary:(NSDictionary *)arg1 ;
@end


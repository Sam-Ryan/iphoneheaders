/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/HistoryItem.h>

@class SearchResult, NSString;

@interface CustomSearchResultHistoryItem : NSObject <HistoryItem> {

	SearchResult* _customSearchResult;

}

@property (nonatomic,readonly) SearchResult * customSearchResult;              //@synthesize customSearchResult=_customSearchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSearchResult:(id)arg1 ;
-(SearchResult *)customSearchResult;
-(BOOL)isEqual:(id)arg1 ;
-(double)timestamp;
-(long long)type;
@end


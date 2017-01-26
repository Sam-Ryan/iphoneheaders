/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:05:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray;

@interface MusicUsageGroup : NSObject {

	NSMutableArray* _mutableUsageItems;
	BOOL _includedInLocalGroup;
	BOOL _showsItemArtwork;
	NSString* _groupSpecifierIdentifier;
	NSString* _groupName;
	unsigned long long _groupSize;
	NSString* _categoryIdentifier;

}

@property (nonatomic,retain) NSString * groupSpecifierIdentifier;                                  //@synthesize groupSpecifierIdentifier=_groupSpecifierIdentifier - In the implementation block
@property (nonatomic,retain) NSString * groupName;                                                 //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) unsigned long long groupSize;                                         //@synthesize groupSize=_groupSize - In the implementation block
@property (nonatomic,retain) NSString * categoryIdentifier;                                        //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (assign,getter=isIncludedInLocalGroup,nonatomic) BOOL includedInLocalGroup;              //@synthesize includedInLocalGroup=_includedInLocalGroup - In the implementation block
@property (assign,nonatomic) BOOL showsItemArtwork;                                                //@synthesize showsItemArtwork=_showsItemArtwork - In the implementation block
@property (nonatomic,copy,readonly) NSArray * usageItems; 
-(BOOL)isIncludedInLocalGroup;
-(void)setGroupSpecifierIdentifier:(NSString *)arg1 ;
-(void)setIncludedInLocalGroup:(BOOL)arg1 ;
-(unsigned long long)numberOfUsageItems;
-(void)setGroupSize:(unsigned long long)arg1 ;
-(void)addUsageItem:(id)arg1 ;
-(void)setShowsItemArtwork:(BOOL)arg1 ;
-(NSArray *)usageItems;
-(void)updateGroupSize;
-(unsigned long long)groupSize;
-(BOOL)showsItemArtwork;
-(NSString *)groupSpecifierIdentifier;
-(void)removeUsageItem:(id)arg1 ;
-(id)init;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSString *)categoryIdentifier;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
@end


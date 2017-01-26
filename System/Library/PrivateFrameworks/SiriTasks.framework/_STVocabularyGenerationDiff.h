/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSArray, NSString;

@interface _STVocabularyGenerationDiff : NSObject {

	BOOL _isFullReset;
	NSSet* _deletedSiriIDs;
	NSArray* _updatedVocabularyItems;
	long long _countOfVocabularyItemsAfterApplying;
	NSString* _intentSlotName;
	NSString* _appBundleID;

}

@property (nonatomic,copy) NSSet * deletedSiriIDs;                                       //@synthesize deletedSiriIDs=_deletedSiriIDs - In the implementation block
@property (nonatomic,copy) NSArray * updatedVocabularyItems;                             //@synthesize updatedVocabularyItems=_updatedVocabularyItems - In the implementation block
@property (assign,nonatomic) long long countOfVocabularyItemsAfterApplying;              //@synthesize countOfVocabularyItemsAfterApplying=_countOfVocabularyItemsAfterApplying - In the implementation block
@property (assign,nonatomic) BOOL isFullReset;                                           //@synthesize isFullReset=_isFullReset - In the implementation block
@property (nonatomic,copy) NSString * intentSlotName;                                    //@synthesize intentSlotName=_intentSlotName - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                                       //@synthesize appBundleID=_appBundleID - In the implementation block
-(id)description;
-(NSString *)intentSlotName;
-(void)setIntentSlotName:(NSString *)arg1 ;
-(NSString *)appBundleID;
-(void)setAppBundleID:(NSString *)arg1 ;
-(void)setIsFullReset:(BOOL)arg1 ;
-(void)setCountOfVocabularyItemsAfterApplying:(long long)arg1 ;
-(void)setUpdatedVocabularyItems:(NSArray *)arg1 ;
-(void)setDeletedSiriIDs:(NSSet *)arg1 ;
-(BOOL)isFullReset;
-(NSSet *)deletedSiriIDs;
-(NSArray *)updatedVocabularyItems;
-(long long)countOfVocabularyItemsAfterApplying;
-(BOOL)hasChanges;
@end


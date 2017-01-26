/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@class NSString, NSArray;

@interface ABNamePredicate : ABPredicate {

	void* _addressBook;
	void* _tokenizations;
	CFArrayRef _tokenizationSortKeys;
	BOOL _matchWholeWords;
	BOOL _matchPersonOrCompanyNamesExclusively;
	BOOL _matchPreferredName;
	BOOL _generateExceprts;
	NSString* _name;
	NSArray* _sources;
	NSArray* _groups;
	NSArray* _scopedContactIdentifiers;

}

@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * sources;                                      //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSArray * groups;                                       //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) void* source; 
@property (assign,nonatomic) void* group; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (assign,nonatomic) BOOL matchWholeWords;                                   //@synthesize matchWholeWords=_matchWholeWords - In the implementation block
@property (assign,nonatomic) BOOL matchPersonOrCompanyNamesExclusively;              //@synthesize matchPersonOrCompanyNamesExclusively=_matchPersonOrCompanyNamesExclusively - In the implementation block
@property (assign,nonatomic) BOOL matchPreferredName;                                //@synthesize matchPreferredName=_matchPreferredName - In the implementation block
@property (assign,nonatomic) BOOL generateExceprts;                                  //@synthesize generateExceprts=_generateExceprts - In the implementation block
@property (nonatomic,retain) NSArray * scopedContactIdentifiers;                     //@synthesize scopedContactIdentifiers=_scopedContactIdentifiers - In the implementation block
-(id)predicateFormat;
-(void)dealloc;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isValid;
-(void)setSource:(void*)arg1 ;
-(void*)source;
-(void)setGroup:(void*)arg1 ;
-(void*)group;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void*)tokenizations;
-(BOOL)generateExceprts;
-(id)emphasizedExcerptStringForMatchString:(id)arg1 ;
-(BOOL)matchPersonOrCompanyNamesExclusively;
-(id)_personNameKeys;
-(id)_matchClauseForColumns:(id)arg1 requiringAllTerms:(BOOL)arg2 ;
-(NSArray *)scopedContactIdentifiers;
-(BOOL)matchWholeWords;
-(BOOL)matchPreferredName;
-(id)ab_metadataForMatchingRow:(CPSqliteStatement*)arg1 columnOffset:(int)arg2 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg1 ;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(id)_personNonNameKeys;
-(id)queryRankStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindJoinClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void)setMatchWholeWords:(BOOL)arg1 ;
-(void)setMatchPersonOrCompanyNamesExclusively:(BOOL)arg1 ;
-(void)setMatchPreferredName:(BOOL)arg1 ;
-(void)setGenerateExceprts:(BOOL)arg1 ;
-(void)setScopedContactIdentifiers:(NSArray *)arg1 ;
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)sources;
-(NSArray *)groups;
-(void*)addressBook;
-(void)setGroups:(NSArray *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
@end


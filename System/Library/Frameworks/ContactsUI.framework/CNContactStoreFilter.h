/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactFilter.h>

@class NSSet;

@interface CNContactStoreFilter : CNContactFilter {

	BOOL _isServerFilter;
	NSSet* _groupIdentifiers;
	NSSet* _containerIdentifiers;

}

@property (nonatomic,retain) NSSet * groupIdentifiers;                  //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
@property (nonatomic,retain) NSSet * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL showsEverything; 
@property (assign,nonatomic) BOOL isServerFilter;                       //@synthesize isServerFilter=_isServerFilter - In the implementation block
+(id)contactStoreFilterFromPreferencesWithContactStore:(id)arg1 ;
+(BOOL)getContainerIdentifiers:(id*)arg1 groupIdentifiers:(id*)arg2 serverFilter:(BOOL*)arg3 fromSundanceToOkemoAndAddressBookUIDictionary:(id)arg4 contactStore:(id)arg5 ;
+(BOOL)getContainerIdentifiers:(id*)arg1 groupIdentifiers:(id*)arg2 serverFilter:(BOOL*)arg3 fromPreSundanceDictionary:(id)arg4 contactStore:(id)arg5 ;
+(BOOL)getContainerIdentifiers:(id*)arg1 groupIdentifiers:(id*)arg2 serverFilter:(BOOL*)arg3 fromLegacyDictionary:(id)arg4 contactStore:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicate;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isServerFilter;
-(NSSet *)groupIdentifiers;
-(NSSet *)containerIdentifiers;
-(void)saveToPreferencesWithContactStore:(id)arg1 ;
-(void)setContainerIdentifiers:(NSSet *)arg1 ;
-(void)setGroupIdentifiers:(NSSet *)arg1 ;
-(void)setIsServerFilter:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 contactStore:(id)arg2 ;
-(id)dictionaryRepresentationWithContactStore:(id)arg1 ;
-(BOOL)showsEverything;
-(void)addAddressBookUIKeysToDictionaryRepresentation:(id)arg1 withAllContainers:(id)arg2 excludedContainers:(id)arg3 excludedGroups:(id)arg4 ;
-(BOOL)supportsSections;
@end


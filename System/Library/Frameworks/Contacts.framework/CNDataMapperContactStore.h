/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactStore.h>

@protocol CNDataMapper;
@interface CNDataMapperContactStore : CNContactStore {

	id<CNDataMapper> _mapper;

}

@property (nonatomic,retain,readonly) NSObject*<CNDataMapper> mapper;              //@synthesize mapper=_mapper - In the implementation block
+(Class)dataMapperClass;
-(id)iOSMapper;
-(void)dealloc;
-(id)init;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)meContactIdentifierWithError:(id*)arg1 ;
-(id)contactIdentifiersForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)initWithDataMapper:(id)arg1 ;
-(BOOL)isValidSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)contactsInContainerWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(NSObject*<CNDataMapper>)mapper;
@end


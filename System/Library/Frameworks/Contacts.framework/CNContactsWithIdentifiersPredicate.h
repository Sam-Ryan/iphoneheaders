/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSMutableDictionary, NSArray, NSString;

@interface CNContactsWithIdentifiersPredicate : CNPredicate <CNSuggestedContactPredicate> {

	NSMutableDictionary* _internalIdentifiers;
	NSArray* _identifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
-(id)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(BOOL)cn_supportsNativeSorting;
-(void)dealloc;
-(NSString *)description;
-(id)initWithIdentifiers:(id)arg1 ;
-(id)internalIdentifiersForStoreWithIdentifier:(id)arg1 ;
-(NSArray *)identifiers;
@end


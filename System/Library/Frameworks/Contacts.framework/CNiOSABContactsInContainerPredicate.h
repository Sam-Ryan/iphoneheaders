/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>

@class NSString;

@interface CNiOSABContactsInContainerPredicate : CNPredicate <CNiOSContactPredicate> {

	NSString* _parentContainerIdentifier;

}

@property (nonatomic,copy,readonly) NSString * parentContainerIdentifier;              //@synthesize parentContainerIdentifier=_parentContainerIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(BOOL)cn_supportsNativeSorting;
-(NSString *)parentContainerIdentifier;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 error:(_CFError*)arg5 ;
-(id)initWithParentContainerIdentifier:(id)arg1 ;
@end

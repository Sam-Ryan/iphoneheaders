/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class CNPhoneNumber, NSString;

@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate> {

	BOOL _returnsMultipleResults;
	CNPhoneNumber* _phoneNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) CNPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL returnsMultipleResults;                   //@synthesize returnsMultipleResults=_returnsMultipleResults - In the implementation block
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(CNPhoneNumber *)phoneNumber;
-(BOOL)returnsMultipleResults;
-(id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(BOOL)arg2 ;
@end


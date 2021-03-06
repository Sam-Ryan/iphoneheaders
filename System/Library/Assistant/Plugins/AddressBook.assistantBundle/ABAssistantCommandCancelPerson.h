/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectCancel.h>
#import <AddressBook/ABAssistantCommand.h>

@class NSString;

@interface ABAssistantCommandCancelPerson : SADomainObjectCancel <ABAssistantCommand> {

	void* _addressBook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(id)_removeUpdatesFromCache;
-(void)dealloc;
-(id)_validate;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end


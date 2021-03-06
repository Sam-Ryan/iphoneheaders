/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SearchBundles/AddressBook.searchBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/SPSearchDatastore.h>

@class CNContactStore, NSArray, CNMonogrammer, CNContactFormatter, NSString;

@interface SPAddressBookDatastore : NSObject <SPSearchDatastore> {

	CNContactStore* _store;
	NSArray* _singleResultArray;
	CNMonogrammer* _monogrammer;
	CNContactFormatter* _contactFormatter;

}

@property (nonatomic,retain) CNContactStore * store;                             //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSArray * singleResultArray;                        //@synthesize singleResultArray=_singleResultArray - In the implementation block
@property (nonatomic,retain) CNMonogrammer * monogrammer;                        //@synthesize monogrammer=_monogrammer - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(id)init;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNMonogrammer *)monogrammer;
-(id)searchDomains;
-(void)setMonogrammer:(CNMonogrammer *)arg1 ;
-(id)_titleForContact:(id)arg1 ;
-(id)displayIdentifierForDomain:(unsigned)arg1 ;
-(void)performQuery:(id)arg1 withResultsPipe:(id)arg2 ;
-(id)resultForIdentifier:(id)arg1 domain:(unsigned)arg2 ;
-(id)imageDataForResultIdentifier:(unsigned long long)arg1 domain:(unsigned)arg2 size:(CGSize)arg3 ;
-(NSArray *)singleResultArray;
-(void)setSingleResultArray:(NSArray *)arg1 ;
@end


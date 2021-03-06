/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, NSMutableArray;

@interface RTContacts : NSObject {

	CNContactStore* _contactStore;
	NSMutableArray* _meCards;

}

@property (retain) CNContactStore * contactStore;                   //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * meCards;              //@synthesize meCards=_meCards - In the implementation block
+(id)contactFetchKeys;
+(id)entryTypeToString:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(NSMutableArray *)meCards;
-(void)setMeCards:(NSMutableArray *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)fetchMeCardMapItemsOfType:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)getMeCardPostalAddressesOfType:(long long)arg1 ;
-(id)getMeCardLocationsOfType:(long long)arg1 ;
@end


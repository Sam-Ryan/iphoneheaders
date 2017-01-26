/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CNContactChangesFetcher : NSObject {

	BOOL _unify;
	NSSet* _identifiers;
	NSSet* _keysToFetch;

}

@property (nonatomic,retain) NSSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSSet * keysToFetch;              //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL unify;                       //@synthesize unify=_unify - In the implementation block
-(BOOL)unify;
-(void)setUnify:(BOOL)arg1 ;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(NSSet *)keysToFetch;
-(void)setKeysToFetch:(NSSet *)arg1 ;
-(NSSet *)identifiers;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, ACAccount, ACAccountStore, NSDictionary;

@interface WEPAddressBookLookupOperation : NSOperation {

	NSArray* _emails;
	NSArray* _phones;
	ACAccount* _account;
	ACAccountStore* _store;
	NSDictionary* _personDictionary;
	BOOL _isExecuting;
	BOOL _isFinished;

}

@property (nonatomic,copy) NSArray * emails;                               //@synthesize emails=_emails - In the implementation block
@property (nonatomic,copy) NSArray * phones;                               //@synthesize phones=_phones - In the implementation block
@property (nonatomic,retain) NSDictionary * personDictionary;              //@synthesize personDictionary=_personDictionary - In the implementation block
-(NSDictionary *)personDictionary;
-(void)setPersonDictionary:(NSDictionary *)arg1 ;
-(void)_populateABWithJSONData:(id)arg1 ;
-(BOOL)isConcurrent;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(NSArray *)emails;
-(NSArray *)phones;
-(void)setEmails:(NSArray *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end

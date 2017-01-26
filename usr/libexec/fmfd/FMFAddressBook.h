/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMFAddressBook : NSObject {

	BOOL _abPrefersNickname;

}

@property (assign,nonatomic) BOOL abPrefersNickname;              //@synthesize abPrefersNickname=_abPrefersNickname - In the implementation block
+(id)sharedAddressBook;
+(void*)_abAddressBookRef;
-(void)updateABNicknamePreference;
-(void)addressBookPreferencesDidChange:(id)arg1 ;
-(void)setAbPrefersNickname:(BOOL)arg1 ;
-(void)resetABPreferencesCachesInSession;
-(void)resetABCachesInSession;
-(void*)abRecordForHandle:(id)arg1 ;
-(BOOL)abPrefersNickname;
-(void*)recordForPhoneNum:(id)arg1 ;
-(void)_registerABCallbacks;
-(id)prettyNameForHandle:(id)arg1 ;
-(id)abRecordIdForHandle:(id)arg1 ;
-(void)addressBookDidChange:(id)arg1 ;
@end


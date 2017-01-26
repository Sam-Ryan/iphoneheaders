/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VisualVoicemail/VisualVoicemail-Structs.h>
@class VMAccount, NSMutableDictionary, NSObject, NSString;

@interface VMVoicemail : NSObject {

	VMAccount* _account;
	long long _identifier;
	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	CFPhoneNumberRef _senderPhoneNumber;
	CFPhoneNumberRef _callbackPhoneNumber;
	id _cachedAddressBookRef;
	NSString* _cachedDisplayName;

}

@property (readonly) CFPhoneNumberRef senderPhoneNumber; 
@property (readonly) CFPhoneNumberRef callbackPhoneNumber; 
@property (nonatomic,retain) id cachedAddressBookRef;                   //@synthesize cachedAddressBookRef=_cachedAddressBookRef - In the implementation block
@property (nonatomic,retain) NSString * cachedDisplayName;              //@synthesize cachedDisplayName=_cachedDisplayName - In the implementation block
+(void)forceReloadAllLiveVoicemailsForAccount:(id)arg1 ;
+(id)voicemailWithAccount:(id)arg1 identifier:(long long)arg2 creating:(BOOL)arg3 ;
+(void)scheduleVoicemailMapHousekeeping;
+(void)_scheduleVoicemailMapHousekeepingNoLock;
+(void)_doVoicemailMapHousekeepingNoLock;
+(id)_findPreviouslyCreatedVoicemailWithAccountNoLock:(id)arg1 identifier:(long long)arg2 ;
+(void)initialize;
-(BOOL)dataAvailable;
-(void)_forceUpdateCache;
-(void)_preemptivelySetFlags:(unsigned)arg1 clearFlags:(unsigned)arg2 ;
-(void)_lockedPreemptivelySetFlags:(unsigned)arg1 clearFlags:(unsigned)arg2 unlockedBlock:(/*^block*/id*)arg3 ;
-(id)initWithAccount:(id)arg1 identifier:(long long)arg2 ;
-(void)dealloc;
-(id)description;
-(int)duration;
-(long long)identifier;
-(id)date;
-(id)sender;
-(BOOL)willBroadcastNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateCache;
-(unsigned long long)remoteUID;
-(id)callbackNumber;
-(id)dataPath;
-(id)contactUsingContactStore:(id)arg1 withKeysToFetch:(id)arg2 ;
-(BOOL)isContactSuggested:(id)arg1 ;
-(void*)abRecordUsingAddressBook:(void*)arg1 withIdentifier:(int*)arg2 ;
-(id)cachedAddressBookRef;
-(void)setCachedAddressBookRef:(id)arg1 ;
-(CFPhoneNumberRef)senderPhoneNumber;
-(CFPhoneNumberRef)callbackPhoneNumber;
-(BOOL)hasFlags:(unsigned)arg1 ;
-(BOOL)doesNotHaveFlags:(unsigned)arg1 ;
-(void)_handleDataAvailable:(id)arg1 ;
-(id)displayNameUsingContactStore:(id)arg1 ;
-(id)displayLabelUsingContactStore:(id)arg1 ;
-(id)contactUsingContactStore:(id)arg1 ;
-(void*)abRecordUsingAddressBook:(void*)arg1 ;
-(id)displayNameUsingAddressBook:(void*)arg1 ;
-(id)displayLabelUsingAddressBook:(void*)arg1 ;
-(id)imageDataUsingAddressBook:(void*)arg1 ;
-(NSString *)cachedDisplayName;
-(void)setCachedDisplayName:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
@end


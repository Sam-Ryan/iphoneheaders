/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@interface CNErrorFactory : NSObject
+(id)genericiOSABError;
+(long long)CNErrorCodeForABError:(CFErrorRef)arg1 ;
+(id)errorForiOSABError:(CFErrorRef)arg1 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)errorByPrependingKeyPath:(id)arg1 toKeyPathsInError:(id)arg2 ;
+(id)errorByAddingUserInfoEntries:(id)arg1 toError:(id)arg2 ;
+(id)_localizedReasonForCode:(long long)arg1 ;
+(id)_localizedDescriptionForCode:(long long)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSEResolver : NSObject
+(id)resolveFromCNContactID:(id)arg1 ;
+(id)resolveFromAddress:(id)arg1 isEmail:(BOOL)arg2 ;
+(id)resolveFromParticipant:(id)arg1 ;
+(id)_defaultKey;
+(id)resolveFromCDContact:(id)arg1 ;
+(id)resolveFromABRecordID:(int)arg1 ;
+(id)meContact;
+(id)contactStore;
+(void*)addressBook;
@end

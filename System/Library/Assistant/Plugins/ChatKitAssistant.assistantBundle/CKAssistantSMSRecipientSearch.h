/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/ChatKitAssistant.assistantBundle/ChatKitAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASmsRecipientSearch.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface CKAssistantSMSRecipientSearch : SASmsRecipientSearch <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_oldSearch;
-(id)_search;
-(id)_validate;
-(id)_perform;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end


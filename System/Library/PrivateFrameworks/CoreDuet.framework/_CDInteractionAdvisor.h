/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDInteractionAdvising.h>

@class NSXPCConnection, NSError;

@interface _CDInteractionAdvisor : NSObject <_CDInteractionAdvising> {

	NSXPCConnection* _connection;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)interactionAdvisor;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 ;
-(void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 ;
-(id)adviseInteractionsUsingSettings:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end


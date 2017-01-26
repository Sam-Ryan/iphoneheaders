/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface CheckPreorderQueueOperation : ISOperation {

	NSNumber* _accountID;
	long long _numberOfPreorders;

}

@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) long long numberOfPreordersInQueue; 
-(id)_newURLOperation;
-(long long)numberOfPreordersInQueue;
-(void)dealloc;
-(void)run;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(NSNumber *)accountIdentifier;
@end


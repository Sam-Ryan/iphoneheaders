/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDSearchQueryDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableArray, NSError, NSString;

@interface CNSearchQueryDelegate : NSObject <MDSearchQueryDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _sem;
	BOOL _signaled;
	NSMutableArray* _results;
	NSError* _error;

}

@property (nonatomic,readonly) NSMutableArray * results;              //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)results;
-(void)waitForResults;
-(void)_signalResultsReceived;
-(NSError *)error;
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2 ;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2 ;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2 ;
@end


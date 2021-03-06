/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@class NSArray, NSMutableArray;

@interface _CNMergingObservable : CNObservable {

	NSArray* _observables;
	NSMutableArray* _remainingObservables;
	NSMutableArray* _cancelationTokens;

}
-(void)dealloc;
-(id)initWithObservables:(id)arg1 ;
-(BOOL)observableIsLastToComplete:(id)arg1 ;
-(void)cancelRemainingObservables;
-(id)subscribe:(id)arg1 ;
@end


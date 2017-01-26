/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@class NSMutableArray, NSArray;

@interface _CNCombineLatestObservable : CNObservable {

	NSMutableArray* _observables;
	NSMutableArray* _results;
	NSMutableArray* _tokens;
	NSMutableArray* _isSequenceActive;

}

@property (nonatomic,readonly) NSArray * observables;                          //@synthesize observables=_observables - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                       //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tokens;                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSMutableArray * isSequenceActive;              //@synthesize isSequenceActive=_isSequenceActive - In the implementation block
-(void)dealloc;
-(NSMutableArray *)tokens;
-(NSMutableArray *)results;
-(id)initWithObservables:(id)arg1 ;
-(NSArray *)observables;
-(void)observableAtIndex:(unsigned long long)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3 ;
-(void)observableAtIndexDidComplete:(unsigned long long)arg1 forObserver:(id)arg2 ;
-(void)observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3 ;
-(NSMutableArray *)isSequenceActive;
-(id)subscribe:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject {

	NSManagedObjectContext* _context;

}
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2 ;
-(id)replacementValueForValue:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithContext:(id)arg1 ;
@end


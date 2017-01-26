/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLiteStatement.h>

@class HDSQLiteQueryDescriptor, NSArray;

@interface HDSQLiteQueryStatement : HDSQLiteStatement {

	HDSQLiteQueryDescriptor* _descriptor;
	NSArray* _properties;
	NSArray* _columns;

}
-(id)anyEntityWithPredicate:(id)arg1 ;
-(void)enumerateEntitiesWithPredicate:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithDescriptor:(id)arg1 properties:(id)arg2 database:(id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSExpression;

@interface NSExpressionDescription : NSPropertyDescription {

	id _reservedtype1_1;
	id _reservedtype1_2;
	unsigned long long _reservedtype1_3;
	id _reservedtype1_4;
	unsigned long long _reservedtype1_5;
	id _reservedtype1_6;
	void* _reservedtype2_1;
	void* _reservedtype2_2;
	void* _reservedtype2_3;
	NSExpression* _expression;
	unsigned long long _expressionResultType;

}

@property (retain) NSExpression * expression; 
@property (assign) unsigned long long expressionResultType; 
-(unsigned long long)_propertyType;
-(NSExpression *)expression;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(unsigned long long)expressionResultType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExpression:(NSExpression *)arg1 ;
-(void)setExpressionResultType:(unsigned long long)arg1 ;
@end


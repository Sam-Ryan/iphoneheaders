/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDTableFilter : NSObject {

	int mScale;
	int mOperator;
	double mValue;
	double mFilterValue;

}
+(id)edTableFilter;
-(id)description;
-(void)setScale:(int)arg1 ;
-(int)scale;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setOperatorType:(int)arg1 ;
-(void)setFilterValue:(double)arg1 ;
-(double)filterValue;
-(int)operatorType;
@end

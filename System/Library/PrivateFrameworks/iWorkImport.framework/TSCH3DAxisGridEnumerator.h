/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCHChartAxis;

@interface TSCH3DAxisGridEnumerator : TSCH3DValueEnumerator {

	TSCHChartAxis* mAxis;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) TSCHChartAxis * axis; 
+(id)enumeratorWithAxis:(id)arg1 ;
-(id)initWithAxis:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(int)type;
-(AxisGridLocation)position;
-(TSCHChartAxis *)axis;
-(void)update;
@end

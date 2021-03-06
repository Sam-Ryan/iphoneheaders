/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCHSeriesDimension : NSObject <NSCopying> {

	unsigned long long mSeriesIndex;
	int mAxisType;

}

@property (nonatomic,readonly) unsigned long long seriesIndex; 
@property (nonatomic,readonly) int axisType; 
+(id)seriesDimensionWithSeriesIndex:(unsigned long long)arg1 axisType:(int)arg2 ;
-(id)initWithSeriesIndex:(unsigned long long)arg1 axisType:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)axisType;
-(unsigned long long)seriesIndex;
@end


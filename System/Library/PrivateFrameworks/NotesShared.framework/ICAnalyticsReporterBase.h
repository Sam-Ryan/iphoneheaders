/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICAnalyticsReporterBase : NSObject
+(long long)roundIntegerValue:(long long)arg1 ;
+(double)roundDoubleValue:(double)arg1 ;
-(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)addValue:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3 ;
-(void)pushValue:(double)arg1 toDistributionKey:(id)arg2 ;
-(id)instrumentationKeyForKey:(id)arg1 ;
@end


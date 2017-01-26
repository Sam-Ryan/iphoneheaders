/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDCAPropertyAnimationContextCache.h>

@class NSArray;

@interface TSDCAKeyframeAnimationContextCache : TSDCAPropertyAnimationContextCache {

	BOOL _isObjectTypeCGColor;
	NSArray* _values;
	NSArray* _keyTimes;
	NSArray* _timingFunctions;

}

@property (nonatomic,readonly) NSArray * values;                       //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) NSArray * keyTimes;                     //@synthesize keyTimes=_keyTimes - In the implementation block
@property (nonatomic,readonly) NSArray * timingFunctions;              //@synthesize timingFunctions=_timingFunctions - In the implementation block
@property (nonatomic,readonly) BOOL isObjectTypeCGColor;               //@synthesize isObjectTypeCGColor=_isObjectTypeCGColor - In the implementation block
-(id)initWithAnimation:(id)arg1 ;
-(void)verifyCacheWithAnimation:(id)arg1 ;
-(BOOL)isObjectTypeCGColor;
-(NSArray *)values;
-(NSArray *)keyTimes;
-(NSArray *)timingFunctions;
@end


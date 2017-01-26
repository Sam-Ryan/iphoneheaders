/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLEModel/ABLEStaticMap.h>

@class NSArray;

@interface ABLEStaticMapInclusiveDomainVectorRange : ABLEStaticMap {

	NSArray* _domainVector;
	double _domainMin;
	double _domainMax;

}

@property (readonly) NSArray * domainVector;              //@synthesize domainVector=_domainVector - In the implementation block
@property (readonly) double domainMin;                    //@synthesize domainMin=_domainMin - In the implementation block
@property (readonly) double domainMax;                    //@synthesize domainMax=_domainMax - In the implementation block
-(id)initWithDomainVector:(id)arg1 domainMin:(double)arg2 domainMax:(double)arg3 ;
-(id)initWithJSONDomainVector:(id)arg1 domainMin:(double)arg2 domainMax:(double)arg3 ;
-(NSArray *)domainVector;
-(double)domainMin;
-(double)domainMax;
-(double)map:(double)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONPrediction : NSObject {

	ABLEStaticMapInclusiveDomainVectorRange* _bonDoubleMap;

}

@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonDoubleMap;              //@synthesize bonDoubleMap=_bonDoubleMap - In the implementation block
+(id)bonPredict;
+(id)bonPredictWithArray:(id)arg1 ;
-(float)lookupForPredicted:(float)arg1 andBatteryLevel:(float)arg2 ;
-(id)initWithJsonResource:(id)arg1 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonDoubleMap;
-(void)setBonDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end


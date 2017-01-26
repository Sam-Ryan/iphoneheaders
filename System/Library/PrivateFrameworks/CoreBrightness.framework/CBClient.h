/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemClient, CBBlueLightClient, CBAdaptationClient;

@interface CBClient : NSObject {

	BrightnessSystemClient* bsc;
	CBBlueLightClient* _blueLightClient;
	CBAdaptationClient* _adaptationClient;

}

@property (readonly) CBBlueLightClient * blueLightClient;                //@synthesize blueLightClient=_blueLightClient - In the implementation block
@property (readonly) CBAdaptationClient * adaptationClient;              //@synthesize adaptationClient=_adaptationClient - In the implementation block
+(BOOL)supportsBlueLightReduction;
+(BOOL)supportsAdaptation;
-(void)dealloc;
-(id)init;
-(CBBlueLightClient *)blueLightClient;
-(CBAdaptationClient *)adaptationClient;
@end

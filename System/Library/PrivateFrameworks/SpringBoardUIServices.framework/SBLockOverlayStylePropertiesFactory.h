/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject {

	NSMutableDictionary* _deviceQualityToProperties;
	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id)propertiesWithGraphicsQuality:(long long)arg1 ;
-(id)_fetchAndCachePropsForDeviceQuality:(long long)arg1 ;
-(id)propertiesWithDeviceDefaultGraphicsQuality;
@end

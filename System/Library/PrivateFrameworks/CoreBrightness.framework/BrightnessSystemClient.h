/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemClientInternal;

@interface BrightnessSystemClient : NSObject {

	BrightnessSystemClientInternal* bsci;

}
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)isAlsSupported;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
@end


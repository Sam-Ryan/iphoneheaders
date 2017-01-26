/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject {

	/*^block*/id _expirationHandler;
	NSTimer* _assetTimer;

}
+(id)nextFireDateForDate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)updateAssetTimer;
-(void)assetTimerFired;
@end

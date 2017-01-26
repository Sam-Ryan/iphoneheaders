/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface PKPaymentOverlayableRequest : PKPaymentWebServiceRequest {

	NSMutableDictionary* _overlayParameters;
	NSMutableDictionary* _secureOverlayParameters;
	NSArray* _overridenKeys;

}

@property (nonatomic,copy) NSDictionary * overlayParameters; 
@property (nonatomic,copy) NSDictionary * secureOverlayParameters; 
-(void)dealloc;
-(id)init;
-(void)setOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)overlayValueForKey:(id)arg1 ;
-(NSDictionary *)overlayParameters;
-(void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)secureOverlayValueForKey:(id)arg1 ;
-(NSDictionary *)secureOverlayParameters;
-(void)_applyOverlayToDictionary:(id)arg1 ;
-(void)_applySecureOverlayToDictionary:(id)arg1 ;
-(void)_setOverriddenKeys:(id)arg1 ;
-(id)_redirectDataWithOverrides:(id)arg1 ;
-(void)setOverlayParameters:(NSDictionary *)arg1 ;
-(void)setSecureOverlayParameters:(NSDictionary *)arg1 ;
@end

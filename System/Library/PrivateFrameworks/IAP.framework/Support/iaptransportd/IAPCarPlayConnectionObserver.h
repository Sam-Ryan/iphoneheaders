/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:57 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iaptransportd/iaptransportd-Structs.h>
#import <iaptransportd/CRCarPlayPreferencesDelegate.h>

@class CRCarPlayPreferences, NSString;

@interface IAPCarPlayConnectionObserver : NSObject <CRCarPlayPreferencesDelegate> {

	BOOL _isStarkPossibleByCarPlaySettings;
	CRCarPlayPreferences* _carPreferences;
	CIapPortIOKit* _parentUSBPort;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPort:(CIapPortIOKit*)arg1 ;
-(void)handleCarPlayAllowedDidChange;
@end


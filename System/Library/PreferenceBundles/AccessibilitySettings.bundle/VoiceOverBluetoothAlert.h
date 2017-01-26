/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol VoiceOverBluetoothAlertDelegate;
@class VoiceOverBluetoothDevice, UIAlertController, NSString;

@interface VoiceOverBluetoothAlert : NSObject <UIAlertViewDelegate> {

	id<VoiceOverBluetoothAlertDelegate> _delegate;
	VoiceOverBluetoothDevice* _device;
	UIAlertController* _alertController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)showAlertWithResult:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end


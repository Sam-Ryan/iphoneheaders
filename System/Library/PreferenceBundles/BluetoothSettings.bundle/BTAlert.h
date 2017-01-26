/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>

@protocol BTAlertDelegate;
@class UIAlertView, BTSDevice, NSString;

@interface BTAlert : NSObject <UIModalViewDelegate> {

	id<BTAlertDelegate> _delegate;
	UIAlertView* _alert;
	BTSDevice* _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss;
-(void)showAlertWithResult:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end


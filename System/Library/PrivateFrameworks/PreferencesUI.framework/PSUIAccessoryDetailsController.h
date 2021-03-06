/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/EAAccessoryDelegate.h>

@class EAAccessory, NSString;

@interface PSUIAccessoryDetailsController : PSListController <EAAccessoryDelegate> {

	EAAccessory* _accessory;
	BOOL _shouldEscape;
	BOOL _finishedAppearing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)connect;
-(void)disconnect;
-(id)manufacturer;
-(id)serialNumber;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(id)bonjourName;
-(void)findAppForAccessory;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(id)specifiers;
-(id)modelNumber;
-(id)hardwareRevision;
-(id)firmwareRevision;
@end


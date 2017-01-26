/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/StoreServicesPlugin.servicebundle/StoreServicesPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_xpc_object, SSVSBCFUserNotificationDelegate;
@class UIAlertView, NSObject, NSString;

@interface SSVSBCFUserNotification : NSObject <UIAlertViewDelegate> {

	UIAlertView* _alertView;
	NSObject*<OS_xpc_object> _connection;
	id<SSVSBCFUserNotificationDelegate> _delegate;
	NSObject*<OS_xpc_object> _message;

}

@property (assign,nonatomic,__weak) id<SSVSBCFUserNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)show;
-(void)setDelegate:(id<SSVSBCFUserNotificationDelegate>)arg1 ;
-(void)dealloc;
-(id<SSVSBCFUserNotificationDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_configureAlertView:(id)arg1 withNotificationDictionary:(id)arg2 optionFlags:(unsigned long long)arg3 ;
-(id)initWithMessage:(id)arg1 connection:(id)arg2 ;
@end


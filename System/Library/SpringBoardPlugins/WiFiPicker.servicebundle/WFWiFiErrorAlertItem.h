/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface WFWiFiErrorAlertItem : SBAlertItem {

	id _delegate;
	NSString* _name;
	int _error;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithNetworkName:(id)arg1 error:(int)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)dismiss:(int)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/StickyKeys.axuiservice/StickyKeys
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIService.h>

@class AXStickyKeysViewController, NSString;

@interface AXStickyKeysUIServer : NSObject <AXUIService> {

	AXStickyKeysViewController* _stickyKeysViewController;

}

@property (nonatomic,retain) AXStickyKeysViewController * stickyKeysViewController;              //@synthesize stickyKeysViewController=_stickyKeysViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleStickyKeysDisabled;
-(AXStickyKeysViewController *)stickyKeysViewController;
-(void)setStickyKeysViewController:(AXStickyKeysViewController *)arg1 ;
-(void)_playSoundForState:(long long)arg1 ;
-(void)_handleStickyKeyUpdatedWithKeycode:(unsigned short)arg1 usagePage:(unsigned)arg2 state:(long long)arg3 ;
-(void)_handleStickyKeysToggledViaShift;
-(void)_showUIIfNeeded;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
@end


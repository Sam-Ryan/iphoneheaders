/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSTextEditingPane.h>

@class NSString;

@interface PhoneSettingsMyNumberPane : PSTextEditingPane {

	NSString* _previousValue;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(SCD_Struct_Ph3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(id)navigationTitle;
-(BOOL)handlesDoneButton;
-(void)_textDidChange:(id)arg1 ;
-(void)setMyNumberText:(id)arg1 ;
-(BOOL)drawLabel;
@end


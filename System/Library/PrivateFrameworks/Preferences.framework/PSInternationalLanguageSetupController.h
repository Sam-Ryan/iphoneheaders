/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class PSLanguageSelector;

@interface PSInternationalLanguageSetupController : PSSetupController {

	PSLanguageSelector* _languageSelector;

}

@property (nonatomic,retain) PSLanguageSelector * languageSelector;              //@synthesize languageSelector=_languageSelector - In the implementation block
-(void)commit;
-(void)setupController;
-(PSLanguageSelector *)languageSelector;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
-(void)setLanguageSelector:(PSLanguageSelector *)arg1 ;
@end


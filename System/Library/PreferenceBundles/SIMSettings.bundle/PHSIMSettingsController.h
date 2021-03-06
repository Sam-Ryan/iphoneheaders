/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/SIMSettings.bundle/SIMSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>

@class NSArray, PSSpecifier;

@interface PHSIMSettingsController : PSBundleController {

	NSArray* _specifiersArray;
	PSSpecifier* _simToolkitSpecifier;
	PSSpecifier* _simPINSpecifier;

}

@property (nonatomic,retain) NSArray * specifiersArray;                      //@synthesize specifiersArray=_specifiersArray - In the implementation block
@property (nonatomic,retain) PSSpecifier * simToolkitSpecifier;              //@synthesize simToolkitSpecifier=_simToolkitSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * simPINSpecifier;                  //@synthesize simPINSpecifier=_simPINSpecifier - In the implementation block
-(void)setSimPINSpecifier:(PSSpecifier *)arg1 ;
-(void)setSpecifiersArray:(NSArray *)arg1 ;
-(NSArray *)specifiersArray;
-(PSSpecifier *)simPINSpecifier;
-(BOOL)shouldShowSIMPINSpecifier;
-(PSSpecifier *)simToolkitSpecifier;
-(void)setSimToolkitSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)shouldShowSIMToolkitSpecifier;
-(id)specifiersWithSpecifier:(id)arg1 ;
@end


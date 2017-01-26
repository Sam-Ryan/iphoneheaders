/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIKeyboardPreferencesController : NSObject

@property (assign) long long handBias; 
+(id)sharedPreferencesController;
+(void)handleSpecificHardwareKeyboard;
-(void)setInputModeLastUsed:(id)arg1 ;
-(id)valueForKey:(int)arg1 ;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(double)rivenSizeFactor:(double)arg1 ;
-(BOOL)boolForKey:(int)arg1 ;
-(void)synchronizePreferences;
-(void)releaseDontSynchronizePreferences;
-(void)saveInputModes:(id)arg1 ;
-(void)setLanguageAwareInputModeLastUsed:(id)arg1 ;
-(BOOL)typologyEnabled;
-(long long)handBias;
-(void)setHandBias:(long long)arg1 ;
-(BOOL)isKeyLockedDown:(int)arg1 ;
-(void)preferencesControllerChanged:(id)arg1 ;
-(void)touchSynchronizePreferencesTimer;
-(BOOL)costlyCapture;
-(BOOL)spaceConfirmationEnabled;
@end


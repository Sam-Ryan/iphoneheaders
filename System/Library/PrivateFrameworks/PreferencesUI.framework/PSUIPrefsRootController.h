/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSRootController.h>

@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController {

	PSUIPrefsListController* _rootListController;

}
+(void)playRingtoneWithIdentifier:(id)arg1 loop:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupControllerForToolbar:(id)arg1 ;
-(void)mediaServerDiedNotification:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)rootListController;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 ;
@end


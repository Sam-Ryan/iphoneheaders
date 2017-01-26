/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SUDescriptor, SBSoftwareUpdateController;

@interface SBBaseSoftwareUpdateAlertItem : SBAlertItem {

	SUDescriptor* _descriptor;
	SBSoftwareUpdateController* _controller;

}

@property (nonatomic,readonly) SUDescriptor * descriptor;                                          //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) SBSoftwareUpdateController * softwareUpdateController;              //@synthesize controller=_controller - In the implementation block
-(SBSoftwareUpdateController *)softwareUpdateController;
-(id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 ;
-(void)activateSoftwareUpdateSettingsDisplay;
-(void)activateDisplayWithURL:(id)arg1 ;
-(SUDescriptor *)descriptor;
-(BOOL)undimsScreen;
-(BOOL)unlocksScreen;
-(void)willDeactivateForReason:(int)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(id)updateName;
@end


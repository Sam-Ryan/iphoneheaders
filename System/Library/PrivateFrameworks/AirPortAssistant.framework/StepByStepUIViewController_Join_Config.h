/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <libobjc.A.dylib/StepByStepUIDevicePicker.h>

@class NSString;

@interface StepByStepUIViewController_Join_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	NSString* personalizedBaseName;
	unsigned productID;
	int deviceKind;
	BOOL supportsSpruce;

}

@property (nonatomic,retain) NSString * personalizedBaseName; 
-(void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4 ;
-(void)setupTable;
-(void)validateAndUpdateNextButton;
-(BOOL)shouldEnableNextButton;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)showMoreOptions;
-(void)updateNavigationButtons;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg1 ;
-(void)setPersonalizedBaseName:(NSString *)arg1 ;
-(NSString *)personalizedBaseName;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)primaryActionSelected:(BOOL)arg1 ;
-(void)prepareParams;
-(void)selectedDeviceUpdated;
-(void)setupEditableBaseStationName;
@end


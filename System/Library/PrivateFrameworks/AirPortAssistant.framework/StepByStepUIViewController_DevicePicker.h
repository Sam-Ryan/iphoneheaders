/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class NSDictionary, UIPopoverController, NSArray, NSString, RecommendationActionController;

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate> {

	NSDictionary* _selectedDevice;
	NSDictionary* _sourceNetwork;
	NSDictionary* _sourceBase;
	NSDictionary* _targetBase;
	UIPopoverController* _popover;
	NSArray* sortedDevices;
	NSString* connectionMedium;
	RecommendationActionController* actionController;
	BOOL _showSingleBaseTopo;
	BOOL showFullList;

}

@property (nonatomic,retain) NSArray * sortedDevices; 
@property (assign,nonatomic) NSString * connectionMedium; 
@property (nonatomic,retain) RecommendationActionController * actionController; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)showMoreOptions;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3 ;
-(void)setSortedDevices:(NSArray *)arg1 ;
-(void)setConnectionMedium:(NSString *)arg1 ;
-(NSString *)connectionMedium;
-(NSArray *)sortedDevices;
-(void)setupPickerTable;
-(void)updateSelections;
-(id)pickerContent;
-(RecommendationActionController *)actionController;
-(void)setActionController:(RecommendationActionController *)arg1 ;
@end


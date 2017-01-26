/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSMutableArray, NSString, NSArray;

@interface AssistiveTouchCustomizeBaseActionPickerController : AccessibilityBaseListController {

	NSMutableArray* _shownIcons;
	NSString* _selectedPopoverIcon;
	NSString* _selectedPopoverLocation;
	/*^block*/id _iconFilter;

}

@property (nonatomic,readonly) NSArray * shownIcons;                          //@synthesize shownIcons=_shownIcons - In the implementation block
@property (nonatomic,retain) NSString * selectedPopoverIcon;                  //@synthesize selectedPopoverIcon=_selectedPopoverIcon - In the implementation block
@property (nonatomic,retain) NSString * selectedPopoverLocation;              //@synthesize selectedPopoverLocation=_selectedPopoverLocation - In the implementation block
@property (nonatomic,copy) id iconFilter;                                     //@synthesize iconFilter=_iconFilter - In the implementation block
-(long long)astNumberOfRowsInSection:(long long)arg1 ;
-(void)setSelectedPopoverIcon:(NSString *)arg1 ;
-(NSString *)selectedPopoverIcon;
-(void)astTableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)astTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)availableIcons;
-(id)astPickerCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)iconFilter;
-(void)setSelectedPopoverLocation:(NSString *)arg1 ;
-(NSString *)selectedPopoverLocation;
-(void)setIconFilter:(id)arg1 ;
-(NSArray *)shownIcons;
-(void)dealloc;
-(void)loadView;
@end


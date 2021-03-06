/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MCDetailsHeaderContentView;

@interface MCDetailsHeaderCell : UITableViewCell {

	MCDetailsHeaderContentView* _headerView;

}
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDisplayName:(id)arg1 ;
-(void)setOrganizationName:(id)arg1 ;
-(void)setGradientColor:(int)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 mode:(int)arg3 ;
-(void)setHidesUntrustedLabel:(BOOL)arg1 ;
-(void)setUseTrustedNomenclature:(BOOL)arg1 ;
-(void)setIsTrusted:(BOOL)arg1 ;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)hideActionButton;
-(double)heightForTableView;
-(void)showActionButton;
-(void)setActionToRemove;
-(void)setIsExpired:(BOOL)arg1 ;
-(void)setActionToInstall;
@end


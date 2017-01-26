/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;
@interface PreferencesValueCell : EKUIConstrainedFontsTableViewCell {

	id<EKCellShortener> _shortener;

}

@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)layoutSubviews;
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(void)_checkValueWidth;
-(id<EKCellShortener>)shortener;
@end


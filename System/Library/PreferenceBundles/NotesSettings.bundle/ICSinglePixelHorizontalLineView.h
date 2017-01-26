/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/NotesSettings.bundle/NotesSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface ICSinglePixelHorizontalLineView : UIView {

	BOOL _hasSetUpHeightConstraint;

}

@property (assign,nonatomic) BOOL hasSetUpHeightConstraint;              //@synthesize hasSetUpHeightConstraint=_hasSetUpHeightConstraint - In the implementation block
-(id)findHightLayoutConstraintIfExists;
-(id)addHeightConstraint;
-(void)setUpHeightConstraintIfNecessary;
-(BOOL)hasSetUpHeightConstraint;
-(void)setHasSetUpHeightConstraint:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)updateConstraints;
@end


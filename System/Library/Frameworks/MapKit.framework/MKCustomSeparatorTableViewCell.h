/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>

@interface MKCustomSeparatorTableViewCell : MKTableViewCell {

	BOOL _separatorHidden;
	double _leftSeparatorInset;
	double _rightSeparatorInset;

}

@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden;              //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) double leftSeparatorInset;                                  //@synthesize leftSeparatorInset=_leftSeparatorInset - In the implementation block
@property (assign,nonatomic) double rightSeparatorInset;                                 //@synthesize rightSeparatorInset=_rightSeparatorInset - In the implementation block
@property (assign,nonatomic) double leadingSeparatorInset; 
@property (assign,nonatomic) double trailingSeparatorInset; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGRect)_separatorFrame;
-(void)setLeftSeparatorInset:(double)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(BOOL)isSeparatorHidden;
-(void)setTrailingSeparatorInset:(double)arg1 ;
-(double)rightSeparatorInset;
-(double)leftSeparatorInset;
-(void)setRightSeparatorInset:(double)arg1 ;
-(double)trailingSeparatorInset;
-(double)leadingSeparatorInset;
-(void)_updateSeparatorInset;
@end


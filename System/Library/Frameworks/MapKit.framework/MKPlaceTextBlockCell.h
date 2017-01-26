/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>

@class MKExpandingLabel, NSString, NSArray;

@interface MKPlaceTextBlockCell : MKTableViewCell {

	BOOL _constraintsAdded;
	MKExpandingLabel* _textBlock;
	NSString* _textBlockText;
	NSArray* _marginConstraints;

}

@property (nonatomic,copy) NSString * textBlockText;                                         //@synthesize textBlockText=_textBlockText - In the implementation block
@property (assign,getter=isTextBlockExpanded,nonatomic) BOOL textBlockExpanded; 
@property (nonatomic,copy) id textBlockResizedBlock; 
@property (nonatomic,retain) MKExpandingLabel * textBlock;                                   //@synthesize textBlock=_textBlock - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;                                    //@synthesize marginConstraints=_marginConstraints - In the implementation block
@property (assign,nonatomic) BOOL constraintsAdded;                                          //@synthesize constraintsAdded=_constraintsAdded - In the implementation block
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(void)prepareForReuse;
-(void)updateConstraints;
-(MKExpandingLabel *)textBlock;
-(void)setTextBlock:(MKExpandingLabel *)arg1 ;
-(NSArray *)marginConstraints;
-(void)setMarginConstraints:(NSArray *)arg1 ;
-(void)setTextBlockExpanded:(BOOL)arg1 ;
-(NSString *)textBlockText;
-(BOOL)isTextBlockExpanded;
-(void)_refreshLayoutMargins;
-(void)setConstraintsAdded:(BOOL)arg1 ;
-(void)setTextBlockText:(NSString *)arg1 ;
-(id)textBlockResizedBlock;
-(BOOL)constraintsAdded;
-(void)setTextBlockResizedBlock:(id)arg1 ;
@end


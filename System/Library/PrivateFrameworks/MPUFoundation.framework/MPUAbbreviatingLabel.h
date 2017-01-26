/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UILabel.h>

@class NSMutableArray, NSArray;

@interface MPUAbbreviatingLabel : UILabel {

	NSMutableArray* _textRepresentationSizes;
	NSArray* _textRepresentations;

}

@property (nonatomic,copy) NSArray * textRepresentations;              //@synthesize textRepresentations=_textRepresentations - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)_calculateTextSizes;
-(void)_selectBestRepresentation;
-(void)_setTextRepresentation:(id)arg1 ;
-(void)setTextRepresentations:(NSArray *)arg1 ;
-(NSArray *)textRepresentations;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIMorphingLabel, NSAttributedString, NSMutableArray, NSArray;

@interface UIMorphingLabelGlyphSet : NSObject {

	UIMorphingLabel* _label;
	NSAttributedString* _attributedString;
	CTLineRef _line;
	NSMutableArray* _glyphViews;
	unsigned long long _glyphCount;
	unsigned short* _glyphs;
	CGRect* _glyphFrames;
	CGPoint* _glyphPositions;
	CGPoint _lineOrigin;
	double _lineWidth;

}

@property (nonatomic,readonly) unsigned long long glyphCount;                      //@synthesize glyphCount=_glyphCount - In the implementation block
@property (nonatomic,readonly) const unsigned short* glyphs;                       //@synthesize glyphs=_glyphs - In the implementation block
@property (nonatomic,readonly) const CGRect* glyphFrames;                          //@synthesize glyphFrames=_glyphFrames - In the implementation block
@property (nonatomic,readonly) const CGPoint* glyphPositions;                      //@synthesize glyphPositions=_glyphPositions - In the implementation block
@property (nonatomic,readonly) NSArray * glyphViews;                               //@synthesize glyphViews=_glyphViews - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) CGPoint lineOrigin;                                 //@synthesize lineOrigin=_lineOrigin - In the implementation block
@property (nonatomic,readonly) double lineWidth;                                   //@synthesize lineWidth=_lineWidth - In the implementation block
-(void)dealloc;
-(double)lineWidth;
-(NSAttributedString *)attributedString;
-(void)buildGlyphViews;
-(id)initWithLabel:(id)arg1 attributedString:(id)arg2 ;
-(void)removeGlyphs;
-(void)placeGlyphs;
-(CGRect)boundingRectForGlyphsInRange:(NSRange)arg1 ;
-(unsigned long long)glyphCount;
-(const unsigned short*)glyphs;
-(const CGRect*)glyphFrames;
-(const CGPoint*)glyphPositions;
-(NSArray *)glyphViews;
-(CGPoint)lineOrigin;
@end


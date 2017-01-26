/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class EDResources, NSString, EDColorReference;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	NSString* mName;
	EDColorReference* mColorReference;
	int mUnderline;
	int mScript;
	double mHeightInTwips;
	int mCharSet;
	int mFamily;
	unsigned mWeight;
	BOOL mBold;
	BOOL mItalic;
	BOOL mShadow;
	BOOL mStrike;
	BOOL mOutline;
	BOOL mUnderlineOverridden;
	BOOL mStrikeOverridden;
	BOOL mBoldOverridden;
	BOOL mWeightOverridden;
	BOOL mItalicOverridden;
	BOOL mHeightOverridden;
	BOOL mNameOverridden;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fontWithResources:(id)arg1 ;
-(id)colorReference;
-(void)setColorReference:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(id)color;
-(void)setColor:(id)arg1 ;
-(BOOL)isBold;
-(int)script;
-(void)setHeight:(double)arg1 ;
-(void)setScript:(int)arg1 ;
-(void)setShadow:(BOOL)arg1 ;
-(unsigned)weight;
-(void)setWeight:(unsigned)arg1 ;
-(BOOL)isBoldOverridden;
-(BOOL)isItalicOverridden;
-(BOOL)isUnderlineOverridden;
-(int)underline;
-(BOOL)isHeightOverridden;
-(BOOL)isItalic;
-(BOOL)isStrikeOverridden;
-(BOOL)isStrike;
-(int)family;
-(void)setFamily:(int)arg1 ;
-(void)setBold:(BOOL)arg1 ;
-(void)setItalic:(BOOL)arg1 ;
-(int)charSet;
-(id)initWithResources:(id)arg1 ;
-(void)setUnderline:(int)arg1 ;
-(void)setStrike:(BOOL)arg1 ;
-(BOOL)isOutline;
-(void)setCharSet:(int)arg1 ;
-(BOOL)isEqualToFont:(id)arg1 ;
-(BOOL)isShadow;
-(BOOL)isWeightOverridden;
-(void)setOutline:(BOOL)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
-(BOOL)isNameOverridden;
@end


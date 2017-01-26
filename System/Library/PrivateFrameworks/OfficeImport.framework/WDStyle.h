/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDTableStyleOverride, WDStyleSheet, NSString;

@interface WDStyle : NSObject <NSCopying> {

	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDTableRowProperties* mTableRowProperties;
	WDTableCellProperties* mTableCellProperties;
	WDTableStyleOverride* mTableStyleOverrides[12];
	WDStyleSheet* mStyleSheet;
	WDStyle* mBaseStyle;
	WDStyle* mNextStyle;
	BOOL mHidden;
	NSString* mName;
	NSString* mId;
	int mStyleType;

}
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hidden;
-(id)baseStyle;
-(id)id;
-(id)paragraphProperties;
-(id)characterProperties;
-(id)styleSheet;
-(id)tableCellProperties;
-(id)tableProperties;
-(BOOL)isAnythingOverridden;
-(void)setNextStyle:(id)arg1 ;
-(id)tableRowProperties;
-(id)tableStyleOverrideForPart:(int)arg1 ;
-(void)setBaseStyle:(id)arg1 ;
-(id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3 ;
-(id)nextStyle;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPTOCEntryStyle : <TSWPParagraphStyle : TSSStyle : TSPObject> = {
   16 fontName
   17 fontSize
   18 fontColor
   19 bold
   20 italic
   21 capitalization
   22 underline
   23 underlineWidth
   24 underlineColor
   25 word_underline
   26 strikethru
   27 strikethruWidth
   28 strikethruColor
   29 word_strikethrough
   31 outline
   32 outlineColor
   33 baselineShift
   34 kerning
   35 tracking
   36 superscript
   37 textBackground
   38 language
   39 textShadow
   40 ligatures
   42 coreTextFontFeatures
   43 writingDirection
   44 emphasisMarks
   45 compatibilityFont
   80 firstLineIndent
   81 leftIndent
   82 rightIndent
   83 defaultTabStops
   84 tabs
   85 lineSpacing
   86 alignment
   87 spaceBefore
   88 spaceAfter
   89 keepLinesTogether
   90 keepWithNext
   91 pageBreakBefore
   92 widowControl
   93 hyphenate
   94 paragraphFill
   95 followingParagraphStyle
   96 decimalTab
   97 paragraphBorderType
   98 paragraphStroke
   99 paragraphRuleWidth
  100 paragraphRuleOffset
  101 outlineLevel
  102 outlineStyleType
  103 listStyle
  104 followingParagraphStyleIdentifier
  105 showInTOC
  106 tocStyle
}
+(id)defaultValueForProperty:(int)arg1 ;
+(int)defaultIntValueForProperty:(int)arg1 ;
+(id)propertiesAllowingNSNull;
+(id)properties;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(TOCEntryStyleArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4 ;
-(id)presetKind;
-(const ParagraphStyleArchive*)paragraphStyleArchiveFromUnarchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 basedOnParagraphStyle:(id)arg3 ;
-(void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const TOCEntryStylePropertiesArchive*)arg2 unarchiver:(id)arg3 ;
-(void)p_saveTOCEntryStylePropertiesToArchive:(TOCEntryStylePropertiesArchive*)arg1 archiver:(id)arg2 ;
@end


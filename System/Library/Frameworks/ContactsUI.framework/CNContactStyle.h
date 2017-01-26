/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor, UIFont;

@interface CNContactStyle : NSObject <NSSecureCoding> {

	BOOL _usesOpaqueBackground;
	BOOL _usesTranslucentBarStyle;
	BOOL _shouldPresentInCurrentContext;
	BOOL _blurSupported;
	UIColor* _textColor;
	UIColor* _disabledTextColor;
	UIColor* _placeholderTextColor;
	UIColor* _highlightedTextColor;
	UIColor* _suggestedLabelTextColor;
	UIColor* _suggestedValueTextColor;
	UIColor* _readOnlyTextColor;
	UIColor* _notesTextColor;
	UIColor* _backgroundColor;
	long long _separatorBackdropOverlayBlendMode;
	UIColor* _headerBackgroundColor;
	UIColor* _separatorColor;
	long long _separatorStyle;
	UIColor* _sectionBackgroundColor;
	UIColor* _selectedCellBackgroundColor;
	long long _barStyle;
	long long _keyboardAppearance;

}

@property (nonatomic,retain) UIColor * textColor;                                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledTextColor;                              //@synthesize disabledTextColor=_disabledTextColor - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor;                           //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                           //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedLabelTextColor;                        //@synthesize suggestedLabelTextColor=_suggestedLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedValueTextColor;                        //@synthesize suggestedValueTextColor=_suggestedValueTextColor - In the implementation block
@property (nonatomic,retain) UIColor * readOnlyTextColor;                              //@synthesize readOnlyTextColor=_readOnlyTextColor - In the implementation block
@property (nonatomic,retain) UIColor * notesTextColor;                                 //@synthesize notesTextColor=_notesTextColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL usesOpaqueBackground;                                //@synthesize usesOpaqueBackground=_usesOpaqueBackground - In the implementation block
@property (assign,nonatomic) long long separatorBackdropOverlayBlendMode;              //@synthesize separatorBackdropOverlayBlendMode=_separatorBackdropOverlayBlendMode - In the implementation block
@property (nonatomic,retain) UIColor * headerBackgroundColor;                          //@synthesize headerBackgroundColor=_headerBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                 //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                 //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * sectionBackgroundColor;                         //@synthesize sectionBackgroundColor=_sectionBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedCellBackgroundColor;                    //@synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor - In the implementation block
@property (assign,nonatomic) long long barStyle;                                       //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) BOOL usesTranslucentBarStyle;                             //@synthesize usesTranslucentBarStyle=_usesTranslucentBarStyle - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                             //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentInCurrentContext;                       //@synthesize shouldPresentInCurrentContext=_shouldPresentInCurrentContext - In the implementation block
@property (assign,nonatomic) BOOL blurSupported;                                       //@synthesize blurSupported=_blurSupported - In the implementation block
@property (nonatomic,readonly) UIFont * textFont; 
@property (nonatomic,readonly) UIFont * boldTextFont; 
+(id)currentStyle;
+(BOOL)supportsSecureCoding;
+(void)setCurrentStyle:(id)arg1 ;
+(id)faceTimeStyle;
+(id)watchStyle;
+(id)darkStyle;
+(id)starkStyle;
+(id)siriStyle;
+(id)testStyle;
+(id)defaultStyle;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(UIColor *)separatorColor;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(long long)separatorStyle;
-(UIColor *)textColor;
-(long long)keyboardAppearance;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)disabledTextColor;
-(UIColor *)highlightedTextColor;
-(UIFont *)textFont;
-(UIColor *)sectionBackgroundColor;
-(UIColor *)selectedCellBackgroundColor;
-(UIColor *)suggestedLabelTextColor;
-(UIColor *)suggestedValueTextColor;
-(BOOL)shouldPresentInCurrentContext;
-(UIColor *)notesTextColor;
-(UIFont *)boldTextFont;
-(BOOL)blurSupported;
-(BOOL)usesOpaqueBackground;
-(long long)separatorBackdropOverlayBlendMode;
-(void)setBlurSupported:(BOOL)arg1 ;
-(void)setNotesTextColor:(UIColor *)arg1 ;
-(void)setUsesOpaqueBackground:(BOOL)arg1 ;
-(void)setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(void)setHeaderBackgroundColor:(UIColor *)arg1 ;
-(void)setUsesTranslucentBarStyle:(BOOL)arg1 ;
-(void)setShouldPresentInCurrentContext:(BOOL)arg1 ;
-(void)setDisabledTextColor:(UIColor *)arg1 ;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(void)setReadOnlyTextColor:(UIColor *)arg1 ;
-(void)setSuggestedLabelTextColor:(UIColor *)arg1 ;
-(void)setSuggestedValueTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(UIColor *)readOnlyTextColor;
-(UIColor *)headerBackgroundColor;
-(BOOL)usesTranslucentBarStyle;
-(void)setSectionBackgroundColor:(UIColor *)arg1 ;
-(void)setSelectedCellBackgroundColor:(UIColor *)arg1 ;
@end

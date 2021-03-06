/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SearchUIResult.h>

@protocol SearchUIActionButtonItem, SearchUIAuxiliaryInfo;
@class UIImage, NSString, NSArray, NSURL, SAUIAppPunchOut;

@interface SiriUSResult : NSObject <SearchUIResult> {

	BOOL _centered;
	SAUIAppPunchOut* _punchOut;
	UIImage* _image;
	NSString* _title;
	unsigned long long _titleMaxLines;
	NSString* _secondaryTitle;
	NSArray* _richTextItems;
	NSString* _footnote;
	id<SearchUIActionButtonItem> _actionButton;
	id<SearchUIAuxiliaryInfo> _auxiliaryInfo;
	NSArray* _cardSections;
	NSArray* _rowSections;
	NSURL* _destinationURL;

}

@property (nonatomic,retain) SAUIAppPunchOut * punchOut;                             //@synthesize punchOut=_punchOut - In the implementation block
@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long titleMaxLines;                       //@synthesize titleMaxLines=_titleMaxLines - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                                //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,retain) NSArray * richTextItems;                                //@synthesize richTextItems=_richTextItems - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                      //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) id<SearchUIActionButtonItem> actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) id<SearchUIAuxiliaryInfo> auxiliaryInfo;                //@synthesize auxiliaryInfo=_auxiliaryInfo - In the implementation block
@property (nonatomic,copy) NSArray * cardSections;                                   //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,copy) NSArray * rowSections;                                    //@synthesize rowSections=_rowSections - In the implementation block
@property (nonatomic,copy) NSURL * destinationURL;                                   //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) BOOL centered;                                          //@synthesize centered=_centered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresTwoLineTitles; 
@property (nonatomic,readonly) BOOL secondaryTitleDetached; 
@property (nonatomic,readonly) BOOL shouldCropImageToCircle; 
@property (nonatomic,readonly) double imageCornerRadius; 
@property (nonatomic,readonly) UIImage * secondaryImage; 
@property (nonatomic,copy,readonly) NSURL * cardURL; 
-(void)setRichTextItems:(NSArray *)arg1 ;
-(void)setRowSections:(NSArray *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(void)setTitleMaxLines:(unsigned long long)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSString *)footnote;
-(NSArray *)richTextItems;
-(NSString *)secondaryTitle;
-(unsigned long long)titleMaxLines;
-(NSArray *)rowSections;
-(NSArray *)cardSections;
-(id<SearchUIAuxiliaryInfo>)auxiliaryInfo;
-(id<SearchUIActionButtonItem>)actionButton;
-(BOOL)centered;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(void)setCardSections:(NSArray *)arg1 ;
-(void)setActionButton:(id<SearchUIActionButtonItem>)arg1 ;
-(void)setAuxiliaryInfo:(id<SearchUIAuxiliaryInfo>)arg1 ;
@end


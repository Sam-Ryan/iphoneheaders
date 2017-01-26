/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, NSArray, NSAttributedString, SKUILabelViewElement;

@interface SKUIEditorialComponent : SKUIPageComponent {

	NSString* _bodyText;
	NSArray* _links;
	long long _maximumBodyLines;
	SKUIEditorialStyle _style;
	NSString* _titleText;
	BOOL _usesLockupTitle;

}

@property (nonatomic,readonly) NSAttributedString * bodyAttributedText; 
@property (nonatomic,readonly) NSString * bodyText;                                        //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,readonly) NSString * titleText;                                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) SKUIEditorialStyle editorialStyle;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSArray * links;                                            //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) long long maximumBodyLines;                                 //@synthesize maximumBodyLines=_maximumBodyLines - In the implementation block
@property (nonatomic,readonly) SKUILabelViewElement * viewElement; 
@property (getter=_usesLockupTitle,nonatomic,readonly) BOOL _usesLockupTitle;              //@synthesize usesLockupTitle=_usesLockupTitle - In the implementation block
-(NSArray *)links;
-(NSString *)bodyText;
-(long long)componentType;
-(NSString *)titleText;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithUberText:(id)arg1 ;
-(SKUIEditorialStyle)editorialStyle;
-(id)initWithBrickRoomText:(id)arg1 ;
-(NSAttributedString *)bodyAttributedText;
-(void)_setTitleText:(id)arg1 ;
-(long long)maximumBodyLines;
-(BOOL)_usesLockupTitle;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKImageElement, IKTextElement, IKOrdinalElement, IKViewElement;

@interface IKLockupElement : IKViewElement

@property (nonatomic,retain,readonly) IKImageElement * image; 
@property (nonatomic,retain,readonly) IKImageElement * fullscreenImage; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,readonly) BOOL showTitlesOnFocus; 
@property (nonatomic,retain,readonly) IKViewElement * overlays; 
-(IKTextElement *)title;
-(IKImageElement *)image;
-(IKTextElement *)subtitle;
-(IKTextElement *)descriptionText;
-(IKViewElement *)overlays;
-(IKOrdinalElement *)ordinal;
-(BOOL)showTitlesOnFocus;
-(IKImageElement *)fullscreenImage;
@end


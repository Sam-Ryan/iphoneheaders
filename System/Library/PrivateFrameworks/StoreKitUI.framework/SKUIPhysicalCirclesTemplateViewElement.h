/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIPhysicalCirclesTemplateDOMFeature, SKUILabelViewElement, NSArray, SKUIPaletteViewElement;

@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement {

	SKUIPhysicalCirclesTemplateDOMFeature* _scriptInterface;

}

@property (nonatomic,readonly) SKUILabelViewElement * subtitleElement; 
@property (nonatomic,readonly) SKUILabelViewElement * titleElement; 
@property (nonatomic,readonly) NSArray * circleItemElements; 
@property (nonatomic,readonly) SKUIPaletteViewElement * footerPaletteElement; 
@property (nonatomic,readonly) SKUIPhysicalCirclesTemplateDOMFeature * scriptInterface;              //@synthesize scriptInterface=_scriptInterface - In the implementation block
+(id)supportedFeatures;
-(SKUIPhysicalCirclesTemplateDOMFeature *)scriptInterface;
-(NSArray *)circleItemElements;
-(void)dispatchRemovedEventWithChildViewElement:(id)arg1 ;
-(SKUILabelViewElement *)titleElement;
-(SKUIPaletteViewElement *)footerPaletteElement;
-(SKUILabelViewElement *)subtitleElement;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
@end

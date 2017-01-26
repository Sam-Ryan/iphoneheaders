/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIActivityIndicatorViewElement : SKUIViewElement {

	double _period;

}

@property (nonatomic,readonly) SKUIImageViewElement * image; 
@property (nonatomic,readonly) double period; 
@property (nonatomic,readonly) SKUILabelViewElement * text; 
-(SKUILabelViewElement *)text;
-(SKUIImageViewElement *)image;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(long long)pageComponentType;
-(BOOL)isDisabled;
-(double)period;
@end


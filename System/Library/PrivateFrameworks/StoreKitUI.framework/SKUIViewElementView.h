/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIViewElementView <NSObject>
@optional
+(id)textPropertiesForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;

@required
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+(CGSize*)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+(CGSize*)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
-(void)setContentInset:(UIEdgeInsets)arg1;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
-(id)viewForElementIdentifier:(id)arg1;

@end


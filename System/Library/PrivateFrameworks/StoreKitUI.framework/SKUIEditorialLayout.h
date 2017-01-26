/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIEditorialComponent, SKUILayoutCache;

@interface SKUIEditorialLayout : NSObject {

	SKUIEditorialComponent* _editorial;
	long long _landscapeLinkLayoutIndex;
	long long _landscapeTextLayoutIndex;
	long long _landscapeTitleLayoutIndex;
	double _landscapeWidth;
	long long _portraitLinkLayoutIndex;
	long long _portraitTextLayoutIndex;
	long long _portraitTitleLayoutIndex;
	double _portraitWidth;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,readonly) SKUIEditorialComponent * editorialComponent;              //@synthesize editorial=_editorial - In the implementation block
@property (nonatomic,readonly) SKUILayoutCache * layoutCache;                            //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
-(SKUILayoutCache *)layoutCache;
-(void)enqueueLayoutRequests;
-(id)initWithEditorial:(id)arg1 layoutCache:(id)arg2 ;
-(void)setLayoutWidth:(double)arg1 forOrientation:(long long)arg2 ;
-(id)bodyTextLayoutForOrientation:(long long)arg1 ;
-(double)layoutHeightForOrientation:(long long)arg1 expanded:(BOOL)arg2 ;
-(id)titleTextLayoutForOrientation:(long long)arg1 ;
-(id)linkLayoutForOrientation:(long long)arg1 ;
-(id)_bodyTextLayoutRequestWithTotalWidth:(double)arg1 ;
-(id)_titleTextLayoutRequestWithTotalWidth:(double)arg1 ;
-(id)_linkLayoutRequestWithTotalWidth:(double)arg1 ;
-(SKUIEditorialComponent *)editorialComponent;
@end


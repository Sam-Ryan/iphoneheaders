/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUISearchStandardCell.h>

@class UIImageView, NSOperation;

@interface SPUISearchImageCell : SPUISearchStandardCell {

	UIImageView* _titleImageView;
	NSOperation* _fetchImageOperation;

}

@property (nonatomic,readonly) UIImageView * titleImageView;                 //@synthesize titleImageView=_titleImageView - In the implementation block
@property (nonatomic,retain) NSOperation * fetchImageOperation;              //@synthesize fetchImageOperation=_fetchImageOperation - In the implementation block
+(BOOL)supportsSection:(id)arg1 result:(id)arg2 ;
+(id)placeHolderImageForDomain:(unsigned)arg1 result:(id)arg2 size:(CGSize)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)leftTextMargin;
-(void)prepareForReuse;
-(id)leftView;
-(id)variableConstraints;
-(id)constantConstraints;
-(double)imageWidth;
-(UIImageView *)titleImageView;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(id)leftTextView;
-(void)setFetchImageOperation:(NSOperation *)arg1 ;
-(NSOperation *)fetchImageOperation;
@end


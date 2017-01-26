/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface SearchUIRichTextLayoutItem : NSObject {

	UIView* _view;
	double _firstItemLeadingSpacing;
	double _leadingSpacing;
	double _baselineSpacing;
	long long _baselineAttribute;

}

@property (retain) UIView * view;                               //@synthesize view=_view - In the implementation block
@property (assign) double firstItemLeadingSpacing;              //@synthesize firstItemLeadingSpacing=_firstItemLeadingSpacing - In the implementation block
@property (assign) double leadingSpacing;                       //@synthesize leadingSpacing=_leadingSpacing - In the implementation block
@property (assign) double baselineSpacing;                      //@synthesize baselineSpacing=_baselineSpacing - In the implementation block
@property (assign) long long baselineAttribute;                 //@synthesize baselineAttribute=_baselineAttribute - In the implementation block
+(id)itemWithView:(id)arg1 firstItemLeadingSpacing:(double)arg2 leadingSpacing:(double)arg3 baselineSpacing:(double)arg4 baselineAttribute:(long long)arg5 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(double)baselineSpacing;
-(void)setFirstItemLeadingSpacing:(double)arg1 ;
-(void)setLeadingSpacing:(double)arg1 ;
-(void)setBaselineSpacing:(double)arg1 ;
-(void)setBaselineAttribute:(long long)arg1 ;
-(double)firstItemLeadingSpacing;
-(double)leadingSpacing;
-(long long)baselineAttribute;
@end


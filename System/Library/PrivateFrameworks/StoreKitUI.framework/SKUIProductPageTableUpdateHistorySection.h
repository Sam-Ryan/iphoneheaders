/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class SKUIClientContext, NSMutableIndexSet, SKUIProductPageTableExpandableHeaderView, NSArray, SKUILayoutCache, SKUIColorScheme, NSDateFormatter;

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection {

	SKUIClientContext* _clientContext;
	NSMutableIndexSet* _expandedIndexSet;
	long long _firstStringIndex;
	SKUIProductPageTableExpandableHeaderView* _headerView;
	NSArray* _releaseNotes;
	SKUILayoutCache* _textLayoutCache;
	SKUIColorScheme* _colorScheme;
	NSDateFormatter* _dateFormatter;

}

@property (assign,nonatomic) long long firstStringIndex;                     //@synthesize firstStringIndex=_firstStringIndex - In the implementation block
@property (nonatomic,copy) NSArray * releaseNotes;                           //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;              //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                  //@synthesize colorScheme=_colorScheme - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(SKUILayoutCache *)textLayoutCache;
-(id)initWithClientContext:(id)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
-(NSArray *)releaseNotes;
-(void)setFirstStringIndex:(long long)arg1 ;
-(void)setReleaseNotes:(NSArray *)arg1 ;
-(void)_reloadHeaderView;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)firstStringIndex;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end


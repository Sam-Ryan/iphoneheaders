/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>

@class NSDictionary, UICollectionView, NSArray, SASportsLeague;

@interface ACSportsListView : UIView {

	NSDictionary* _domainViewForIdentifier;
	UICollectionView* _collectionView;
	NSArray* _domainObjects;
	NSArray* _domainObjectViews;
	SASportsLeague* _league;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainObjects;                 //@synthesize domainObjects=_domainObjects - In the implementation block
@property (nonatomic,readonly) NSArray * domainObjectViews;                  //@synthesize domainObjectViews=_domainObjectViews - In the implementation block
@property (nonatomic,readonly) SASportsLeague * league;                      //@synthesize league=_league - In the implementation block
-(void)_updateDomainObjectViews;
-(void)setDomainObjects:(id)arg1 league:(id)arg2 ;
-(NSArray *)domainObjectViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NSArray *)domainObjects;
-(SASportsLeague *)league;
@end


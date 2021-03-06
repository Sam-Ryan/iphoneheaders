/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXLayouterDelegate;
#import <Silex/Silex-Structs.h>
@interface SXLayouter : NSObject {

	id<SXLayouterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)layoutDescription;
-(BOOL)componentBlueprint:(id)arg1 shouldIntersectWithComponentBlueprint:(id)arg2 ;
-(void)layoutBlueprint:(id)arg1 ;
-(void)createDependenciesForLayoutBlueprint:(id)arg1 inLayoutResolver:(id)arg2 ;
-(CGPoint)calculatePositionForComponentLayout:(id)arg1 inLayoutBlueprint:(id)arg2 ;
-(CGSize)calculateSizeForComponentLayout:(id)arg1 layoutBlueprint:(id)arg2 layoutResolver:(id)arg3 ;
-(BOOL)intersectionPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 forLayoutBlueprint:(id)arg3 ;
-(id)findComponentStackBeforeComponent:(id)arg1 inColumnStack:(id)arg2 ;
-(int)layoutAttributeForAnchor:(long long)arg1 ;
-(BOOL)anchorPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 forLayoutBlueprint:(id)arg3 ;
-(double)factorForLayoutAttribute:(int)arg1 ;
-(BOOL)stack:(id)arg1 stackComponents:(id)arg2 containsComponentIncludingAnchoredComponents:(id)arg3 forSourceComponent:(id)arg4 ;
-(BOOL)stackComponents:(id)arg1 containsComponent:(id)arg2 ;
-(void)setDelegate:(id<SXLayouterDelegate>)arg1 ;
-(id<SXLayouterDelegate>)delegate;
@end


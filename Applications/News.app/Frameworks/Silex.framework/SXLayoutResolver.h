/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SXLayoutResolver : NSObject {

	BOOL _hasValidLayout;
	NSMutableArray* _componentLayouts;
	NSArray* _resolvedGraph;

}

@property (nonatomic,retain) NSMutableArray * componentLayouts;              //@synthesize componentLayouts=_componentLayouts - In the implementation block
@property (nonatomic,retain) NSArray * resolvedGraph;                        //@synthesize resolvedGraph=_resolvedGraph - In the implementation block
@property (assign,nonatomic) BOOL hasValidLayout;                            //@synthesize hasValidLayout=_hasValidLayout - In the implementation block
+(id)dependentComponentsForComponentWithIdentifier:(id)arg1 forDependency:(long long)arg2 inComponentLayouts:(id)arg3 recursive:(BOOL)arg4 ;
+(id)dependentComponentsForComponentWithIdentifier:(id)arg1 forDependency:(long long)arg2 inComponentLayouts:(id)arg3 ;
-(BOOL)hasValidLayout;
-(id)componentLayoutForComponentWithIdentifier:(id)arg1 layoutAttribute:(long long)arg2 ;
-(NSMutableArray *)componentLayouts;
-(NSArray *)resolvedGraph;
-(id)resolvedLayoutForComponentLayouts:(id)arg1 ;
-(void)setResolvedGraph:(NSArray *)arg1 ;
-(void)setHasValidLayout:(BOOL)arg1 ;
-(void)resolveStack:(id)arg1 withResolvedLayout:(id)arg2 ;
-(id)resolvedComponentLayoutForComponentDependency:(id)arg1 ;
-(void)addComponentWithIdentifier:(id)arg1 ;
-(void)addComponentWithIdentifier:(id)arg1 withDependency:(id)arg2 ;
-(id)resolvedLayout;
-(id)currentComponentLayouts;
-(id)dependenciesForComponentWithIdentifier:(id)arg1 withDependencyAttribute:(long long)arg2 ;
-(void)debugDependencies;
-(void)setComponentLayouts:(NSMutableArray *)arg1 ;
-(id)init;
-(void)invalidate;
@end


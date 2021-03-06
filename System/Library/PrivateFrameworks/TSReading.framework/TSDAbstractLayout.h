/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class NSMutableArray, TSDLayoutGeometry, NSArray;

@interface TSDAbstractLayout : NSObject {

	TSDAbstractLayout* mParent;
	NSMutableArray* mChildren;
	TSDLayoutGeometry* mGeometry;
	CGPoint mInterimPosition;
	BOOL mInterimPositionXSet;
	BOOL mInterimPositionYSet;
	CGPoint mLastInterimPosition;
	BOOL mLastInterimPositionXSet;
	BOOL mLastInterimPositionYSet;

}

@property (nonatomic,copy) TSDLayoutGeometry * geometry; 
@property (assign,nonatomic) TSDAbstractLayout * parent; 
@property (nonatomic,readonly) TSDAbstractLayout * root; 
@property (nonatomic,copy) NSArray * children; 
@property (assign,nonatomic) double interimPositionX; 
@property (assign,nonatomic) double interimPositionY; 
-(id)geometryInRoot;
-(CGRect)rectInRoot:(CGRect)arg1 ;
-(CGRect)frameInRoot;
-(CGAffineTransform)transformInRoot;
-(BOOL)supportsRotation;
-(CGRect)alignmentFrame;
-(CGPoint)alignmentFrameOriginForFixingInterimPosition;
-(id)geometryInRoot:(id)arg1 ;
-(BOOL)isRootLayoutForInspectorGeometry;
-(void)fixTransformFromLastInterimPosition;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(CGRect)frameForCulling;
-(id)delegateConformingToProtocol:(id)arg1 forLayout:(id)arg2 ;
-(CGRect)rectInParent:(CGRect)arg1 ;
-(CGAffineTransform)transformInParent;
-(BOOL)providesGuidesForChildLayouts;
-(id)parentLayoutForProvidingGuides;
-(void)addLayoutsInRect:(CGRect)arg1 toArray:(id)arg2 deep:(BOOL)arg3 ;
-(void)addLayoutsToArray:(id)arg1 ;
-(CGRect)alignmentFrameInRoot;
-(void)p_fixTransformFromInterimPosition:(CGPoint)arg1 interimPositionXSet:(BOOL)arg2 interimPositionYSet:(BOOL)arg3 ;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(id)geometryInParent;
-(id)geometryForTransforming;
-(id)visibleGeometries;
-(CGRect)frameInParent;
-(BOOL)isAxisAlignedUnflippedInRoot;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(void)insertChild:(id)arg1 below:(id)arg2 ;
-(void)insertChild:(id)arg1 above:(id)arg2 ;
-(void)exchangeChildAtIndex:(unsigned long long)arg1 withChildAtIndex:(unsigned long long)arg2 ;
-(void)addDescendentLayoutsToArray:(id)arg1 ;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(BOOL)shouldSnapWhileResizing;
-(double)interimPositionX;
-(void)setInterimPositionX:(double)arg1 ;
-(double)interimPositionY;
-(void)setInterimPositionY:(double)arg1 ;
-(void)fixTransformFromInterimPosition;
-(CGPoint)positionInRootForAttachmentPositioner;
-(BOOL)supportsResize;
-(BOOL)supportsInspectorPositioning;
-(BOOL)supportsParentRotation;
-(BOOL)supportsFlipping;
-(BOOL)canRotateChildLayout:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(CGRect)frame;
-(CGAffineTransform)transform;
-(TSDLayoutGeometry *)geometry;
-(void)setGeometry:(TSDLayoutGeometry *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(void)removeFromParent;
-(void)addChild:(id)arg1 ;
-(TSDAbstractLayout *)root;
-(TSDAbstractLayout *)parent;
-(NSArray *)children;
-(void)setParent:(TSDAbstractLayout *)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
@end


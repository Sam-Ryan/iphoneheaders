/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDBezierNode : NSObject {

	CGPoint mIn;
	CGPoint mNode;
	CGPoint mOut;
	int mReflectedState;
	BOOL mSelected;
	int mType;

}

@property (assign,nonatomic) CGPoint nodePoint; 
@property (assign,nonatomic) CGPoint inControlPoint; 
@property (assign,nonatomic) CGPoint outControlPoint; 
@property (assign,nonatomic) int reflectedState; 
@property (nonatomic,readonly) BOOL isCollapsed; 
@property (assign,nonatomic) int type; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
+(id)bezierNodeWithPoint:(CGPoint)arg1 ;
+(id)bezierNodeWithPoint:(CGPoint)arg1 inControlPoint:(CGPoint)arg2 outControlPoint:(CGPoint)arg3 ;
-(CGPoint)inControlPoint;
-(CGPoint)nodePoint;
-(CGPoint)outControlPoint;
-(void)setNodePoint:(CGPoint)arg1 ;
-(void)setInControlPoint:(CGPoint)arg1 ;
-(void)setOutControlPoint:(CGPoint)arg1 ;
-(void)setReflectedState:(int)arg1 ;
-(int)reflectedState;
-(id)reflectedStateString;
-(void)balanceControlPoints;
-(void)setInControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3 ;
-(void)setOutControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3 ;
-(void)setInControlPointFromReflection:(CGPoint)arg1 constrain:(BOOL)arg2 ;
-(void)collapse;
-(void)updateReflectedState;
-(void)swapControlPoints;
-(BOOL)underPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)moveToPoint:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isCollapsed;
-(void)setNode:(CGPoint)arg1 ;
-(id)typeString;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
@end


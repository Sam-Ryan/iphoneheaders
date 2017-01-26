/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraph.h>

@interface GKGridGraph : GKGraph {

	GKCGridGraph* _cGridGraph;
	BOOL _diagonalsAllowed;

}

@property (nonatomic,readonly)  gridOrigin; 
@property (nonatomic,readonly) unsigned long long gridWidth; 
@property (nonatomic,readonly) unsigned long long gridHeight; 
@property (nonatomic,readonly) BOOL diagonalsAllowed;                      //@synthesize diagonalsAllowed=_diagonalsAllowed - In the implementation block
+(id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 ;
-(void)removeNodes:(id)arg1 ;
-(GKCGraph*)makeCGraph;
-(id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 ;
-()gridOrigin;
-(unsigned long long)gridWidth;
-(unsigned long long)gridHeight;
-(GKCGridGraph*)cGridGraph;
-(id)nodeAtGridPosition:;
-(id)nodeAtGridPositionNoNilCheck:;
-(void)connectNodeToAdjacentNodes:(id)arg1 ;
-(BOOL)diagonalsAllowed;
@end


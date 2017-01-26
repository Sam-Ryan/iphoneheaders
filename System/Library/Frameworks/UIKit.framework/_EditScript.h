/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _EditScriptData;
@class _IntArray2D, NSArray, NSMutableArray;

@interface _EditScript : NSObject {

	BOOL _orderAtomsAscending;
	_IntArray2D* _distanceMatrix;
	long long _currentOperation;
	id<_EditScriptData> _itemAData;
	id<_EditScriptData> _itemBData;
	NSArray* _operationPrecedenceArray;
	NSMutableArray* _script;

}

@property (nonatomic,copy) NSArray * operationPrecedenceArray;              //@synthesize operationPrecedenceArray=_operationPrecedenceArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * script;                       //@synthesize script=_script - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithOperationPrecedence:(long long)arg1 orderAtomsAscending:(BOOL)arg2 ;
-(void)computeDistanceMatrix;
-(void)computeEditsFromMatrix;
-(NSMutableArray *)script;
-(void)finalizeCurrentScriptAtom;
-(void)initializeCurrentScriptAtom;
-(void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(id)operationPrecedenceArrayFromOperationPrecedence:(long long)arg1 ;
-(void)setScript:(NSMutableArray *)arg1 ;
-(NSArray *)operationPrecedenceArray;
-(void)setOperationPrecedenceArray:(NSArray *)arg1 ;
@end


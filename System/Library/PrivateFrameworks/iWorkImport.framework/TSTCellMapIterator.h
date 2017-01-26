/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTCellMap, TSTCellUIDIterator, TSTCell;

@interface TSTCellMapIterator : NSObject {

	TSTCellMap* _cellMap;
	TSTCellUIDIterator* _cellUIDIterator;
	unsigned long long _index;
	BOOL _oneToMany;
	TSTCellUID _currentCellUID;
	TSTCell* _currentCell;

}
-(id)initWithCellMap:(id)arg1 ;
-(pair<TSTCell *, TSTCellUID>)nextCellAndCellUID;
-(const TSTCellUID*)currentCellUID;
-(id)currentCell;
@end


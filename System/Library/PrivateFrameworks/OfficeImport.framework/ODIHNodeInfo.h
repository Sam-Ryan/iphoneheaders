/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIHNodeInfo : NSObject {

	int mTreeDepth;
	int mRow;
	ODIHRange mXRange;
	BOOL mConnectToVerticalSide;
	int mExtraRowsBetweenParentAndSelf;
	float mXOffsetRelativeToParent;
	ODIHRangeVector* mXRanges;

}
-(void)dealloc;
-(id)init;
-(int)row;
-(ODIHRange)xRange;
-(void)setXRange:(ODIHRange)arg1 ;
-(int)treeDepth;
-(void)setTreeDepth:(int)arg1 ;
-(void)setRow:(int)arg1 ;
-(BOOL)connectToVerticalSide;
-(void)setConnectToVerticalSide:(BOOL)arg1 ;
-(int)extraRowsBetweenParentAndSelf;
-(void)setExtraRowsBetweenParentAndSelf:(int)arg1 ;
-(float)xOffsetRelativeToParent;
-(void)setXOffsetRelativeToParent:(float)arg1 ;
-(void)addToXOffsetRelativeToParent:(float)arg1 ;
-(ODIHRangeVector*)xRanges;
@end

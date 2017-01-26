/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODIState, NSMutableDictionary;

@interface ODIHierarchy : NSObject {

	int mType;
	int mMaxMappableTreeDepth;
	ODIState* mState;
	NSMutableDictionary* mNodeInfoMap;

}
+(BOOL)mapIdentifier:(id)arg1 state:(id)arg2 ;
-(void)map;
-(ODIHRangeVector*)mapRangesForNode:(id)arg1 ;
-(void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector*)arg1 ;
-(id)infoForNode:(id)arg1 ;
-(id)initWithType:(int)arg1 state:(id)arg2 ;
-(void)createInfoForNode:(id)arg1 depth:(int)arg2 ;
-(void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 ;
-(CGRect)boundsOfNode:(id)arg1 ;
-(void)mapNode:(id)arg1 ;
-(void)dealloc;
@end


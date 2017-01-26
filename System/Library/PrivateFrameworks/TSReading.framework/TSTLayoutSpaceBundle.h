/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject {

	TSTLayout* mLayout;
	TSTLayoutSpace* mSpace;
	TSTLayoutSpace* mFrozenHeaderColumnsSpace;
	TSTLayoutSpace* mFrozenHeaderRowsSpace;
	TSTLayoutSpace* mFrozenHeaderCornerSpace;
	TSTLayoutSpace* mRepeatHeaderColumnsSpace;
	TSTLayoutSpace* mRepeatHeaderRowsSpace;
	TSTLayoutSpace* mRepeatHeaderCornerSpace;

}

@property (assign,nonatomic) TSTLayout * layout; 
@property (nonatomic,retain) TSTLayoutSpace * space; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderColumnsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderRowsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderCornerSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderColumnsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderRowsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderCornerSpace; 
-(void)performActionOnEachLayoutSpace:(/*^block*/id)arg1 ;
-(TSTLayoutSpace *)repeatHeaderRowsSpace;
-(TSTLayoutSpace *)repeatHeaderColumnsSpace;
-(void)invalidateCoordinates;
-(BOOL)performActionOnFrozenLayoutSpaces:(/*^block*/id)arg1 ;
-(BOOL)performActionOnRepeatLayoutSpaces:(/*^block*/id)arg1 ;
-(void)invalidateTableOffsets;
-(id)getSpaceContainingCellID:(SCD_Struct_TS136)arg1 ;
-(int)validateLayoutSpaces;
-(TSTLayoutSpace *)frozenHeaderColumnsSpace;
-(void)setFrozenHeaderColumnsSpace:(TSTLayoutSpace *)arg1 ;
-(TSTLayoutSpace *)frozenHeaderRowsSpace;
-(void)setFrozenHeaderRowsSpace:(TSTLayoutSpace *)arg1 ;
-(TSTLayoutSpace *)frozenHeaderCornerSpace;
-(void)setFrozenHeaderCornerSpace:(TSTLayoutSpace *)arg1 ;
-(void)setRepeatHeaderColumnsSpace:(TSTLayoutSpace *)arg1 ;
-(void)setRepeatHeaderRowsSpace:(TSTLayoutSpace *)arg1 ;
-(TSTLayoutSpace *)repeatHeaderCornerSpace;
-(void)setRepeatHeaderCornerSpace:(TSTLayoutSpace *)arg1 ;
-(void)dealloc;
-(id)description;
-(TSTLayout *)layout;
-(void)setLayout:(TSTLayout *)arg1 ;
-(id)initWithLayout:(id)arg1 ;
-(void)setSpace:(TSTLayoutSpace *)arg1 ;
-(TSTLayoutSpace *)space;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDPathManipulation : NSObject {

	TSDPathManipulation* mPrecedingManipulation;

}
-(CGPathRef)manipulatePath:(CGPathRef)arg1 withLineWidth:(double)arg2 ;
-(BOOL)canDecomposeRectIntoParts;
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingManipulation:(id)arg4 ;
-(void)dealloc;
@end


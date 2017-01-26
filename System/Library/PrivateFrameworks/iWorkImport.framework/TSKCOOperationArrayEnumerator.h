/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOIntermediateOperationEnumerator.h>

@class NSMutableArray;

@interface TSKCOOperationArrayEnumerator : NSObject <TSKCOIntermediateOperationEnumerator> {

	NSMutableArray* mOperationArray;
	unsigned long long mNextIndex;

}
-(id)nextOperation;
-(void)replaceOperation:(id)arg1 ;
-(void)appendOperation:(id)arg1 ;
-(id)nextOperationOnAddress:(id)arg1 ;
-(id)initWithOperationEnumerator:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


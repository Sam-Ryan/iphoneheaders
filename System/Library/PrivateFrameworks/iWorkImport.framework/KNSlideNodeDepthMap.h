/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface KNSlideNodeDepthMap : NSObject {

	NSArray* _slideNodes;
	NSArray* _depthsOfSlideNodes;

}

@property (nonatomic,readonly) NSArray * slideNodes;                      //@synthesize slideNodes=_slideNodes - In the implementation block
@property (nonatomic,readonly) NSArray * depthsOfSlideNodes;              //@synthesize depthsOfSlideNodes=_depthsOfSlideNodes - In the implementation block
-(NSArray *)slideNodes;
-(id)initWithSlideNodes:(id)arg1 depths:(id)arg2 ;
-(void)enumerateSlideNodesAndDepthsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)depthsOfSlideNodes;
-(void)dealloc;
@end


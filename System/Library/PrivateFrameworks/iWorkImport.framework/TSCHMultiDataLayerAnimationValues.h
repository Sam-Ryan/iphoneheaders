/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString, NSArray;

@interface TSCHMultiDataLayerAnimationValues : NSObject {

	CALayer* mLayer;
	NSString* mKey;
	NSArray* mValues;
	NSArray* mKeyTimes;
	BOOL mNeedPresentationLayerValues;

}

@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSArray * values; 
@property (nonatomic,readonly) NSArray * keyTimes; 
@property (nonatomic,readonly) BOOL needPresentationLayerValues; 
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 ;
-(id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5 ;
-(BOOL)needPresentationLayerValues;
-(CALayer *)layer;
-(void)dealloc;
-(id)description;
-(NSString *)key;
-(NSArray *)values;
-(NSArray *)keyTimes;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTransitLineMapModel.h>

@interface VKSelectedTransitLineMapModel : VKTransitLineMapModel
-(void)setSelectedLines:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 ;
-(void)setSelectedNodes:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 ;
-(id)initWithSharedResources:(id)arg1 contentScale:(double)arg2 labelExternalObjectsModerator:(LabelExternalObjectsModerator*)arg3 ;
-(unsigned long long)mapLayerPosition;
-(void)cloneSelectedItemsFromTransitLineModel:(id)arg1 ;
@end

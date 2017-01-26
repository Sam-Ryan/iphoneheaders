/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKFeatureMarker.h>

@interface VKLabelFeatureMarker : VKFeatureMarker {

	shared_ptr<vk::LabelFeature>* _labelFeature;
	shared_ptr<vk::LabelManager>* _labelManager;

}

@property (assign,nonatomic) int viewProximity; 
-(void)setViewProximity:(int)arg1 ;
-(int)viewProximity;
-(id)initWithFeature:(SCD_Struct_VK78*)arg1 labelFeature:(shared_ptr<vk::LabelFeature>*)arg2 manager:(shared_ptr<vk::LabelManager>*)arg3 ;
@end


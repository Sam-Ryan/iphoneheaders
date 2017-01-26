/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKAnchor : NSObject {

	shared_ptr<vk::Anchor>* _anchor;

}

@property (nonatomic,readonly) BOOL isMercator; 
@property (nonatomic,readonly) BOOL isGeocentric; 
@property (nonatomic,readonly) BOOL followsTerrain; 
@property (nonatomic,readonly) VKPoint worldPoint; 
@property (nonatomic,readonly) VKPoint mercatorPoint; 
@property (assign,nonatomic) CGSize coordinate; 
@property (assign,nonatomic) id<VKAnchorDelegate> delegate; 
-(void)setDelegate:(id<VKAnchorDelegate>)arg1 ;
-(id<VKAnchorDelegate>)delegate;
-(BOOL)isMercator;
-(long long)worldIndexWithContext:(id)arg1 ;
-(VKPoint)worldPoint;
-(BOOL)isGeocentric;
-(BOOL)followsTerrain;
-(VKPoint)mercatorPoint;
-(void)setMercatorPoint:(VKPoint)arg1 ;
-(void)worldPointDidChange;
-(id)initWithAnchor:(shared_ptr<vk::Anchor>*)arg1 ;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
@end


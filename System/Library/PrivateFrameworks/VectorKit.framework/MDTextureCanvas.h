/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/MDRenderTarget.h>

@class NSString;

@interface MDTextureCanvas : NSObject <MDRenderTarget> {

	CGSize _size;
	CGSize _sizeInPixels;
	double _contentScale;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double contentScale;                 //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) CGSize sizeInPixels;                 //@synthesize sizeInPixels=_sizeInPixels - In the implementation block
@property (nonatomic,readonly) float averageFPS; 
-(CGSize)size;
-(void)dealloc;
-(NSString *)description;
-(double)contentScale;
-(CGSize)sizeInPixels;
-(void)willDrawView;
-(void)didDrawView;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSDContentPath : NSObject {

	NSArray* _contentLocations;

}

@property (nonatomic,copy) NSArray * contentLocations;              //@synthesize contentLocations=_contentLocations - In the implementation block
+(id)contentPathWithLocations:(id)arg1 ;
-(id)i_contentLocations;
-(void)setContentLocations:(NSArray *)arg1 ;
-(NSArray *)contentLocations;
-(id)contentLocationAtTime:(double)arg1 withTimingFunction:(id)arg2 ;
-(void)dealloc;
@end


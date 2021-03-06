/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MRCAMLAnimation : NSObject {

	double startTime;
	double duration;
	BOOL removedOnCompletion;
	NSString* keyPath;
	NSArray* keyframes;

}

@property (nonatomic,copy) NSString * keyPath; 
@property (nonatomic,retain) NSArray * keyframes; 
-(NSArray *)keyframes;
-(void)setKeyframes:(NSArray *)arg1 ;
-(void)dealloc;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
@end


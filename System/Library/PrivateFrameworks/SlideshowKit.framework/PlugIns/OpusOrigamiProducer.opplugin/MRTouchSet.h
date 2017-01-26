/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSMutableSet, NSMutableDictionary, NSSet;

@interface MRTouchSet : NSObject {

	NSMutableSet* _touches;
	NSMutableDictionary* _touchesForUITouches;
	CGSize _locationFactor;

}

@property (readonly) NSSet * touches;                                      //@synthesize touches=_touches - In the implementation block
@property (readonly) CGPoint centroid; 
@property (readonly) double scale; 
@property (readonly) double rotation; 
@property (readonly) BOOL isActive; 
@property (readonly) unsigned long long countOfActiveTouches; 
-(void)removeAllTouches;
-(id)updateWithUITouches:(id)arg1 inView:(id)arg2 ;
-(void)removeTouch:(id)arg1 ;
-(id)initWithUITouches:(id)arg1 inView:(id)arg2 ;
-(id)initWithUITouches:(id)arg1 inView:(id)arg2 withLocationFactor:(CGSize)arg3 ;
-(id)initWithTouches:(id)arg1 ;
-(id)updateWithPosition:(CGPoint)arg1 andCountOfTouches:(unsigned long long)arg2 ;
-(void)cancelAllTouches;
-(id)initWithPosition:(CGPoint)arg1 andCountOfTouches:(unsigned long long)arg2 ;
-(unsigned long long)countOfActiveTouches;
-(id)initWithTouch:(id)arg1 ;
-(void)addTouch:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isActive;
-(double)scale;
-(NSSet *)touches;
-(double)rotation;
-(CGPoint)centroid;
@end


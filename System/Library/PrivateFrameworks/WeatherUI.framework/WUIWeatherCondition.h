/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WeatherUI/WeatherUI-Structs.h>
@class CALayer, City, NSMutableArray, CAStateController, NSString;

@interface WUIWeatherCondition : NSObject {

	CALayer* _rootLayer;
	BOOL _playing;
	BOOL _hidden;
	BOOL _shouldRasterize;
	BOOL _multiCityMode;
	BOOL _isRotating;
	BOOL _forcesCondition;
	City* _city;
	double _alpha;
	double _speed;
	double _timeOffset;
	CALayer* _layer;
	long long _condition;
	unsigned long long _CAMLState;
	long long _forcesNight;
	NSMutableArray* _gyroLayers;
	CAStateController* _stateController;
	NSString* _loadedFileName;

}

@property (assign,nonatomic,__weak) City * city;                               //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) BOOL playing;                                     //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) double alpha;                                     //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double speed;                                     //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) double timeOffset;                                //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterize;                             //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign,nonatomic) BOOL multiCityMode;                               //@synthesize multiCityMode=_multiCityMode - In the implementation block
@property (assign,nonatomic) long long condition;                              //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL isRotating;                                  //@synthesize isRotating=_isRotating - In the implementation block
@property (assign,nonatomic) unsigned long long CAMLState;                     //@synthesize CAMLState=_CAMLState - In the implementation block
@property (assign,nonatomic) BOOL forcesCondition;                             //@synthesize forcesCondition=_forcesCondition - In the implementation block
@property (assign,nonatomic) long long forcesNight;                            //@synthesize forcesNight=_forcesNight - In the implementation block
@property (nonatomic,retain) NSMutableArray * gyroLayers;                      //@synthesize gyroLayers=_gyroLayers - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) NSString * loadedFileName;                        //@synthesize loadedFileName=_loadedFileName - In the implementation block
-(CALayer *)layer;
-(void)dealloc;
-(double)alpha;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(id)init;
-(void)setSpeed:(double)arg1 ;
-(BOOL)isRotating;
-(double)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(BOOL)shouldRasterize;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)resume;
-(void)setTime:(float)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(long long)condition;
-(void)setCondition:(long long)arg1 ;
-(void)pause;
-(BOOL)hidden;
-(void)setCity:(City *)arg1 ;
-(City *)city;
-(BOOL)playing;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)_interfaceConsideredPortraitForCAMLLayerWithSize:(CGSize)arg1 ;
-(void)setCAMLLayerStateForInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setCity:(id)arg1 animationDuration:(double)arg2 ;
-(void)setCondition:(long long)arg1 animationDuration:(double)arg2 ;
-(NSString *)loadedFileName;
-(void)setCorrectStateForCurrentOrientationAndMode;
-(void)setAlpha:(double)arg1 animationDuration:(double)arg2 ;
-(void)setCAMLState:(unsigned long long)arg1 ;
-(BOOL)_interfaceConsideredPortraitForCAMLLayer;
-(unsigned long long)CAMLState;
-(void)transitionToSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(void)setMultiCityMode:(BOOL)arg1 ;
-(BOOL)multiCityMode;
-(void)setIsRotating:(BOOL)arg1 ;
-(BOOL)forcesCondition;
-(void)setForcesCondition:(BOOL)arg1 ;
-(long long)forcesNight;
-(void)setForcesNight:(long long)arg1 ;
-(NSMutableArray *)gyroLayers;
-(void)setGyroLayers:(NSMutableArray *)arg1 ;
-(CAStateController *)stateController;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)setLoadedFileName:(NSString *)arg1 ;
@end


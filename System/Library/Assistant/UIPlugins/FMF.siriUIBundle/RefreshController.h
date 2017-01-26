/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <FMF/CurrentLocationDelegate.h>

@protocol RefreshControllerDelegate;
@class NSTimer, CLLocationManager, CLLocation, NSString;

@interface RefreshController : NSObject <CLLocationManagerDelegate, CurrentLocationDelegate> {

	BOOL isVisibilityRefresh;
	BOOL refresherCancelled;
	NSTimer* pollTimer;
	id<RefreshControllerDelegate> delegate;
	CLLocationManager* locationManager;
	CLLocation* currentLocation;
	CLLocation* lastRefreshLocation;
	double timeout;

}

@property (assign,nonatomic) id<RefreshControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL isVisibilityRefresh; 
@property (nonatomic,retain) NSTimer * pollTimer; 
@property (nonatomic,retain) CLLocationManager * locationManager; 
@property (nonatomic,retain) CLLocation * currentLocation; 
@property (nonatomic,copy) CLLocation * lastRefreshLocation; 
@property (assign,nonatomic) BOOL refresherCancelled; 
@property (assign,nonatomic) double timeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshLocations;
-(BOOL)isVisibilityRefresh;
-(CLLocation *)lastRefreshLocation;
-(BOOL)refresherCancelled;
-(void)refreshVisibility;
-(void)setLastRefreshLocation:(CLLocation *)arg1 ;
-(void)setRefresherCancelled:(BOOL)arg1 ;
-(void)setIsVisibilityRefresh:(BOOL)arg1 ;
-(void)scheduleTimerWithInterval:(double)arg1 ;
-(void)beginTimerWithRefresh:(double)arg1 timeout:(double)arg2 ;
-(void)setDelegate:(id<RefreshControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<RefreshControllerDelegate>)delegate;
-(void)timerFired:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)cancelTimer;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(double)timeout;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)setPollTimer:(NSTimer *)arg1 ;
-(NSTimer *)pollTimer;
@end


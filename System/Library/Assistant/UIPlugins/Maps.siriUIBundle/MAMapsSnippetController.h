/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <Maps/MAListSnippetViewDelegate.h>
#import <Maps/MAMapSnippetViewDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol SiriUISnippetViewControllerDelegate;
@class CLLocationManager, SALocation, SALocalSearchMapItemSnippet, NSString;

@interface MAMapsSnippetController : SiriUISnippetViewController <MAListSnippetViewDelegate, MAMapSnippetViewDelegate, CLLocationManagerDelegate> {

	CLLocationManager* _locManager;
	BOOL _appearing;
	SALocation* _searchRegionCenter;
	double _fallbackDistance;
	BOOL _hasEverStartedLoading;
	id<SiriUISnippetViewControllerDelegate> _delegate;
	SALocalSearchMapItemSnippet* _snippet;

}

@property (nonatomic,retain) SALocalSearchMapItemSnippet * snippet;              //@synthesize snippet=_snippet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mapView:(id)arg1 didChooseMapItem:(id)arg2 ;
-(void)listView:(id)arg1 didChooseMapItem:(id)arg2 ;
-(void)mapViewDidChooseMapAttribution:(id)arg1 ;
-(id)nearCityString:(id)arg1 ;
-(id)titleForList:(id)arg1 ;
-(id)_mapSnippetView;
-(void)updateTitleAndSubtitleWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)headerLocationForSearchCenter:(id)arg1 location:(SCD_Struct_MA0)arg2 forMapItem:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSnippet:(SALocalSearchMapItemSnippet *)arg1 ;
-(SALocalSearchMapItemSnippet *)snippet;
-(void)_cleanUp;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)initWithSnippet:(id)arg1 ;
-(BOOL)isMemoryIntensive;
@end


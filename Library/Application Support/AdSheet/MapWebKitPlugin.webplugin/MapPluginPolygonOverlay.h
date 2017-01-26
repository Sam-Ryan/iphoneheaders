/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapWebKitPlugin/MapWebKitPlugin-Structs.h>
#import <MapKit/MKPolygon.h>
#import <MapWebKitPlugin/MapPluginOverlay.h>

@class NSString, MapPluginOverlayPathOptions, MKOverlayPathView;

@interface MapPluginPolygonOverlay : MKPolygon <MapPluginOverlay> {

	NSString* _identifier;
	MapPluginOverlayPathOptions* _pathOptions;

}

@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) MapPluginOverlayPathOptions * pathOptions;              //@synthesize pathOptions=_pathOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_Ma0 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_Ma1 boundingMapRect; 
@property (nonatomic,retain,readonly) MKOverlayPathView * overlayView; 
+(id)polygonOverlayForWebScriptObject:(id)arg1 ;
-(MapPluginOverlayPathOptions *)pathOptions;
-(void)setPathOptions:(MapPluginOverlayPathOptions *)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(MKOverlayPathView *)overlayView;
@end


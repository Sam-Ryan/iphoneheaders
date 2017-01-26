/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, UIImage, NSAttributedString;

@interface MNSerializableStepViewState : NSObject <NSCoding> {

	NSArray* _transitImages;
	UIImage* _alternativeImage;
	NSAttributedString* _majorAttributedString;
	NSAttributedString* _minorAttributedString;
	NSAttributedString* _tertiaryAttributedString;
	NSArray* _clusteredRouteOptionLabelItems;
	NSAttributedString* _accessoryViewAttributedString;
	NSAttributedString* _transitRoutingIncidentString;

}

@property (nonatomic,retain) NSArray * transitImages;                                         //@synthesize transitImages=_transitImages - In the implementation block
@property (nonatomic,retain) UIImage * alternativeImage;                                      //@synthesize alternativeImage=_alternativeImage - In the implementation block
@property (nonatomic,retain) NSAttributedString * majorAttributedString;                      //@synthesize majorAttributedString=_majorAttributedString - In the implementation block
@property (nonatomic,retain) NSAttributedString * minorAttributedString;                      //@synthesize minorAttributedString=_minorAttributedString - In the implementation block
@property (nonatomic,retain) NSAttributedString * tertiaryAttributedString;                   //@synthesize tertiaryAttributedString=_tertiaryAttributedString - In the implementation block
@property (nonatomic,copy) NSArray * clusteredRouteOptionLabelItems;                          //@synthesize clusteredRouteOptionLabelItems=_clusteredRouteOptionLabelItems - In the implementation block
@property (nonatomic,retain) NSAttributedString * accessoryViewAttributedString;              //@synthesize accessoryViewAttributedString=_accessoryViewAttributedString - In the implementation block
@property (nonatomic,retain) NSAttributedString * transitRoutingIncidentString;               //@synthesize transitRoutingIncidentString=_transitRoutingIncidentString - In the implementation block
-(void)setAlternativeImage:(UIImage *)arg1 ;
-(NSAttributedString *)tertiaryAttributedString;
-(void)setMinorAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)minorAttributedString;
-(void)setTransitImages:(NSArray *)arg1 ;
-(NSAttributedString *)transitRoutingIncidentString;
-(NSArray *)clusteredRouteOptionLabelItems;
-(void)setAccessoryViewAttributedString:(NSAttributedString *)arg1 ;
-(UIImage *)alternativeImage;
-(NSAttributedString *)accessoryViewAttributedString;
-(void)setMajorAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)majorAttributedString;
-(NSArray *)transitImages;
-(void)setTransitRoutingIncidentString:(NSAttributedString *)arg1 ;
-(void)setClusteredRouteOptionLabelItems:(NSArray *)arg1 ;
-(void)setTertiaryAttributedString:(NSAttributedString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


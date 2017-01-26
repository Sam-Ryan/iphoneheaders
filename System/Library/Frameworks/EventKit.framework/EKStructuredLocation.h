/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLLocation, NSData;

@interface EKStructuredLocation : EKObject <NSCopying>

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) CLLocation * geoLocation; 
@property (assign,nonatomic) double radius; 
@property (nonatomic,copy) NSString * addressBookEntityID; 
@property (nonatomic,copy) NSData * mapKitHandle; 
@property (nonatomic,readonly) BOOL isStructured; 
@property (nonatomic,readonly) BOOL hasKnownSpatialData; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,retain) NSString * routing; 
+(id)_stringByStrippingCongtrolCharactersFromString:(id)arg1 ;
+(id)locationWithMapItem:(id)arg1 ;
+(id)locationWithTitle:(id)arg1 ;
-(id)humanReadableContactString;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cacheKey;
-(void)setAddress:(NSString *)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)updatePersistentObject;
-(NSString *)routing;
-(BOOL)hasKnownSpatialData;
-(id)_persistentLocation;
-(id)geoURLString;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(CLLocation *)geoLocation;
-(BOOL)isStructured;
-(NSString *)addressBookEntityID;
-(void)setRouting:(NSString *)arg1 ;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(void)setAddressBookEntityID:(NSString *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(id)_asCalLocation;
-(NSData *)mapKitHandle;
-(void)updateFromMapItem:(id)arg1 ;
-(NSString *)address;
@end


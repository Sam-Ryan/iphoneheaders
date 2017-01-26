/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString, NSSet, NSNumber;

@interface PLRevGeoPlaceInfo : NSObject {

	NSMutableSet* _geoPlaceInfos;
	NSString* _placeName;

}

@property (nonatomic,copy,readonly) NSString * placeName;                  //@synthesize placeName=_placeName - In the implementation block
@property (nonatomic,retain,readonly) NSSet * geoPlaceInfos;               //@synthesize geoPlaceInfos=_geoPlaceInfos - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minimumArea; 
-(void)dealloc;
-(NSString *)placeName;
-(NSNumber *)minimumArea;
-(NSSet *)geoPlaceInfos;
-(id)initWithPlaceName:(id)arg1 ;
-(void)addPlaceInfo:(id)arg1 ;
@end


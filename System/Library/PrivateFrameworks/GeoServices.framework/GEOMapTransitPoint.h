/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOMapTransitPoint <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE56 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE16* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@required
-(SCD_Struct_GE56)boundingRect;
-(unsigned long long)transitID;
-(long long)polygonPointsCount;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE16*)polygonPoints;
-(double)distanceInMetersFrom:(SCD_Struct_GE16)arg1;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(SCD_Struct_GE16)coordinate;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CLPrefetchFloorRequest : NSObject <NSSecureCoding> {

	NSString* _floorUuid;
	NSString* _venueUuid;
	NSDate* _relevancy;

}

@property (nonatomic,retain) NSString * floorUuid;              //@synthesize floorUuid=_floorUuid - In the implementation block
@property (nonatomic,retain) NSString * venueUuid;              //@synthesize venueUuid=_venueUuid - In the implementation block
@property (nonatomic,retain) NSDate * relevancy;                //@synthesize relevancy=_relevancy - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)prefetchRequestForFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(NSString *)floorUuid;
-(id)initWithFloor:(id)arg1 lastRelevant:(id)arg2 ;
-(id)floorUid;
-(void)setFloorUid:(id)arg1 ;
-(void)setFloorUuid:(NSString *)arg1 ;
-(NSString *)venueUuid;
-(void)setVenueUuid:(NSString *)arg1 ;
-(NSDate *)relevancy;
-(void)setRelevancy:(NSDate *)arg1 ;
@end


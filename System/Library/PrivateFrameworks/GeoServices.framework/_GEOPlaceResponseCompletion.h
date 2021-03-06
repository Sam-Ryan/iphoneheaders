/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCompletion.h>

@class NSArray, GEOPlaceSearchResponse, NSString;

@interface _GEOPlaceResponseCompletion : NSObject <GEOCompletion> {

	GEOPlaceSearchResponse* _response;
	NSArray* _groups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groups; 
-(void)dealloc;
-(NSString *)description;
-(id)response;
-(id)metadata;
-(NSArray *)groups;
-(id)initWithPlaceSearchResponse:(id)arg1 query:(id)arg2 traits:(id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceSearchFieldPlaceholderTicket.h>

@class GEOMapServiceTraits, NSDictionary, GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

@interface _GEOPlaceSearchPlaceholderTicket : NSObject <GEOMapServiceSearchFieldPlaceholderTicket> {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	NSDictionary* _userInfo;
	GEOMapServiceTraits* _traits;
	BOOL _canceled;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(void)cancel;
-(void)dealloc;
-(GEOMapServiceTraits *)traits;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(BOOL)isCanceled;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
@end


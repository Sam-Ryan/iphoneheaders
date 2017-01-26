/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
@property (readonly) NSArray * regions; 
@property (retain) FTMessageDelivery * _delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * _regions;                         //@synthesize regions=_regions - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isLoading;
-(BOOL)isLoaded;
-(NSArray *)regions;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(NSArray *)_regions;
-(void)set_regions:(NSArray *)arg1 ;
-(FTMessageDelivery *)_delivery;
-(void)set_delivery:(FTMessageDelivery *)arg1 ;
-(void)startLoading;
-(id)regionForID:(id)arg1 ;
@end


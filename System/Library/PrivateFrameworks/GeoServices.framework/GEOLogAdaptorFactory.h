/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOLogAdaptorFactory : NSObject {

	NSMutableDictionary* _logAdaptors;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)logAdaptorWithOptions:(id)arg1 ;
-(id)_createLogAdaptorWithOptions:(id)arg1 ;
@end


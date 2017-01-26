/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSDictionary, NSDate, NSURLSession, NSObject;

@interface CPLConfiguration : NSObject {

	NSURL* _configurationFileURL;
	NSDictionary* _configuration;
	NSDate* _lastUpdate;
	double _updateInterval;
	NSURLSession* _currentSession;
	NSObject*<OS_dispatch_queue> _lock;

}
+(void)disableConfigurationFetching;
-(id)valueForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)_save;
-(void)_load;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(void)refetchFromDisk;
-(void)_setContents:(id)arg1 ;
-(double)_updateInterval;
-(void)check;
@end


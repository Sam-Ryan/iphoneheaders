/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMIPConfig : NSObject

@property (nonatomic,readonly) BOOL isFMIPLocationServicesEnabled; 
@property (nonatomic,readonly) BOOL isLocationServicesEnabledForShareMyLocation; 
+(id)sharedInstance;
-(BOOL)isLocationServicesEnabledForShareMyLocation;
-(BOOL)isFMIPLocationServicesEnabled;
-(void)enableFMIPLocationServices;
-(void)dealloc;
-(id)initSingleton;
@end

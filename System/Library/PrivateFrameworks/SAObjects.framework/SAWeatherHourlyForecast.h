/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAWeatherForecast.h>

@class NSNumber;

@interface SAWeatherHourlyForecast : SAWeatherForecast

@property (nonatomic,copy) NSNumber * temperature; 
+(id)hourlyForecast;
+(id)hourlyForecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)compressedDescription;
-(id)groupIdentifier;
-(NSNumber *)temperature;
-(void)setTemperature:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end


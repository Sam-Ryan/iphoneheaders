/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKTrafficSupport : NSObject
+(id)sharedTrafficSupport;
-(id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2 ;
-(id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3 ;
-(CGImageRef)imageForIncidentType:(long long)arg1 contentScale:(double)arg2 ;
-(void)setupTrafficIncidents;
-(id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3 ;
-(long long)_convertType:(int)arg1 ;
-(CGImageRef)imageForGEOIncidentType:(int)arg1 contentScale:(double)arg2 ;
@end


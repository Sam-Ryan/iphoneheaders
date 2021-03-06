/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MKMapViewSuspendedEffectsToken.h>

@protocol _MKMapViewSuspendedEffectsToken <NSObject>
@required
-(void)invalidate;

@end


@class MKMapView, NSString;

@interface _MKMapViewSuspendedEffectsToken : NSObject <_MKMapViewSuspendedEffectsToken> {

	BOOL _invalidated;
	MKMapView* _owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithOwner:(id)arg1 ;
@end


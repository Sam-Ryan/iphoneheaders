/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <VectorKit/VKAnchorWrapper.h>

@class MKAnnotationView;

@interface _MKAnnotationViewAnchor : VKAnchorWrapper {

	MKAnnotationView* _annotationView;

}

@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
-(MKAnnotationView *)annotationView;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(SCD_Struct_MK7)coordinate;
@end


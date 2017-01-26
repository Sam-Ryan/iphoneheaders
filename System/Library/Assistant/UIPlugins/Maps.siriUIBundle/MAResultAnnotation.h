/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, SALocalSearchMapItem;

@interface MAResultAnnotation : NSObject <MKAnnotation> {

	SCD_Struct_MA1 _coordinate;
	SALocalSearchMapItem* _mapItem;

}

@property (nonatomic,readonly) SCD_Struct_MA1 coordinate;                 //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) SALocalSearchMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)_abbreviatedAddress;
-(NSString *)title;
-(NSString *)subtitle;
-(id)initWithMapItem:(id)arg1 ;
-(SALocalSearchMapItem *)mapItem;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(SCD_Struct_MA1)coordinate;
@end


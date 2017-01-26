/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	NSArray* _metadataIdentifiers;
	CGRect _metadataRectOfInterest;

}

@property (nonatomic,copy) NSArray * metadataIdentifiers;                //@synthesize metadataIdentifiers=_metadataIdentifiers - In the implementation block
@property (assign,nonatomic) CGRect metadataRectOfInterest;              //@synthesize metadataRectOfInterest=_metadataRectOfInterest - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)metadataIdentifiers;
-(CGRect)metadataRectOfInterest;
-(void)setMetadataIdentifiers:(NSArray *)arg1 ;
-(void)setMetadataRectOfInterest:(CGRect)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end


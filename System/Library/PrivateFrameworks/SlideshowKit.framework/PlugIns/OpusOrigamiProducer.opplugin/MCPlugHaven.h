/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCPlug.h>

@class NSString, MCContainerNavigator, MCAction;

@interface MCPlugHaven : MCPlug {

	NSString* mIDInSupercontainer;
	MCContainerNavigator* mSupercontainer;

}

@property (getter=idInSupercontainer,copy) NSString * idInSupercontainer; 
@property (nonatomic,retain) MCAction * actionOnCompletion; 
@property (assign) MCContainerNavigator * supercontainer; 
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setIDInSupercontainer:(id)arg1 ;
-(void)setActionOnCompletion:(MCAction *)arg1 ;
-(MCContainerNavigator *)supercontainer;
-(MCAction *)actionOnCompletion;
-(void)setSupercontainer:(MCContainerNavigator *)arg1 ;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(NSString *)idInSupercontainer;
-(id)imprint;
@end


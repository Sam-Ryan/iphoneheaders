/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CIBurstClusterDivider : NSObject {

	float dividerScore;
	int trueLocalMaximum;
	int leftImage;
	float actionAmount;
	float noiseThreshold;
	float highNoiseThreshold;

}

@property (assign) float dividerScore; 
@property (assign) int trueLocalMaximum; 
@property (assign) int leftImage; 
@property (assign) float actionAmount; 
@property (assign) float noiseThreshold; 
@property (assign) float highNoiseThreshold; 
-(void)setDividerScore:(float)arg1 ;
-(void)setLeftImage:(int)arg1 ;
-(void)setActionAmount:(float)arg1 ;
-(float)dividerScore;
-(void)setNoiseThreshold:(float)arg1 ;
-(void)setHighNoiseThreshold:(float)arg1 ;
-(int)leftImage;
-(float)noiseThreshold;
-(float)highNoiseThreshold;
-(void)setTrueLocalMaximum:(int)arg1 ;
-(long long)compareDividers:(id)arg1 ;
-(long long)compareIndices:(id)arg1 ;
-(float)actionAmount;
-(long long)compareActionAmounts:(id)arg1 ;
-(int)trueLocalMaximum;
@end


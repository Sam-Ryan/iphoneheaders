/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetExpertCenter/Experts/DeeplinkPrediction.bundle/DeeplinkPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeeplinkPrediction/DeeplinkPrediction-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DPESpotlightHistoryModel : NSObject <NSSecureCoding> {

	/*function pointer*/void** _histograms[10];
	int _histogramLengths[10];
	NSArray* _deepLinkInfo;

}
+(void)retrainSharedInstance;
+(id)_defaultPath;
+(void)_loadSharedInstanceIfOnDisk;
+(void)_saveSharedInstance;
+(void)trainWithCompletion:(/*^block*/id)arg1 ;
+(id)sharedInstance;
+(BOOL)supportsSecureCoding;
+(id)assetDictionary;
-(void)enumerateBestDeepLinksAtDate:(id)arg1 timeZone:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_buildHistogramFromDeeplinks:(id)arg1 ;
-(void)_setHistogram:(SCD_Struct_DP0*)arg1 ofLength:(int)arg2 atIndex:(int)arg3 ;
-(double)_scoreForDeepLink:(unsigned short)arg1 atTime:(unsigned short)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end


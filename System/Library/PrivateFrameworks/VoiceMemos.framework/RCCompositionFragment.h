/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/RCDictionaryPListRepresentationCoding.h>

@class NSURL, NSString;

@interface RCCompositionFragment : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding> {

	SCD_Struct_RC4 _timeRangeInContentToUse;
	NSURL* _AVOutputURL;
	double _contentDuration;
	SCD_Struct_RC4 _timeRangeInComposition;

}

@property (nonatomic,retain) NSURL * AVOutputURL;                                 //@synthesize AVOutputURL=_AVOutputURL - In the implementation block
@property (nonatomic,readonly) NSURL * waveformURL; 
@property (assign,nonatomic) double contentDuration;                              //@synthesize contentDuration=_contentDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 timeRangeInContentToUse;              //@synthesize timeRangeInContentToUse=_timeRangeInContentToUse - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 timeRangeInComposition;               //@synthesize timeRangeInComposition=_timeRangeInComposition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_RC4)timeRangeInComposition;
-(NSURL *)AVOutputURL;
-(NSURL *)waveformURL;
-(SCD_Struct_RC4)timeRangeInContentToUse;
-(void)setTimeRangeInComposition:(SCD_Struct_RC4)arg1 ;
-(void)setTimeRangeInContentToUse:(SCD_Struct_RC4)arg1 ;
-(double)contentDuration;
-(id)initWithAVOutputURL:(id)arg1 contentDuration:(double)arg2 timeRangeInContentToUse:(SCD_Struct_RC4)arg3 timeRangeInComposition:(SCD_Struct_RC4)arg4 ;
-(id)initWithDictionaryPListRepresentation:(id)arg1 ;
-(id)dictionaryPListRepresentation;
-(void)deleteFromFilesystem;
-(void)moveAssetsToFragment:(id)arg1 ;
-(unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(BOOL)arg1 ;
-(id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)setAVOutputURL:(NSURL *)arg1 ;
-(void)setContentDuration:(double)arg1 ;
@end


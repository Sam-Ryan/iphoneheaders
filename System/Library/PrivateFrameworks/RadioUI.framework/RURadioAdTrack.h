/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <libobjc.A.dylib/RURadioItemIdentifier.h>
#import <libobjc.A.dylib/ADBannerViewDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ADBannerView, NSDictionary, NSURL, NSString;

@interface RURadioAdTrack : NSObject <RURadioItemIdentifier, ADBannerViewDelegate, NSCopying> {

	long long _adType;
	ADBannerView* _adView;
	NSDictionary* _loudnessInfo;
	NSURL* _URL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) long long adType;                              //@synthesize adType=_adType - In the implementation block
@property (nonatomic,readonly) ADBannerView * adView;                         //@synthesize adView=_adView - In the implementation block
@property (nonatomic,readonly) NSURL * artworkURL; 
@property (nonatomic,readonly) BOOL hasAction; 
@property (nonatomic,copy,readonly) NSDictionary * loudnessInfo;              //@synthesize loudnessInfo=_loudnessInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
-(id)artworkCatalog;
-(id)radioIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)uniqueIdentifier;
-(BOOL)hasAction;
-(NSDictionary *)loudnessInfo;
-(NSURL *)artworkURL;
-(long long)actionType;
-(long long)adType;
-(id)_loudnessInfoForVideoAssetDictionary:(id)arg1 ;
-(id)initWithAdView:(id)arg1 ;
-(ADBannerView *)adView;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
-(void)triggerAdAction;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pkd/PKPlugInCore.h>

@class NSString, NSNumber, LSPlugInKitProxy;

@interface PKDPlugIn : PKPlugInCore {

	NSString* _localizedName;
	NSString* _localizedShortName;
	NSString* _localizedContainingName;
	NSNumber* _containerAgeRestriction;
	LSPlugInKitProxy* _lsproxy;

}

@property (readonly) NSString * annotationKey; 
@property (nonatomic,retain) LSPlugInKitProxy * lsproxy;              //@synthesize lsproxy=_lsproxy - In the implementation block
@property (retain) NSString * originalIdentifier; 
@property (readonly) BOOL ageRestricted; 
@property (readonly) NSNumber * containerAgeRestriction;              //@synthesize containerAgeRestriction=_containerAgeRestriction - In the implementation block
-(id)prunedInfoDictionaryFor:(id)arg1 ;
-(void)setLsproxy:(LSPlugInKitProxy *)arg1 ;
-(LSPlugInKitProxy *)lsproxy;
-(id)issueResourceExtensions:(id)arg1 ;
-(BOOL)matchKey:(id)arg1 pattern:(id)arg2 ;
-(BOOL)matchDictionary:(id)arg1 pattern:(id)arg2 ;
-(BOOL)matchValue:(id)arg1 patterns:(id)arg2 ;
-(BOOL)matchValue:(id)arg1 pattern:(id)arg2 ;
-(BOOL)ageRestricted;
-(id)allowedTCCServices;
-(NSNumber *)containerAgeRestriction;
-(id)initWithLSData:(id)arg1 ;
-(void)augmentForm:(id)arg1 ;
-(NSString *)annotationKey;
-(id)allowForClient:(id)arg1 ;
-(id)enableForPid:(int)arg1 ;
-(id)checkBusy;
-(void)setLocalizedShortName:(id)arg1 ;
-(id)localizedName;
-(id)localizedShortName;
-(id)localizedContainingName;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)diagnose;
-(void)setLocalizedContainingName:(id)arg1 ;
-(void)setLocalizedName:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)match:(id)arg1 ;
-(id)entitlements;
@end


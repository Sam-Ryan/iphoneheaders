/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSRestrictions.h>
@class NSString;


@protocol IKJSRestrictions <JSExport>
@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsErotica; 
@property (nonatomic,readonly) long long maxAppRank; 
@property (nonatomic,readonly) BOOL allowArtistActivity; 
@property (nonatomic,readonly) NSString * maxAppRating; 
@property (nonatomic,readonly) BOOL appInstallationAllowed; 
@property (nonatomic,readonly) BOOL appAnalyticsAllowed; 
@required
-(id)maxMovieRatingForCountry:(id)arg1;
-(id)maxTVShowRatingForCountry:(id)arg1;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;
-(BOOL)allowsExplicit;
-(BOOL)allowsErotica;
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(NSString *)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)appAnalyticsAllowed;

@end

#import <libobjc.A.dylib/JSExport.h>

@class NSString;

@interface IKJSRestrictions : IKJSObject <IKJSRestrictions, JSExport>

@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsErotica; 
@property (nonatomic,readonly) long long maxAppRank; 
@property (nonatomic,readonly) BOOL allowArtistActivity; 
@property (nonatomic,readonly) NSString * maxAppRating; 
@property (nonatomic,readonly) BOOL appInstallationAllowed; 
@property (nonatomic,readonly) BOOL appAnalyticsAllowed; 
+(id)restrictionsDidChangeNotificationName;
-(id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3 ;
-(id)_contentRestrictionsCountryCode;
-(id)maxMovieRatingForCountry:(id)arg1 ;
-(id)maxTVShowRatingForCountry:(id)arg1 ;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;
-(BOOL)allowsExplicit;
-(BOOL)allowsErotica;
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(NSString *)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)appAnalyticsAllowed;
@end


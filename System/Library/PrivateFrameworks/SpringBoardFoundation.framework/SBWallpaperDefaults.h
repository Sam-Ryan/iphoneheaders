/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString, NSDictionary, NSDate;

@interface SBWallpaperDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSString * homeScreenWallpaperIdentifier; 
@property (nonatomic,retain) NSDictionary * homeScreenWallpaperOptions; 
@property (assign,nonatomic) BOOL homeScreenWallpaperWasUserSet; 
@property (nonatomic,retain) NSString * lockScreenWallpaperIdentifier; 
@property (nonatomic,retain) NSDictionary * lockScreenWallpaperOptions; 
@property (assign,nonatomic) BOOL lockScreenWallpaperWasUserSet; 
@property (assign,nonatomic) double homeScreenParallaxFactor; 
@property (assign,nonatomic) double homeScreenZoomScale; 
@property (nonatomic,retain) NSString * homeScreenCropRectString; 
@property (assign,nonatomic) BOOL homeScreenSupportsCropping; 
@property (assign,nonatomic) BOOL homeScreenMagnifyEnabled; 
@property (assign,nonatomic) BOOL homeScreenPortrait; 
@property (nonatomic,retain) NSString * homeScreenWallpaperName; 
@property (assign,nonatomic) double lockScreenParallaxFactor; 
@property (assign,nonatomic) double lockScreenZoomScale; 
@property (nonatomic,retain) NSString * lockScreenCropRectString; 
@property (assign,nonatomic) BOOL lockScreenSupportsCropping; 
@property (assign,nonatomic) BOOL lockScreenMagnifyEnabled; 
@property (assign,nonatomic) BOOL lockScreenPortrait; 
@property (assign,nonatomic) BOOL lockScreenHasVideo; 
@property (assign,nonatomic) double lockScreenStillTimeInVideo; 
@property (nonatomic,retain) NSString * lockScreenWallpaperName; 
@property (nonatomic,retain) NSDate * dateIrisWallpaperLastPlayed; 
@property (assign,nonatomic) unsigned long long irisWallpaperPlayCount; 
@property (nonatomic,readonly) BOOL legacyUsesUniqueHomeScreenWallpaper; 
-(void)setLockScreenWallpaperIdentifier:(NSString *)arg1 ;
-(NSString *)lockScreenWallpaperIdentifier;
-(void)setLegacyUsesUniqueHomeScreenWallpaper:(BOOL)arg1 ;
-(BOOL)legacyUsesUniqueHomeScreenWallpaper;
-(void)setLockScreenCropRectString:(NSString *)arg1 ;
-(NSString *)lockScreenCropRectString;
-(void)setHomeScreenSupportsCropping:(BOOL)arg1 ;
-(BOOL)homeScreenSupportsCropping;
-(void)setLockScreenWallpaperName:(NSString *)arg1 ;
-(NSString *)lockScreenWallpaperName;
-(void)setLockScreenHasVideo:(BOOL)arg1 ;
-(BOOL)lockScreenHasVideo;
-(void)setHomeScreenWallpaperIdentifier:(NSString *)arg1 ;
-(NSString *)homeScreenWallpaperIdentifier;
-(void)setHomeScreenCropRectString:(NSString *)arg1 ;
-(NSString *)homeScreenCropRectString;
-(void)setHomeScreenWallpaperName:(NSString *)arg1 ;
-(NSString *)homeScreenWallpaperName;
-(void)setLockScreenPortrait:(BOOL)arg1 ;
-(BOOL)lockScreenPortrait;
-(void)setLockScreenWallpaperWasUserSet:(BOOL)arg1 ;
-(BOOL)lockScreenWallpaperWasUserSet;
-(void)setLockScreenWallpaperOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)lockScreenWallpaperOptions;
-(void)setLockScreenParallaxFactor:(double)arg1 ;
-(double)lockScreenParallaxFactor;
-(void)setLockScreenZoomScale:(double)arg1 ;
-(double)lockScreenZoomScale;
-(void)setLockScreenSupportsCropping:(BOOL)arg1 ;
-(BOOL)lockScreenSupportsCropping;
-(void)setDateIrisWallpaperLastPlayed:(NSDate *)arg1 ;
-(NSDate *)dateIrisWallpaperLastPlayed;
-(void)setLockScreenMagnifyEnabled:(BOOL)arg1 ;
-(BOOL)lockScreenMagnifyEnabled;
-(void)setHomeScreenParallaxFactor:(double)arg1 ;
-(double)homeScreenParallaxFactor;
-(void)setHomeScreenWallpaperWasUserSet:(BOOL)arg1 ;
-(BOOL)homeScreenWallpaperWasUserSet;
-(void)setHomeScreenZoomScale:(double)arg1 ;
-(double)homeScreenZoomScale;
-(void)setLockScreenStillTimeInVideo:(double)arg1 ;
-(double)lockScreenStillTimeInVideo;
-(void)setHomeScreenPortrait:(BOOL)arg1 ;
-(BOOL)homeScreenPortrait;
-(void)setHomeScreenWallpaperOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)homeScreenWallpaperOptions;
-(void)setHomeScreenMagnifyEnabled:(BOOL)arg1 ;
-(BOOL)homeScreenMagnifyEnabled;
-(void)setIrisWallpaperPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)irisWallpaperPlayCount;
-(void)_bindAndRegisterDefaults;
-(void)clearLegacyDefaults;
@end


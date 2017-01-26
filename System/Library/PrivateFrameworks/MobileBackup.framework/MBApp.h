/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBApp : MBContainer

@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,retain) NSString * bundleDir; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * plugins; 
@property (nonatomic,readonly) NSArray * containers; 
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) BOOL isSystemApp; 
+(id)appWithPropertyList:(id)arg1 ;
+(id)appWithBundleID:(id)arg1 ;
+(id)safeHarborWithPath:(id)arg1 ;
-(id)domain;
-(NSString *)bundleVersion;
-(NSArray *)groups;
-(NSString *)bundleID;
-(NSString *)bundleDir;
-(id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)arg1 relativePath:(id)arg2 ;
-(id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1 ;
-(void)setBundleDir:(NSString *)arg1 ;
-(NSString *)entitlementsRelativePath;
-(BOOL)isSystemApp;
-(id)placeholderDomainWithCache:(id)arg1 ;
-(BOOL)isPlaceholder;
-(NSArray *)containers;
-(NSArray *)plugins;
-(NSDictionary *)entitlements;
@end

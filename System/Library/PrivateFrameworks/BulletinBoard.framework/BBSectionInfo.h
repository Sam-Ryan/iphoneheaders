/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BBSectionInfoSettings, BBSectionIcon, NSArray, NSData;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sectionID;
	NSString* _subsectionID;
	long long _sectionType;
	long long _sectionCategory;
	BBSectionInfoSettings* _sectionInfoSettings;
	BBSectionInfoSettings* _managedSectionInfoSettings;
	NSString* _pathToWeeAppPluginBundle;
	NSString* _displayName;
	BBSectionIcon* _icon;
	NSArray* _subsections;
	BBSectionInfo* _parentSection;
	NSString* _factorySectionID;
	NSArray* _dataProviderIDs;
	NSArray* _filters;
	BOOL _suppressFromSettings;
	BOOL _displaysCriticalBulletins;
	BOOL _hideWeeApp;
	long long _subsectionPriority;
	unsigned long long _suppressedSettings;
	unsigned long long _version;

}

@property (assign,nonatomic) BOOL allowsNotifications; 
@property (assign,nonatomic) BOOL showsInNotificationCenter; 
@property (assign,nonatomic) BOOL showsInLockScreen; 
@property (assign,nonatomic) BOOL showsOnExternalDevices; 
@property (assign,nonatomic) BOOL showsMessagePreview; 
@property (assign,nonatomic) unsigned long long alertType; 
@property (assign,nonatomic) unsigned long long pushSettings; 
@property (nonatomic,copy) BBSectionInfoSettings * managedSectionInfoSettings; 
@property (nonatomic,readonly) BOOL usesManagedSettings; 
@property (nonatomic,readonly) BBSectionInfoSettings * readableSettings; 
@property (nonatomic,readonly) BBSectionInfoSettings * writableSettings; 
@property (nonatomic,copy) NSString * sectionID;                                            //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy) NSString * subsectionID;                                         //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) long long sectionType;                                         //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) long long sectionCategory;                                     //@synthesize sectionCategory=_sectionCategory - In the implementation block
@property (assign,nonatomic) BOOL suppressFromSettings;                                     //@synthesize suppressFromSettings=_suppressFromSettings - In the implementation block
@property (nonatomic,copy) BBSectionInfoSettings * sectionInfoSettings;                     //@synthesize sectionInfoSettings=_sectionInfoSettings - In the implementation block
@property (assign,nonatomic) unsigned long long suppressedSettings;                         //@synthesize suppressedSettings=_suppressedSettings - In the implementation block
@property (assign,nonatomic) BOOL hideWeeApp;                                               //@synthesize hideWeeApp=_hideWeeApp - In the implementation block
@property (nonatomic,copy) NSString * pathToWeeAppPluginBundle;                             //@synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) BBSectionIcon * icon;                                            //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL displaysCriticalBulletins;                                //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (nonatomic,copy) NSArray * subsections;                                           //@synthesize subsections=_subsections - In the implementation block
@property (assign,nonatomic) BBSectionInfo * parentSection;                                 //@synthesize parentSection=_parentSection - In the implementation block
@property (assign,nonatomic) long long subsectionPriority;                                  //@synthesize subsectionPriority=_subsectionPriority - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                               //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy,readonly) NSData * iconData; 
@property (assign,nonatomic) unsigned long long bulletinCount; 
@property (assign,nonatomic) unsigned long long notificationCenterLimit; 
@property (nonatomic,copy) NSString * factorySectionID;                                     //@synthesize factorySectionID=_factorySectionID - In the implementation block
@property (nonatomic,copy) NSArray * dataProviderIDs;                                       //@synthesize dataProviderIDs=_dataProviderIDs - In the implementation block
+(id)defaultSectionInfoForSection:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)defaultSectionInfoForType:(long long)arg1 ;
-(BOOL)isEqualToSection:(id)arg1 ;
-(void)setAlertType:(unsigned long long)arg1 ;
-(unsigned long long)alertType;
-(BOOL)showsInNotificationCenter;
-(void)setAllowsNotifications:(BOOL)arg1 ;
-(void)setShowsInNotificationCenter:(BOOL)arg1 ;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(BOOL)showsInLockScreen;
-(unsigned long long)pushSettings;
-(BOOL)allowsNotifications;
-(void)setShowsOnExternalDevices:(BOOL)arg1 ;
-(BOOL)showsOnExternalDevices;
-(BOOL)showsMessagePreview;
-(void)setPushSettings:(unsigned long long)arg1 ;
-(BOOL)queryAndUseManagedSettings;
-(BOOL)queryAndUseManagedSettingsForSectionID:(id)arg1 ;
-(BBSectionInfoSettings *)managedSectionInfoSettings;
-(void)setManagedSectionInfoSettings:(BBSectionInfoSettings *)arg1 ;
-(BOOL)usesManagedSettings;
-(BBSectionInfoSettings *)readableSettings;
-(BBSectionInfoSettings *)writableSettings;
-(void)updateWithDefaultFilters:(id)arg1 ;
-(void)updateWithDefaultSectionInfo:(id)arg1 ;
-(id)effectiveSectionInfoWithFactoryInfo:(id)arg1 ;
-(id)effectiveSectionInfo;
-(NSData *)iconData;
-(BOOL)enabled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(BBSectionIcon *)icon;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)pathToWeeAppPluginBundle;
-(unsigned long long)suppressedSettings;
-(NSString *)subsectionID;
-(NSArray *)subsections;
-(NSArray *)dataProviderIDs;
-(NSString *)factorySectionID;
-(id)_subsectionForID:(id)arg1 ;
-(void)_replaceSubsection:(id)arg1 ;
-(BOOL)hideWeeApp;
-(void)setHideWeeApp:(BOOL)arg1 ;
-(void)setFactorySectionID:(NSString *)arg1 ;
-(long long)sectionCategory;
-(id)initWithDefaultsForSectionType:(long long)arg1 ;
-(void)_configureWithDefaultsForSectionType:(long long)arg1 ;
-(void)setBulletinCount:(unsigned long long)arg1 ;
-(void)setSubsections:(NSArray *)arg1 ;
-(void)setDataProviderIDs:(NSArray *)arg1 ;
-(void)setNotificationCenterLimit:(unsigned long long)arg1 ;
-(void)setSectionCategory:(long long)arg1 ;
-(BOOL)suppressFromSettings;
-(void)setSectionInfoSettings:(BBSectionInfoSettings *)arg1 ;
-(void)setPathToWeeAppPluginBundle:(NSString *)arg1 ;
-(BOOL)displaysCriticalBulletins;
-(void)setDisplaysCriticalBulletins:(BOOL)arg1 ;
-(void)_addSubsection:(id)arg1 ;
-(long long)subsectionPriority;
-(void)setSubsectionPriority:(long long)arg1 ;
-(void)_associateDataProviderSectionInfo:(id)arg1 ;
-(void)_dissociateDataProviderSectionInfo:(id)arg1 ;
-(unsigned long long)bulletinCount;
-(unsigned long long)notificationCenterLimit;
-(BBSectionInfoSettings *)sectionInfoSettings;
-(long long)sectionType;
-(void)setSectionType:(long long)arg1 ;
-(NSString *)sectionID;
-(void)setParentSection:(BBSectionInfo *)arg1 ;
-(BBSectionInfo *)parentSection;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setSubsectionID:(NSString *)arg1 ;
-(void)setSuppressedSettings:(unsigned long long)arg1 ;
-(void)setSuppressFromSettings:(BOOL)arg1 ;
@end


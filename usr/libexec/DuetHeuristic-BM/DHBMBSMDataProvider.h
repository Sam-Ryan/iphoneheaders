/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:07 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/DuetHeuristic-BM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetHeuristic-BM/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, BBDataProviderProxy, NSBundle, NSUserDefaults, NSString;

@interface DHBMBSMDataProvider : NSObject <BBRemoteDataProvider> {

	NSObject*<OS_dispatch_queue> _firstUseQueue;
	BBDataProviderProxy* _proxy;
	NSBundle* _bundle;
	NSUserDefaults* _defaults;
	NSString* _lastPublisherBulletinID;
	int _bsmToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)autoDisabledNotification;
-(void)requestBulletin;
-(void)withdrawBulletin;
-(void)displayFirstUseNotification;
-(id)init;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(void)setDataProviderProxy:(id)arg1 ;
@end


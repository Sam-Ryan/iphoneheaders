/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:05:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UsageBundles/ContactsUsage.bundle/ContactsUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@class NSArray, NSString;

@interface ContactsUsage : NSObject <PSStorageReporting> {

	NSArray* _cachedBundleApps;
	unsigned long long _totalSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)populateUsageBundleApps;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
@end


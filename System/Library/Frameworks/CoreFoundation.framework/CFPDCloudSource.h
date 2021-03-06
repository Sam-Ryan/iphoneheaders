/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDContainerSource.h>

@class SYDRemotePreferencesSource;

@interface CFPDCloudSource : CFPDContainerSource {

	SYDRemotePreferencesSource* cloudSource;
	CFStringRef _configurationPath;

}
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 storeName:(id)arg3 configurationPath:(CFStringRef)arg4 containerPath:(CFStringRef)arg5 shmemIndex:(short)arg6 ;
-(CFStringRef)debugDump;
-(void)_writeToDisk:(BOOL)arg1 ;
-(id)copyPropertyListWithoutDrainingPendingChanges;
-(CFStringRef)cloudConfigurationPath;
-(id)copyPropertyList;
-(int)validateMessage:(id)arg1 withNewKey:(CFStringRef)arg2 newValue:(void*)arg3 currentPlistData:(id)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(void)enqueueNewKey:(CFStringRef)arg1 value:(void*)arg2 size:(unsigned long long)arg3 ;
-(id)copyConfigurationFromPath:(CFStringRef)arg1 ;
-(void)synchronizeWithCloud:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)registerForChangeNotifications;
@end


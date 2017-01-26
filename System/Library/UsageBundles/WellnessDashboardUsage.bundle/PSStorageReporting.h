/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:06:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UsageBundles/WellnessDashboardUsage.bundle/WellnessDashboardUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSStorageReporting <NSObject>
@optional
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1;
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2;
-(float)sizeForCategory:(id)arg1;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2;

@required
-(id)usageBundleApps;
-(BOOL)allowDeletionForCategory:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/UpdateMigratorOperation.h>

@class NSArray, NSDictionary;

@interface UpdateMigratorPromotionOperation : UpdateMigratorOperation {

	NSArray* _bundleIDs;
	NSDictionary* _options;

}
-(id)initWithBundleIdentifiers:(id)arg1 options:(id)arg2 ;
-(void)performMigration;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:42 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSDictionary;

@interface SoftwareLibraryUpdateOperation : ISOperation {

	NSString* _bundleID;
	NSDictionary* _changeset;

}

@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSDictionary * changeset; 
-(NSDictionary *)changeset;
-(id)initWithBundleIdentifier:(id)arg1 changeset:(id)arg2 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)run;
@end


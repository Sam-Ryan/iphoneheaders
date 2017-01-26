/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SPSpotlightManager : NSObject {

	NSString* _displayID;

}
+(id)sharedManager;
-(id)init;
-(void)_processIdentifiers:(id)arg1 forApplication:(id)arg2 andCategory:(id)arg3 ;
-(void)appModifiedRecordIDs:(id)arg1 forCategory:(id)arg2 ;
-(void)application:(id)arg1 modifiedRecordIDs:(id)arg2 forCategory:(id)arg3 ;
-(void)eraseIndexForApplication:(id)arg1 category:(id)arg2 ;
@end


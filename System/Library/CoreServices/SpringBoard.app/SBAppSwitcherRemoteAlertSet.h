/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableSet;

@interface SBAppSwitcherRemoteAlertSet : NSObject <NSCopying> {

	NSMutableArray* _alerts;
	NSMutableSet* _placeholderIdentifiers;

}
-(BOOL)containsAlert:(id)arg1 ;
-(id)alertForDisplayItem:(id)arg1 ;
-(id)placeholderDisplayItems;
-(id)alertAtIndex:(unsigned long long)arg1 ;
-(id)placeholderBundleIdentifiers;
-(void)addPlaceholderForIdentifier:(id)arg1 ;
-(void)removePlaceholderForIdentifier:(id)arg1 ;
-(id)alertForBundleIdentifier:(id)arg1 ;
-(id)serviceBundleIdentifiers;
-(id)initWithAlertSet:(id)arg1 zone:(NSZone*)arg2 ;
-(void)addRemoteAlert:(id)arg1 ;
-(void)removeRemoteAlert:(id)arg1 ;
-(unsigned long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayItems;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateProvider.h>

@protocol SBStarkSessionConfiguring;
@class NSDateFormatter, NSString;

@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider {

	id<SBStarkSessionConfiguring> _sessionConfiguration;
	char _oldAggregatorTimeCString[64];
	char _timeCString[64];
	NSDateFormatter* _timeFormatter;
	BOOL _showOptimalCellData;
	BOOL _showTapToRadar;
	BOOL _disableBattery;
	NSString* _inCallDetail;

}
+(BOOL)_itemIsIgnored:(int)arg1 ;
-(void)_resetTimeItemFormatter;
-(BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const SCD_Struct_SB45*)arg3 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB45*)arg1 ;
-(BOOL)_shouldPostForUpdatesToNonItemData:(const SCD_Struct_SB45*)arg1 ;
-(void)_callDurationChanged;
-(BOOL)_shouldShowRadarItem;
-(void)dealloc;
-(id)doubleHeightStatusStringForStyle:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)_timeFormatter;
@end


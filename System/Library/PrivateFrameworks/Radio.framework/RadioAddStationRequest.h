/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioSyncRequest.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface RadioAddStationRequest : RadioSyncRequest {

	NSDictionary* _matchDictionary;
	long long _persistentID;
	NSMutableDictionary* _stationDictionary;
	NSString* _stationHashForSkipHistoryCopying;

}
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRadioTrackDictionary:(id)arg1 useArtist:(BOOL)arg2 ;
-(void)startWithAddStationCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(id)matchDictionary;
-(id)initWithStationDictionary:(id)arg1 ;
-(id)initWithQueryTerm:(id)arg1 queryID:(long long)arg2 ;
-(id)initWithLibraryTrackDictionary:(id)arg1 useArtist:(BOOL)arg2 ;
-(id)changeList;
@end


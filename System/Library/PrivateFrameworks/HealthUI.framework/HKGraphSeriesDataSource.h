/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKGraphSeriesDataSourceDelegate;
#import <HealthUI/HealthUI-Structs.h>
@class NSDate;

@interface HKGraphSeriesDataSource : NSObject {

	id<HKGraphSeriesDataSourceDelegate> _delegate;
	long long _minimumZoom;
	long long _maximumZoom;
	NSDate* _firstBlockStartDate;

}

@property (assign,nonatomic,__weak) id<HKGraphSeriesDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long minimumZoom;                                            //@synthesize minimumZoom=_minimumZoom - In the implementation block
@property (assign,nonatomic) long long maximumZoom;                                            //@synthesize maximumZoom=_maximumZoom - In the implementation block
@property (nonatomic,readonly) NSDate * firstBlockStartDate;                                   //@synthesize firstBlockStartDate=_firstBlockStartDate - In the implementation block
-(void)setDelegate:(id<HKGraphSeriesDataSourceDelegate>)arg1 ;
-(id)init;
-(id<HKGraphSeriesDataSourceDelegate>)delegate;
-(SCD_Struct_HK6)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK6)arg1 toPath:(SCD_Struct_HK6)arg2 ;
-(id)cachedBlockForPath:(SCD_Struct_HK6)arg1 ;
-(long long)minimumZoom;
-(long long)maximumZoom;
-(void)setMinimumZoom:(long long)arg1 ;
-(void)setMaximumZoom:(long long)arg1 ;
-(NSDate *)firstBlockStartDate;
@end


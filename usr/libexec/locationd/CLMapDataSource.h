/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLMapDataSourceBase.h>

@interface CLMapDataSource : CLMapDataSourceBase {

	int _travelDirectionBoth;
	int _travelDirectionPositive;
	int _travelDirectionNegative;
	int _travelDirectionInvalid;
	int _travelDirectionUnknown;

}

@property (nonatomic,readonly) int mapMatchingTileSetStyle; 
@property (nonatomic,readonly) long long mapMatchingZoomLevel; 
@property (nonatomic,readonly) int travelDirectionBoth;                     //@synthesize travelDirectionBoth=_travelDirectionBoth - In the implementation block
@property (nonatomic,readonly) int travelDirectionPositive;                 //@synthesize travelDirectionPositive=_travelDirectionPositive - In the implementation block
@property (nonatomic,readonly) int travelDirectionNegative;                 //@synthesize travelDirectionNegative=_travelDirectionNegative - In the implementation block
@property (nonatomic,readonly) int travelDirectionInvalid;                  //@synthesize travelDirectionInvalid=_travelDirectionInvalid - In the implementation block
@property (nonatomic,readonly) int travelDirectionUnknown;                  //@synthesize travelDirectionUnknown=_travelDirectionUnknown - In the implementation block
+(id)sharedDataSource;
-(id)initWithTileSetStyle:(int)arg1 zoomLevel:(long long)arg2 ;
-(id)multiPointFeaturesWithinDistance:(double)arg1 ofCoordinate:(SCD_Struct_CM9)arg2 withCourse:(double)arg3 status:(int*)arg4 ;
-(int)travelDirectionBoth;
-(int)travelDirectionPositive;
-(int)travelDirectionNegative;
-(int)travelDirectionInvalid;
-(int)travelDirectionUnknown;
-(void)dealloc;
-(int)mapMatchingTileSetStyle;
-(long long)mapMatchingZoomLevel;
@end


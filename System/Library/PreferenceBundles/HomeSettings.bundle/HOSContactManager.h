/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ABMonogrammer;

@interface HOSContactManager : NSObject {

	NSArray* _allPeople;
	ABMonogrammer* _monogrammer;
	double _monogramDiameter;

}

@property (nonatomic,retain) NSArray * allPeople;                      //@synthesize allPeople=_allPeople - In the implementation block
@property (nonatomic,retain) ABMonogrammer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
@property (assign,nonatomic) double monogramDiameter;                  //@synthesize monogramDiameter=_monogramDiameter - In the implementation block
+(id)sharedManager;
-(void)setAllPeople:(NSArray *)arg1 ;
-(id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2 ;
-(ABMonogrammer *)monogrammer;
-(NSArray *)allPeople;
-(double)monogramDiameter;
-(void)setMonogramDiameter:(double)arg1 ;
-(void)setMonogrammer:(ABMonogrammer *)arg1 ;
@end


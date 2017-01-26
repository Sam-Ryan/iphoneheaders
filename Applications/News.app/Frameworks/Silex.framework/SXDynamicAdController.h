/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSArray, SXLayoutBlueprint, SXContext, SXAdvertisementSettings;

@interface SXDynamicAdController : NSObject {

	NSArray* _placements;
	SXLayoutBlueprint* _layoutBlueprint;
	SXContext* _context;
	NSArray* _existingAdComponents;
	SXAdvertisementSettings* _advertismentSettings;

}

@property (nonatomic,readonly) NSArray * placements;                                      //@synthesize placements=_placements - In the implementation block
@property (nonatomic,retain) SXLayoutBlueprint * layoutBlueprint;                         //@synthesize layoutBlueprint=_layoutBlueprint - In the implementation block
@property (nonatomic,retain) SXContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * existingAdComponents;                              //@synthesize existingAdComponents=_existingAdComponents - In the implementation block
@property (nonatomic,retain) SXAdvertisementSettings * advertismentSettings;              //@synthesize advertismentSettings=_advertismentSettings - In the implementation block
-(SXLayoutBlueprint *)layoutBlueprint;
-(id)placementsForDynamicAds;
-(SXAdvertisementSettings *)advertismentSettings;
-(id)existingAdComponentsInLayoutBlueprint:(id)arg1 ;
-(void)setExistingAdComponents:(NSArray *)arg1 ;
-(double)determineStartingPositionFromInitialPosition:(double)arg1 ;
-(id)findComponentForStartPosition:(double)arg1 actualPosition:(double*)arg2 currentPath:(id)arg3 inLayoutBlueprint:(id)arg4 ;
-(BOOL)positionWithinBounds:(double)arg1 ;
-(NSArray *)existingAdComponents;
-(BOOL)isValidStartPosition:(double)arg1 ;
-(BOOL)placementPossibleForPosition:(double)arg1 excludingColumnRange:(NSRange)arg2 inLayoutBlueprint:(id)arg3 ;
-(id)findComponentsAboveYPosition:(double)arg1 inLayoutBlueprint:(id)arg2 ;
-(BOOL)allowPlacementBetweenComponent:(id)arg1 andSucceedingComponent:(id)arg2 ;
-(BOOL)isImageClassification:(id)arg1 ;
-(id)initWithLayoutBlueprint:(id)arg1 context:(id)arg2 andAdvertismentSettings:(id)arg3 ;
-(unsigned long long)bannerTypeForAdPlacement:(id)arg1 ;
-(NSArray *)placements;
-(void)setLayoutBlueprint:(SXLayoutBlueprint *)arg1 ;
-(void)setAdvertismentSettings:(SXAdvertisementSettings *)arg1 ;
-(SXContext *)context;
-(void)setContext:(SXContext *)arg1 ;
@end

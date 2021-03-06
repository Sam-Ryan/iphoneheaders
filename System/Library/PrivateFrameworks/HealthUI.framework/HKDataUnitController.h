/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface HKDataUnitController : NSObject {

	NSArray* _dataUnits;
	NSDictionary* _dataUnitsByIdentifier;
	NSDictionary* _dataUnitsByCategoryIdentifier;
	NSDictionary* _dataUnitsByObjectType;

}
+(id)sharedInstance;
-(id)init;
-(id)dataUnitForTypeUnifyingBloodPressureTypes:(id)arg1 ;
-(id)dataUnitForType:(id)arg1 ;
-(id)allDataUnits;
-(id)dataUnitWithIdentifier:(id)arg1 ;
-(id)dataUnitsForCategoryIdentifier:(long long)arg1 ;
@end


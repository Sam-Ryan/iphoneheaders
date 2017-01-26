/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString, NSNumberFormatter;

@interface NSEnergyFormatter : NSFormatter <NSObservable, NSObserver> {

	void* _formatter;
	BOOL _isForFoodEnergyUse;
	void** _reserved[2];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
@property (getter=isForFoodEnergyUse) BOOL forFoodEnergyUse;              //@synthesize isForFoodEnergyUse=_isForFoodEnergyUse - In the implementation block
-(void)receiveObservedValue:(id)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)unitStringFromValue:(double)arg1 unit:(long long)arg2 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)stringFromValue:(double)arg1 unit:(long long)arg2 ;
-(BOOL)isForFoodEnergyUse;
-(long long)targetUnitFromJoules:(double)arg1 ;
-(id)stringFromJoules:(double)arg1 ;
-(id)unitStringFromJoules:(double)arg1 usedUnit:(long long*)arg2 ;
-(void)setForFoodEnergyUse:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setUnitStyle:(long long)arg1 ;
-(long long)unitStyle;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSNumber, NSString, NSObject, NSUUID;

@interface HMCharacteristicMetadata : NSObject <NSSecureCoding, HMObjectMerge> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _maxLength;
	NSString* _format;
	NSString* _units;
	NSString* _manufacturerDescription;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,retain) NSNumber * minimumValue;                                 //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;                                 //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                                    //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                                    //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSString * format;                                         //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * units;                                          //@synthesize units=_units - In the implementation block
@property (nonatomic,copy) NSString * manufacturerDescription;                        //@synthesize manufacturerDescription=_manufacturerDescription - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(void)setUnits:(NSString *)arg1 ;
-(NSString *)units;
-(NSNumber *)maxLength;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)setManufacturerDescription:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)manufacturerDescription;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end


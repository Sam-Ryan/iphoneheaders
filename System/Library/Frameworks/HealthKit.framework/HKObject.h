/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HKSourceRevision, HKDevice, NSDictionary, NSString, HKSource, NSDate;

@interface HKObject : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	HKSourceRevision* _sourceRevision;
	HKDevice* _device;
	NSDictionary* _metadata;
	long long _provenanceID;
	NSString* _sourceBundleIdentifier;
	double _creationTimestamp;

}

@property (readonly) NSUUID * UUID; 
@property (readonly) HKSource * source; 
@property (readonly) HKSourceRevision * sourceRevision;                                                                                      //@synthesize sourceRevision=_sourceRevision - In the implementation block
@property (readonly) HKDevice * device;                                                                                                      //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSDictionary * metadata; 
@property (setter=_setSourceBundleIdentifier:,getter=_sourceBundleIdentifier,nonatomic,copy) NSString * sourceBundleIdentifier;              //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (assign,setter=_setCreationDate:,getter=_creationDate,nonatomic) NSDate * creationDate; 
@property (assign,setter=_setCreationTimestamp:,getter=_creationTimestamp,nonatomic) double creationTimestamp;                               //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(/*^block*/id)arg3 ;
+(id)_objectWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 ;
+(BOOL)_isConcreteObjectClass;
-(long long)hk_integerValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(HKSource *)source;
-(id)_source;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(NSDictionary *)metadata;
-(id)_validateConfiguration;
-(void)_validateForCreation;
-(id)_valueDescription;
-(id)_creationDate;
-(void)_setCreationDate:(id)arg1 ;
-(HKDevice *)device;
-(id)_sourceBundleIdentifier;
-(double)_creationTimestamp;
-(void)_setCreationTimestamp:(double)arg1 ;
-(void)_setSourceBundleIdentifier:(id)arg1 ;
-(void)_setSourceRevision:(id)arg1 ;
-(void)_setUUID:(id)arg1 ;
-(void)_setDevice:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(HKSourceRevision *)sourceRevision;
-(BOOL)_objectCanBeSaved:(id*)arg1 ;
-(BOOL)validateForSaving:(id*)arg1 ;
@end


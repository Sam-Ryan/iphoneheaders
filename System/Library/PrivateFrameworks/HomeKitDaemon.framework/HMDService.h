/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDAccessory, NSString, NSNumber, NSArray;

@interface HMDService : NSObject <NSSecureCoding> {

	BOOL _hidden;
	HMDAccessory* _accessory;
	NSString* _name;
	NSNumber* _instanceID;
	NSString* _associatedServiceType;
	NSArray* _characteristics;
	NSString* _serviceType;
	NSString* _providedName;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;               //@synthesize accessory=_accessory - In the implementation block
@property (getter=getName,nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy) NSNumber * instanceID;                             //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                     //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) NSString * associatedServiceType;              //@synthesize associatedServiceType=_associatedServiceType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * characteristics;                //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * providedName;                         //@synthesize providedName=_providedName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)url;
-(id)assistantUniqueIdentifier;
-(NSString *)contextID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)type;
-(NSArray *)characteristics;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(HMDAccessory *)accessory;
-(NSNumber *)instanceID;
-(NSString *)associatedServiceType;
-(BOOL)updateAssociatedServiceType:(id)arg1 error:(id*)arg2 ;
-(id)getConfiguredName;
-(id)findCharacteristic:(id)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(NSString *)providedName;
-(void)_updateName:(id)arg1 ;
-(void)setProvidedName:(NSString *)arg1 ;
-(void)updateLastKnownValues;
-(id)configureWithService:(id)arg1 accessory:(id)arg2 ;
-(id)initWithService:(id)arg1 accessory:(id)arg2 ;
-(id)findCharacteristicWithType:(id)arg1 ;
-(id)updateName:(id)arg1 ;
-(void)_readNameCharacterisiticIfNeeded:(id)arg1 ;
-(void)_shouldServiceBeHidden;
-(void)_updateProvidedName:(id)arg1 ;
-(id)getName;
@end


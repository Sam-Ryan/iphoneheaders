/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKSource : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _bundleIdentifier;
	BOOL _localDevice;
	NSString* _productType;
	unsigned long long _options;

}

@property (readonly) NSString * name; 
@property (readonly) NSString * bundleIdentifier; 
@property (assign,setter=_setLocalDevice:,getter=_isLocalDevice,nonatomic) BOOL localDevice;                  //@synthesize localDevice=_localDevice - In the implementation block
@property (setter=_setProductType:,getter=_productType,nonatomic,retain) NSString * productType;              //@synthesize productType=_productType - In the implementation block
@property (assign,setter=_setOptions:,getter=_options,nonatomic) unsigned long long options;                  //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_representsCurrentDeviceWithBundleIdentifier:(id)arg1 ;
+(id)_currentSourceProductType:(BOOL)arg1 ;
+(id)_sourceNameWithRepresentsCurrentDevice:(BOOL)arg1 defaultSource:(BOOL)arg2 ;
+(id)defaultSource;
+(id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4 ;
+(id)_generateIdentifierForAppleDevice;
+(id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1 ;
+(id)_sourceBundleIdentifierWithEntitlements:(id)arg1 clientBundleIdentifier:(id)arg2 isExtension:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)_init;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_options;
-(void)_setBundleIdentifier:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(void)_setOptions:(unsigned long long)arg1 ;
-(void)_setLocalDevice:(BOOL)arg1 ;
-(void)_setProductType:(id)arg1 ;
-(id)_productType;
-(BOOL)_isApplication;
-(BOOL)_isLocalDevice;
-(BOOL)_requiresAuthorization;
-(BOOL)_isPreferredSource;
-(BOOL)_isAppleWatch;
@end


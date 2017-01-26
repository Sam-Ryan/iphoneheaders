/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:32:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMailBridgeSettings.bundle/NanoMailBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailBridgeSettings/MFNanoBridgeSettingsMailbox.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MFNanoBridgeSettingsSharedMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding> {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)icon;
-(id)displayName;
-(id)_includesMeIconImage;
@end


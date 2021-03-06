/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPMetadataTuple;

@interface HMDHAPMetadataTuple : NSObject <NSSecureCoding> {

	HAPMetadataTuple* _hapMetadataTuple;

}

@property (nonatomic,retain) HAPMetadataTuple * hapMetadataTuple;              //@synthesize hapMetadataTuple=_hapMetadataTuple - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setHapMetadataTuple:(HAPMetadataTuple *)arg1 ;
-(id)initWithHAPTuple:(id)arg1 ;
-(HAPMetadataTuple *)hapMetadataTuple;
@end


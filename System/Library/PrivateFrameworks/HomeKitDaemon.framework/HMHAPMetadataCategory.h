/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMHAPMetadataCategory : NSObject <NSSecureCoding> {

	NSString* _uuidStr;
	NSString* _catDescription;

}

@property (nonatomic,retain) NSString * uuidStr;                     //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSString * catDescription;              //@synthesize catDescription=_catDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uuidStr;
-(NSString *)catDescription;
-(void)setUuidStr:(NSString *)arg1 ;
-(void)setCatDescription:(NSString *)arg1 ;
@end


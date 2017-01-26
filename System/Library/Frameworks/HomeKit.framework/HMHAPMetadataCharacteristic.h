/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMHAPMetadataCharacteristic : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _chrDescription;
	NSString* _localizedDescription;
	NSString* _type;
	NSString* _format;
	NSString* _unit;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * chrDescription;                    //@synthesize chrDescription=_chrDescription - In the implementation block
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * format;                            //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * unit;                              //@synthesize unit=_unit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)chrDescription;
-(void)setChrDescription:(NSString *)arg1 ;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
@end


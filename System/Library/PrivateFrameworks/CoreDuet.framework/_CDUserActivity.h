/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface _CDUserActivity : NSObject <NSSecureCoding> {

	NSString* _bundleId;
	NSString* _type;
	NSString* _title;
	NSDate* _date;
	NSDictionary* _payload;

}

@property (copy) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (copy) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (copy) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (copy) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createFromUserActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSDictionary *)payload;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)title;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
@end


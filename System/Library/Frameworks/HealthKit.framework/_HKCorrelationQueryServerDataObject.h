/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDictionary;

@interface _HKCorrelationQueryServerDataObject : _HKQueryServerDataObject {

	NSDictionary* _filterDictionary;
	long long _version;

}

@property (nonatomic,retain) NSDictionary * filterDictionary;              //@synthesize filterDictionary=_filterDictionary - In the implementation block
@property (assign,nonatomic) long long version;                            //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(void)setFilterDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)filterDictionary;
@end


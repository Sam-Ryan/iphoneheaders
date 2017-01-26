/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPassPersonalization : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _requiredPersonalizationFields;
	NSString* _termsAndConditions;
	NSString* _localizedDescription;

}

@property (nonatomic,readonly) unsigned long long requiredPersonalizationFields;              //@synthesize requiredPersonalizationFields=_requiredPersonalizationFields - In the implementation block
@property (nonatomic,readonly) NSString * termsAndConditions;                                 //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;                               //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)passPersonalizationWithPassBundle:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)termsAndConditions;
-(unsigned long long)requiredPersonalizationFields;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
@end


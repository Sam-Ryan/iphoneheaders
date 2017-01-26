/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSArray;

@interface PKFieldProperties : NSObject <NSSecureCoding> {

	NSError* _error;
	unsigned long long _technology;
	unsigned long long _mode;
	NSArray* _merchantIdentifiers;

}

@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long technology;              //@synthesize technology=_technology - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSArray * merchantIdentifiers;              //@synthesize merchantIdentifiers=_merchantIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)mode;
-(unsigned long long)technology;
-(NSError *)error;
-(id)initWithTechnology:(unsigned long long)arg1 mode:(unsigned long long)arg2 merchantIdentifiers:(id)arg3 ;
-(id)initWithTechnology:(unsigned long long)arg1 mode:(unsigned long long)arg2 error:(id)arg3 ;
-(NSArray *)merchantIdentifiers;
@end


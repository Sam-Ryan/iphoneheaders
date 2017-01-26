/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PSYTestInput : NSObject <NSSecureCoding> {

	long long _action;

}

@property (assign,nonatomic) long long action;              //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)testInputWithAction:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
@end


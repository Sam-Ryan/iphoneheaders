/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MRPairedDevice : NSObject <NSSecureCoding> {

	BOOL _connected;
	NSString* _name;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;              //@synthesize connected=_connected - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(id)initWithName:(id)arg1 identifier:(id)arg2 ;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)isConnected;
@end


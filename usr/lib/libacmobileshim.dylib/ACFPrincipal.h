/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ACFPrincipal : NSObject <NSCopying, NSCoding> {

	NSString* _userName;
	NSString* _realm;
	NSString* _principalString;

}

@property (nonatomic,retain) NSString * userName;                     //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * realm;                        //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * principalString; 
+(id)principalWithPrincipalString:(id)arg1 ;
+(id)principalWithUserName:(id)arg1 realm:(id)arg2 ;
-(NSString *)userName;
-(void)setRealm:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)realm;
-(void)setPrincipalString:(NSString *)arg1 ;
-(void)releaseCaches;
-(NSString *)principalString;
-(BOOL)isEqualTo:(id)arg1 ;
@end


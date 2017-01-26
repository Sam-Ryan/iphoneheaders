/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface AutoEncodeDecodeObject : NSObject <NSCopying> {

	NSArray* _keysToEncode;

}

@property (nonatomic,retain) NSArray * keysToEncode;              //@synthesize keysToEncode=_keysToEncode - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)keysToEncode;
-(id)getKeysToEncode;
-(void)setKeysToEncode:(NSArray *)arg1 ;
-(BOOL)isEqualToObject:(id)arg1 ;
@end


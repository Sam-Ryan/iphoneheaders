/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PHAdjustmentData : NSObject <NSSecureCoding> {

	NSString* _formatIdentifier;
	NSString* _formatVersion;
	NSData* _data;
	long long _baseVersion;

}

@property (copy) NSString * formatIdentifier;                    //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (copy) NSString * formatVersion;                       //@synthesize formatVersion=_formatVersion - In the implementation block
@property (readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (getter=isOpaque,readonly) BOOL opaque; 
@property (assign,nonatomic) long long baseVersion;              //@synthesize baseVersion=_baseVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)opaqueAdjustmentData;
+(long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)arg1 ;
+(long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)arg1 ;
+(long long)adjustmentBaseVersionFromImageRequestVersion:(long long)arg1 ;
+(long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(BOOL)isOpaque;
-(void)setFormatIdentifier:(NSString *)arg1 ;
-(long long)baseVersion;
-(NSString *)formatIdentifier;
-(NSString *)formatVersion;
-(void)setBaseVersion:(long long)arg1 ;
-(id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 ;
-(void)setFormatVersion:(NSString *)arg1 ;
@end


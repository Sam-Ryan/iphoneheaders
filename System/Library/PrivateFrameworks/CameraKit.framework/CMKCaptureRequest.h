/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface CMKCaptureRequest : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* __parameterStorage;
	long long _type;

}

@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * _customParameterStorage; 
@property (nonatomic,readonly) NSMutableDictionary * _parameterStorage;                  //@synthesize _parameterStorage=__parameterStorage - In the implementation block
-(id)init;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)_parameterStorage;
-(id)parameterForKey:(id)arg1 ;
-(NSDictionary *)_customParameterStorage;
@end


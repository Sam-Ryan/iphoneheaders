/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NEPathEvent : NSObject {

	long long _type;
	NSString* _bundleID;

}

@property (readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(long long)type;
-(NSString *)bundleID;
-(id)initWithType:(long long)arg1 bundleID:(id)arg2 ;
@end


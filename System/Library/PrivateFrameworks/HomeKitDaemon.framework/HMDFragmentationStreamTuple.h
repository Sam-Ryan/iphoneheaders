/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HAPFragmentationStream, NSString, HMMessage;

@interface HMDFragmentationStreamTuple : NSObject {

	HAPFragmentationStream* _fragmentationStream;
	NSString* _homeUUID;
	HMMessage* _lastMessage;

}

@property (nonatomic,readonly) HAPFragmentationStream * fragmentationStream;              //@synthesize fragmentationStream=_fragmentationStream - In the implementation block
@property (nonatomic,readonly) NSString * homeUUID;                                       //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,retain) HMMessage * lastMessage;                                     //@synthesize lastMessage=_lastMessage - In the implementation block
+(id)tupleWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2 ;
-(void)close;
-(HMMessage *)lastMessage;
-(NSString *)homeUUID;
-(id)initWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2 ;
-(HAPFragmentationStream *)fragmentationStream;
-(void)setLastMessage:(HMMessage *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCAudioPayload;

@interface VCAudioTier : NSObject {

	unsigned networkBitrate;
	unsigned audioBitrate;
	unsigned packetsPerBundle;
	VCAudioPayload* payload;

}

@property (readonly) unsigned networkBitrate; 
@property (readonly) unsigned audioBitrate; 
@property (readonly) unsigned packetsPerBundle; 
@property (readonly) VCAudioPayload * payload; 
-(VCAudioPayload *)payload;
-(unsigned)networkBitrate;
-(unsigned)audioBitrate;
-(unsigned)packetsPerBundle;
-(id)initWithNetworkBitrate:(unsigned)arg1 audioBitrate:(unsigned)arg2 packetsPerBundle:(unsigned)arg3 payload:(id)arg4 ;
@end


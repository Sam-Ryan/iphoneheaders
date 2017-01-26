/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface FTRejectMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfPushToken;
	NSData* _peerPushToken;
	NSString* _peerID;
	NSNumber* _reason;

}

@property (copy) NSData * peerPushToken;              //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSData * selfPushToken;              //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSString * peerID;                   //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSNumber * reason;                   //@synthesize reason=_reason - In the implementation block
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(NSData *)selfPushToken;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
-(void)setReason:(NSNumber *)arg1 ;
-(NSData *)peerPushToken;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(id)bagKey;
@end


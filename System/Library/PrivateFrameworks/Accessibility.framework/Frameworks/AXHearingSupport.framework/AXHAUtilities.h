/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface AXHAUtilities : NSObject {

	NSDictionary* _pickableRoutes;

}
+(id)sharedUtilityProvider;
+(id)objectFromXDCObject:(id)arg1 ;
+(id)XDCObjectFromObject:(id)arg1 ;
+(id)dictionaryFromXPCMessage:(id)arg1 error:(id*)arg2 ;
+(id)messagePayloadFromDictionary:(id)arg1 andIdentifier:(unsigned long long)arg2 ;
+(id)copyXPCMessageFromDictionary:(id)arg1 inReplyToXPCMessage:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(void)clearAudioRoutes;
-(id)currentPickableAudioRoutes;
-(BOOL)hearingAidRouteAvailable;
-(BOOL)hearingAidStreamSelected;
-(void)pickableAudioRoutesDidChange:(id)arg1 ;
-(BOOL)oldRoutes:(id)arg1 equalToNewRoutes:(id)arg2 ;
@end


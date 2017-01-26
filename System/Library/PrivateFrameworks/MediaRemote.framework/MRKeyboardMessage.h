/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRTextEditingAttributes, NSData;

@interface MRKeyboardMessage : MRProtocolMessage {

	MRTextEditingAttributes* _attributes;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) NSData * encryptedTextCyphertext; 
@property (nonatomic,readonly) MRTextEditingAttributes * attributes; 
+(id)encryptedMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3 usingCryptoSession:(id)arg4 ;
-(void)dealloc;
-(unsigned long long)state;
-(unsigned long long)type;
-(MRTextEditingAttributes *)attributes;
-(id)decryptedTextUsingCryptoSession:(id)arg1 ;
-(NSData *)encryptedTextCyphertext;
-(id)initWithState:(unsigned long long)arg1 encryptedTextCyphertext:(id)arg2 attributes:(id)arg3 ;
@end


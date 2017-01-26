/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HSControlPrompt : NSObject {

	BOOL _secureText;
	unsigned _keyboardType;
	unsigned _messageType;
	unsigned _promptID;
	unsigned _version;
	unsigned long long _sessionID;
	NSString* _string;
	NSString* _subText;
	NSString* _title;

}

@property (assign,nonatomic) unsigned keyboardType;                            //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) unsigned messageType;                             //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned promptID;                                //@synthesize promptID=_promptID - In the implementation block
@property (assign,getter=isSecureText,nonatomic) BOOL secureText;              //@synthesize secureText=_secureText - In the implementation block
@property (assign,nonatomic) unsigned long long sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * string;                                  //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSString * subText;                                 //@synthesize subText=_subText - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned version;                                 //@synthesize version=_version - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)string;
-(unsigned)keyboardType;
-(void)setKeyboardType:(unsigned)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setSessionID:(unsigned long long)arg1 ;
-(unsigned long long)sessionID;
-(void)setPromptID:(unsigned)arg1 ;
-(unsigned)promptID;
-(void)setMessageType:(unsigned)arg1 ;
-(unsigned)messageType;
-(void)setSubText:(NSString *)arg1 ;
-(NSString *)subText;
-(void)setSecureText:(BOOL)arg1 ;
-(BOOL)isSecureText;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSArray;

@interface TUDialRequest : NSObject <NSSecureCoding, NSCopying> {

	BOOL _performDialAssist;
	BOOL _performLocalDialAssist;
	BOOL _dialAssisted;
	BOOL _showUIPrompt;
	BOOL _hostOnCurrentDevice;
	BOOL _endpointOnCurrentDevice;
	int _service;
	int _callIdentifier;
	long long _dialType;
	NSString* _destinationID;
	NSString* _audioSourceIdentifier;
	NSString* _uniqueProxyIdentifier;
	long long _originatingUIType;
	CGSize _localLandscapeAspectRatio;
	CGSize _localPortraitAspectRatio;

}

@property (nonatomic,readonly) int service;                                          //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) long long dialType;                                     //@synthesize dialType=_dialType - In the implementation block
@property (nonatomic,copy) NSString * destinationID;                                 //@synthesize destinationID=_destinationID - In the implementation block
@property (assign,nonatomic) int callIdentifier;                                     //@synthesize callIdentifier=_callIdentifier - In the implementation block
@property (nonatomic,copy) NSString * audioSourceIdentifier;                         //@synthesize audioSourceIdentifier=_audioSourceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL performDialAssist;                                 //@synthesize performDialAssist=_performDialAssist - In the implementation block
@property (assign,nonatomic) BOOL performLocalDialAssist;                            //@synthesize performLocalDialAssist=_performLocalDialAssist - In the implementation block
@property (assign,getter=isDialAssisted,nonatomic) BOOL dialAssisted;                //@synthesize dialAssisted=_dialAssisted - In the implementation block
@property (assign,nonatomic) BOOL showUIPrompt;                                      //@synthesize showUIPrompt=_showUIPrompt - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSArray * validityErrors; 
@property (nonatomic,copy) NSString * uniqueProxyIdentifier;                         //@synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hostOnCurrentDevice;                               //@synthesize hostOnCurrentDevice=_hostOnCurrentDevice - In the implementation block
@property (assign,nonatomic) BOOL endpointOnCurrentDevice;                           //@synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressBookInternalUUID; 
@property (assign,nonatomic) long long originatingUIType;                            //@synthesize originatingUIType=_originatingUIType - In the implementation block
@property (assign,nonatomic) CGSize localLandscapeAspectRatio;                       //@synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize localPortraitAspectRatio;                        //@synthesize localPortraitAspectRatio=_localPortraitAspectRatio - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)originatingUITypeForString:(id)arg1 ;
+(id)stringForDialType:(long long)arg1 ;
+(id)stringForOriginatingUIType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)destinationID;
-(BOOL)isDialAssisted;
-(BOOL)performLocalDialAssist;
-(void)setDestinationID:(NSString *)arg1 ;
-(BOOL)performDialAssist;
-(int)callIdentifier;
-(void)setDialAssisted:(BOOL)arg1 ;
-(NSString *)uniqueProxyIdentifier;
-(void)setCallIdentifier:(int)arg1 ;
-(NSString *)audioSourceIdentifier;
-(long long)dialType;
-(BOOL)hostOnCurrentDevice;
-(BOOL)endpointOnCurrentDevice;
-(void)setEndpointOnCurrentDevice:(BOOL)arg1 ;
-(BOOL)showUIPrompt;
-(long long)originatingUIType;
-(NSArray *)validityErrors;
-(id)URLScheme;
-(id)URLHost;
-(id)URLQueryItems;
-(id)isVoicemailURLQueryItem;
-(id)callIdentifierURLQueryItem;
-(id)forceAssistURLQueryItem;
-(id)suppressAssistURLQueryItem;
-(id)dialAssistedURLQueryItem;
-(id)originatingUIURLQueryItem;
-(id)noPromptURLQueryItem;
-(id)validityErrorForUnknownService;
-(id)validityErrorForDestinationIDWithVoicemail;
-(id)validityErrorForNonNormalDialTypeWithoutTelephony;
-(id)validityErrorForEndpointNotOnCurrentDeviceForNonRelayableService;
-(id)validityErrorForEmergencyCall;
-(void)setDialType:(long long)arg1 ;
-(void)setAudioSourceIdentifier:(NSString *)arg1 ;
-(void)setPerformDialAssist:(BOOL)arg1 ;
-(void)setPerformLocalDialAssist:(BOOL)arg1 ;
-(void)setShowUIPrompt:(BOOL)arg1 ;
-(void)setUniqueProxyIdentifier:(NSString *)arg1 ;
-(void)setHostOnCurrentDevice:(BOOL)arg1 ;
-(void)setOriginatingUIType:(long long)arg1 ;
-(NSString *)addressBookInternalUUID;
-(CGSize)localLandscapeAspectRatio;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(int)service;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(CGSize)localPortraitAspectRatio;
-(id)initWithService:(int)arg1 ;
@end


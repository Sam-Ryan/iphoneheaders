/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSURL, NSUUID, NSData, NSDate;

@interface PKPlugInCore : NSObject {

	BOOL _onSystemVolume;
	NSDictionary* _topDictionary;
	NSDictionary* _plugInDictionary;
	NSString* _identifier;
	NSString* _originalIdentifier;
	NSURL* _url;
	NSURL* _containingUrl;
	NSDictionary* _bundleInfoDictionary;
	unsigned long long _hubProtocolVersion;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSString* _localizedContainingName;
	NSDictionary* _annotations;
	long long _lastModified;
	NSUUID* _uuid;
	NSData* _cdhash;
	NSString* _requirement;

}

@property (readonly) BOOL oldStyle; 
@property (retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * originalIdentifier;                      //@synthesize originalIdentifier=_originalIdentifier - In the implementation block
@property (retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (retain) NSURL * containingUrl;                              //@synthesize containingUrl=_containingUrl - In the implementation block
@property (readonly) NSString * path; 
@property (readonly) NSString * containingPath; 
@property (assign) BOOL onSystemVolume;                                //@synthesize onSystemVolume=_onSystemVolume - In the implementation block
@property (retain) NSDictionary * bundleInfoDictionary;                //@synthesize bundleInfoDictionary=_bundleInfoDictionary - In the implementation block
@property (retain) NSDictionary * topDictionary;                       //@synthesize topDictionary=_topDictionary - In the implementation block
@property (retain) NSDictionary * plugInDictionary;                    //@synthesize plugInDictionary=_plugInDictionary - In the implementation block
@property (readonly) NSDictionary * attributes; 
@property (readonly) NSString * version; 
@property (readonly) id protocolSpec; 
@property (assign) unsigned long long hubProtocolVersion;              //@synthesize hubProtocolVersion=_hubProtocolVersion - In the implementation block
@property (readonly) NSString * sdkSpec; 
@property (retain) NSString * localizedName;                           //@synthesize localizedName=_localizedName - In the implementation block
@property (retain) NSString * localizedShortName;                      //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (retain) NSString * localizedContainingName;                 //@synthesize localizedContainingName=_localizedContainingName - In the implementation block
@property (retain) NSDictionary * annotations;                         //@synthesize annotations=_annotations - In the implementation block
@property (assign) long long lastModified;                             //@synthesize lastModified=_lastModified - In the implementation block
@property (readonly) NSDate * timestamp; 
@property (retain) NSUUID * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSData * cdhash;                                    //@synthesize cdhash=_cdhash - In the implementation block
@property (retain) NSString * requirement;                             //@synthesize requirement=_requirement - In the implementation block
@property (readonly) BOOL isAppExtension; 
@property (readonly) BOOL isMultiplexed; 
@property (readonly) BOOL isHybrid; 
@property (readonly) BOOL isDedicated; 
@property (readonly) BOOL isData; 
+(id)readSDKDictionary:(id)arg1 ;
-(void)setLocalizedShortName:(NSString *)arg1 ;
-(NSString *)originalIdentifier;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)timestamp;
-(NSString *)identifier;
-(NSURL *)url;
-(NSString *)path;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)localizedName;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)version;
-(NSDictionary *)attributes;
-(NSUUID *)uuid;
-(NSString *)localizedShortName;
-(NSURL *)containingUrl;
-(NSString *)localizedContainingName;
-(NSDictionary *)bundleInfoDictionary;
-(id)initWithForm:(id)arg1 ;
-(void)setAnnotation:(id)arg1 value:(id)arg2 ;
-(BOOL)isData;
-(id)diagnose;
-(id)protocolSpec;
-(id)augmentInterface:(id)arg1 ;
-(unsigned long long)hubProtocolVersion;
-(BOOL)onSystemVolume;
-(void)updateFromForm:(id)arg1 ;
-(BOOL)setupWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5 ;
-(BOOL)setupWithForm:(id)arg1 ;
-(id)normalizeInfoDictionary:(id)arg1 ;
-(BOOL)setDictionaries:(id)arg1 ;
-(NSDictionary *)topDictionary;
-(void)setHubProtocolVersion:(unsigned long long)arg1 ;
-(void)setOriginalIdentifier:(NSString *)arg1 ;
-(void)setCdhash:(NSData *)arg1 ;
-(void)setRequirement:(NSString *)arg1 ;
-(void)setContainingUrl:(NSURL *)arg1 ;
-(void)setOnSystemVolume:(BOOL)arg1 ;
-(void)setLocalizedContainingName:(NSString *)arg1 ;
-(void)setPlugInDictionary:(NSDictionary *)arg1 ;
-(BOOL)isAppExtension;
-(NSString *)sdkSpec;
-(id)mergeDictionary:(id)arg1 into:(id)arg2 ;
-(void)canonicalize;
-(BOOL)sdkOverridesKey:(id)arg1 ;
-(id)mergeSharedResources:(id)arg1 into:(id)arg2 ;
-(NSString *)containingPath;
-(BOOL)isHybrid;
-(void)setBundleInfoDictionary:(NSDictionary *)arg1 ;
-(void)setTopDictionary:(NSDictionary *)arg1 ;
-(id)initWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5 ;
-(void)resolveSDK;
-(BOOL)oldStyle;
-(id)embeddedCodePath;
-(id)embeddedProtocolSpec;
-(BOOL)isMultiplexed;
-(BOOL)isDedicated;
-(NSData *)cdhash;
-(NSString *)requirement;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setLastModified:(long long)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(long long)lastModified;
-(NSDictionary *)annotations;
-(id)export:(id*)arg1 ;
-(void)setAnnotations:(NSDictionary *)arg1 ;
-(NSDictionary *)plugInDictionary;
@end


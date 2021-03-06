/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FMFAccount : NSObject {

	NSString* _iCloudId;
	NSString* _serverHost;
	NSString* _serverProtocolScheme;
	NSString* _dsid;
	NSString* _authToken;
	long long _authTokenStatus;
	NSString* _fmfAppToken;
	NSString* _fmfToken;
	NSString* _fmfAppHostName;
	NSString* _fmfHostName;
	NSString* _apsEnvironment;

}

@property (nonatomic,retain) NSString * iCloudId;                          //@synthesize iCloudId=_iCloudId - In the implementation block
@property (nonatomic,retain) NSString * serverHost;                        //@synthesize serverHost=_serverHost - In the implementation block
@property (nonatomic,retain) NSString * serverProtocolScheme;              //@synthesize serverProtocolScheme=_serverProtocolScheme - In the implementation block
@property (nonatomic,retain) NSString * dsid;                              //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * authToken;                         //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic) long long authTokenStatus;                    //@synthesize authTokenStatus=_authTokenStatus - In the implementation block
@property (nonatomic,retain) NSString * fmfAppToken;                       //@synthesize fmfAppToken=_fmfAppToken - In the implementation block
@property (nonatomic,retain) NSString * fmfToken;                          //@synthesize fmfToken=_fmfToken - In the implementation block
@property (nonatomic,retain) NSString * fmfAppHostName;                    //@synthesize fmfAppHostName=_fmfAppHostName - In the implementation block
@property (nonatomic,retain) NSString * fmfHostName;                       //@synthesize fmfHostName=_fmfHostName - In the implementation block
@property (nonatomic,retain) NSString * apsEnvironment;                    //@synthesize apsEnvironment=_apsEnvironment - In the implementation block
-(void)setFmfAppHostName:(NSString *)arg1 ;
-(NSString *)iCloudId;
-(void)setServerHost:(NSString *)arg1 ;
-(NSString *)serverProtocolScheme;
-(void)setServerProtocolScheme:(NSString *)arg1 ;
-(long long)authTokenStatus;
-(void)setAuthTokenStatus:(long long)arg1 ;
-(void)setFmfAppToken:(NSString *)arg1 ;
-(void)setFmfToken:(NSString *)arg1 ;
-(NSString *)fmfAppHostName;
-(NSString *)fmfHostName;
-(void)setFmfHostName:(NSString *)arg1 ;
-(void)setApsEnvironment:(NSString *)arg1 ;
-(id)description;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)fmfToken;
-(NSString *)fmfAppToken;
-(NSString *)apsEnvironment;
-(NSString *)serverHost;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(void)setICloudId:(NSString *)arg1 ;
@end


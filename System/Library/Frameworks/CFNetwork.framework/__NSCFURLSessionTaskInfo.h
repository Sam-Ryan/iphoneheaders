/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURLRequest, NSURLResponse, NSError, NSURL, NSDictionary, AVURLAsset;

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {

	BOOL _hasStarted;
	BOOL _expectingResumeCallback;
	BOOL _establishedConnection;
	BOOL _disablesRetry;
	BOOL _shouldCancelOnDisconnect;
	BOOL _discretionary;
	BOOL _mayBeDemotedToDiscretionary;
	BOOL _initializedFromToken;
	unsigned long long _identifier;
	unsigned long long _taskKind;
	double _creationTime;
	long long _state;
	unsigned long long _suspendCount;
	NSString* _taskDescription;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	NSError* _error;
	NSURL* _fileURL;
	NSURL* _downloadFileURL;
	NSString* _bundleID;
	NSString* _sessionID;
	unsigned long long _retryCount;
	unsigned long long _lowThroughputTimerRetryCount;
	long long _basePriority;
	NSString* _uniqueIdentifier;
	long long _bytesPerSecondLimit;
	double _loadingPriority;
	unsigned long long _AVAssetDownloadToken;
	NSURL* _URL;
	NSURL* _destinationURL;
	NSDictionary* _options;
	unsigned long long _downloadTokenFromInitialization;
	AVURLAsset* _AVURLAsset;
	NSURL* _temporaryDestinationURL;
	long long _countOfBytesReceived;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	NSDictionary* __backgroundTaskTimingData;

}

@property (assign) unsigned long long identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long taskKind;                                     //@synthesize taskKind=_taskKind - In the implementation block
@property (assign) double creationTime;                                             //@synthesize creationTime=_creationTime - In the implementation block
@property (assign) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (assign) unsigned long long suspendCount;                                 //@synthesize suspendCount=_suspendCount - In the implementation block
@property (copy) NSString * taskDescription;                                        //@synthesize taskDescription=_taskDescription - In the implementation block
@property (copy) NSURLRequest * originalRequest;                                    //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;                                     //@synthesize currentRequest=_currentRequest - In the implementation block
@property (copy) NSURLResponse * response;                                          //@synthesize response=_response - In the implementation block
@property (copy) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (copy) NSURL * fileURL;                                                   //@synthesize fileURL=_fileURL - In the implementation block
@property (copy) NSURL * downloadFileURL;                                           //@synthesize downloadFileURL=_downloadFileURL - In the implementation block
@property (copy) NSString * bundleID;                                               //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * sessionID;                                              //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) BOOL hasStarted;                                                 //@synthesize hasStarted=_hasStarted - In the implementation block
@property (assign) BOOL expectingResumeCallback;                                    //@synthesize expectingResumeCallback=_expectingResumeCallback - In the implementation block
@property (assign) BOOL establishedConnection;                                      //@synthesize establishedConnection=_establishedConnection - In the implementation block
@property (assign) unsigned long long retryCount;                                   //@synthesize retryCount=_retryCount - In the implementation block
@property (assign) unsigned long long lowThroughputTimerRetryCount;                 //@synthesize lowThroughputTimerRetryCount=_lowThroughputTimerRetryCount - In the implementation block
@property (assign) BOOL disablesRetry;                                              //@synthesize disablesRetry=_disablesRetry - In the implementation block
@property (assign) BOOL shouldCancelOnDisconnect;                                   //@synthesize shouldCancelOnDisconnect=_shouldCancelOnDisconnect - In the implementation block
@property (assign) long long basePriority;                                          //@synthesize basePriority=_basePriority - In the implementation block
@property (getter=isDiscretionary) BOOL discretionary;                              //@synthesize discretionary=_discretionary - In the implementation block
@property (copy) NSString * uniqueIdentifier;                                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign) long long bytesPerSecondLimit;                                   //@synthesize bytesPerSecondLimit=_bytesPerSecondLimit - In the implementation block
@property (assign) double loadingPriority;                                          //@synthesize loadingPriority=_loadingPriority - In the implementation block
@property (assign) BOOL mayBeDemotedToDiscretionary;                                //@synthesize mayBeDemotedToDiscretionary=_mayBeDemotedToDiscretionary - In the implementation block
@property (assign) unsigned long long AVAssetDownloadToken;                         //@synthesize AVAssetDownloadToken=_AVAssetDownloadToken - In the implementation block
@property (copy) NSURL * URL;                                                       //@synthesize URL=_URL - In the implementation block
@property (copy) NSURL * destinationURL;                                            //@synthesize destinationURL=_destinationURL - In the implementation block
@property (copy) NSDictionary * options;                                            //@synthesize options=_options - In the implementation block
@property (assign) unsigned long long downloadTokenFromInitialization;              //@synthesize downloadTokenFromInitialization=_downloadTokenFromInitialization - In the implementation block
@property (retain) AVURLAsset * AVURLAsset;                                         //@synthesize AVURLAsset=_AVURLAsset - In the implementation block
@property (assign) BOOL initializedFromToken;                                       //@synthesize initializedFromToken=_initializedFromToken - In the implementation block
@property (copy) NSURL * temporaryDestinationURL;                                   //@synthesize temporaryDestinationURL=_temporaryDestinationURL - In the implementation block
@property (assign) long long countOfBytesReceived;                                  //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                                      //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                            //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;                         //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (copy) NSDictionary * _backgroundTaskTimingData;                          //@synthesize _backgroundTaskTimingData=__backgroundTaskTimingData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(long long)countOfBytesExpectedToReceive;
-(unsigned long long)AVAssetDownloadToken;
-(unsigned long long)taskKind;
-(void)set_backgroundTaskTimingData:(NSDictionary *)arg1 ;
-(void)setAVAssetDownloadToken:(unsigned long long)arg1 ;
-(NSDictionary *)_backgroundTaskTimingData;
-(void)setTemporaryDestinationURL:(NSURL *)arg1 ;
-(BOOL)initializedFromToken;
-(unsigned long long)downloadTokenFromInitialization;
-(NSURL *)temporaryDestinationURL;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(void)setHasStarted:(BOOL)arg1 ;
-(id)initWithTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(void)setTaskKind:(unsigned long long)arg1 ;
-(void)setDownloadFileURL:(NSURL *)arg1 ;
-(void)setAVURLAsset:(AVURLAsset *)arg1 ;
-(NSURL *)downloadFileURL;
-(BOOL)shouldCancelOnDisconnect;
-(long long)basePriority;
-(BOOL)isDiscretionary;
-(long long)bytesPerSecondLimit;
-(BOOL)mayBeDemotedToDiscretionary;
-(void)setShouldCancelOnDisconnect:(BOOL)arg1 ;
-(void)setBasePriority:(long long)arg1 ;
-(void)setDownloadTokenFromInitialization:(unsigned long long)arg1 ;
-(void)setInitializedFromToken:(BOOL)arg1 ;
-(void)setMayBeDemotedToDiscretionary:(BOOL)arg1 ;
-(id)initWithDataTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(id)initWithUploadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(id)initWithDownloadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(id)initWithAVAssetDownloadURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 taskIdentifier:(unsigned long long)arg4 bundleID:(id)arg5 sessionID:(id)arg6 ;
-(BOOL)expectingResumeCallback;
-(void)setExpectingResumeCallback:(BOOL)arg1 ;
-(BOOL)establishedConnection;
-(void)setEstablishedConnection:(BOOL)arg1 ;
-(unsigned long long)lowThroughputTimerRetryCount;
-(void)setLowThroughputTimerRetryCount:(unsigned long long)arg1 ;
-(BOOL)disablesRetry;
-(void)setDisablesRetry:(BOOL)arg1 ;
-(AVURLAsset *)AVURLAsset;
-(unsigned long long)suspendCount;
-(double)loadingPriority;
-(void)setLoadingPriority:(double)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(NSURL *)URL;
-(NSURLResponse *)response;
-(void)setURL:(NSURL *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLRequest *)originalRequest;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(double)creationTime;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(BOOL)hasStarted;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesSent;
-(void)setSuspendCount:(unsigned long long)arg1 ;
-(NSURLRequest *)currentRequest;
-(void)setDiscretionary:(BOOL)arg1 ;
-(NSString *)taskDescription;
-(long long)countOfBytesReceived;
-(void)setTaskDescription:(NSString *)arg1 ;
-(void)setCreationTime:(double)arg1 ;
@end


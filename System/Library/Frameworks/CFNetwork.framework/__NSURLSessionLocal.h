/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLSession.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate_Internal.h>
#import <libobjc.A.dylib/NSURLSessionSubclass.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSArray, NSURLSessionConfiguration, NSURLSession, NSString;

@interface __NSURLSessionLocal : __NSCFURLSession <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate_Internal, NSURLSessionSubclass> {

	unsigned long long _identSeed;
	XTubeManager* _tubeManager;
	NSMutableDictionary* _connectionsToTasks;
	NSMutableArray* _outstandingTasks;
	NSObject*<OS_dispatch_queue> _invalidateQueue;
	/*^block*/id _invalidateCallback;
	const XURLCache* _xCache;
	long long _xCacheOnce;
	const XCookieStorage* _xCookies;
	long long _xCookiesOnce;
	const XCredentialStorage* _xCreds;
	long long _xCredsOnce;
	NSArray* _localProtocolClassesForDefaultSession;
	BOOL _isInvalid;
	NSURLSessionConfiguration* _proxyConfig;
	NSURLSession* _proxySession;
	NSMutableDictionary* _proxyDelegates;
	BOOL _shouldRecreateProxySession;
	NSURLSession* _sessionForCacheLookups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onqueue_checkForCompletion;
-(void)_onqueue_connectUploadTask:(id)arg1 strippedRequest:(id)arg2 bodyStream:(id)arg3 bodyParts:(id)arg4 ;
-(Class)sessionConnectionClass;
-(unsigned long long)nextSeed;
-(void)_onqueue_invokeInvalidateCallback;
-(id)copyTasks;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage;
-(const XURLCache*)_createXURLCache;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)taskForClass:(Class)arg1 request:(id)arg2 uploadFile:(id)arg3 bodyData:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_flushOrResetStorage:(/*^block*/id)arg1 reset:(unsigned char)arg2 ;
-(void)_onqueue_invalidateSession:(BOOL)arg1 withQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(const XURLCache*)_createXURLCache0;
-(const XCookieStorage*)_createXCookieStorage0;
-(const XCredentialStorage*)_createXCredentialStorage0;
-(XTubeManager*)_actualTubeManager;
-(id)_protocolClasses;
-(Class)_protocolClassForRequest:(id)arg1 ;
-(Class)_protocolClassForTask:(id)arg1 ;
-(BOOL)_request:(id)arg1 isCacheEquivalentTo:(id)arg2 ;
-(URLProtocol*)_newURLProtocolForTask:(id)arg1 client:(URLProtocolClient*)arg2 protocolClass:(Class)arg3 ;
-(id)_delegateForTask:(id)arg1 ;
-(void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)dataTaskForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(void)_onqueue_flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_completeInvalidation:(BOOL)arg1 ;
-(void)_onqueue_resetStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)connToTask:(id)arg1 ;
-(void)replaceTask:(id)arg1 withTask:(id)arg2 ;
-(void)addConnectionlessTask:(id)arg1 ;
-(void)removeConnectionlessTask:(id)arg1 ;
-(void)task:(id)arg1 terminatedConnection:(id)arg2 ;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(void)_invalidateAllConnections;
-(void)_purgeIdleConnections;
-(void)invalidateUnpurgeableConnectionsForConnectionCacheKey:(HTTPConnectionCacheKey*)arg1 ;
-(id)_createTaskFromOriginalCFURLRequest:(CFURLRequestRef)arg1 updatedCFURLRequest:(CFURLRequestRef)arg2 connProps:(CFDictionaryRef)arg3 sockProps:(CFDictionaryRef)arg4 ;
-(const XCookieStorage*)copyBaseStorageForRequest:(CFURLRequestRef)arg1 ;
-(CFStringRef)_withConnectionCache_getCurrentSSLMethodForKey:(const HTTPConnectionCacheKey*)arg1 scheduling:(const CoreSchedulingSet*)arg2 ;
-(void)_withConnectionCache_setCurrentSSLMethod:(CFStringRef)arg1 forKey:(const HTTPConnectionCacheKey*)arg2 scheduling:(const CoreSchedulingSet*)arg3 ;
-(BOOL)_withConnectionCache_enqueueRequest:(const HTTPRequestMessage*)arg1 forProtocol:(MetaConnectionCacheClient*)arg2 scheduling:(const CoreSchedulingSet*)arg3 options:(MetaConnectionOptions)arg4 ;
-(GlueTube*)_withConnectionCache_getPendingTubeForProtocol:(MetaConnectionCacheClient*)arg1 withKey:(const HTTPConnectionCacheKey*)arg2 scheduling:(const CoreSchedulingSet*)arg3 ;
-(id)_createCanonicalRequest:(id)arg1 ;
-(id)_createCanonicalRequestForTask:(id)arg1 ;
-(BOOL)_cfurlRequest:(CFURLRequestRef)arg1 isCacheEquivalentTo:(CFURLRequestRef)arg2 ;
-(URLProtocol*)_newURLProtocolForTask:(id)arg1 client:(URLProtocolClient*)arg2 ;
-(BOOL)_prependProtocolClassForDefaultSession:(Class)arg1 ;
-(void)_removeProtocolClassForDefaultSession:(Class)arg1 ;
-(id)_proxyDataTaskForRequest:(id)arg1 withDelegate:(id)arg2 ;
-(id)_cacheOnlyDataTaskForRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)_URLSession:(id)arg1 companionAvailabilityChanged:(BOOL)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_getCookieHeadersForTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:30 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDAirDropFileZipperDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, SDWormholeConnectionDelegate;
@class NSURL, NSProgress, NSObject, SDStatusMonitor, NSMutableData, SDAirDropFileZipper, NSMutableDictionary, NSString;

@interface SDWormholeConnection : NSObject <SDAirDropFileZipperDelegate> {

	BOOL _discover;
	BOOL _personAdded;
	BOOL _stopDeferred;
	BOOL _userAccepted;
	BOOL _senderTrusted;
	BOOL _delayedFinish;
	BOOL _queueSuspended;
	BOOL _endEncountered;
	BOOL _connectionClosed;
	BOOL _transactionStarted;
	SFNodeRef _person;
	NSURL* _destination;
	char* _requestBuffer;
	NSProgress* _progress;
	NSObject*<OS_dispatch_queue> _queue;
	SecTrustRef _clientTrust;
	double _startTime;
	SDStatusMonitor* _monitor;
	long long _lastEvent;
	NSMutableData* _requestData;
	CFReadStreamRef _readStream;
	SDAirDropFileZipper* _zipper;
	NSMutableDictionary* _properties;
	unsigned _powerAssertionID;
	NSObject*<OS_dispatch_semaphore> _askSemaphore;
	CFHTTPServerRequestRef _askRequest;
	CFHTTPServerRequestRef _uploadRequest;
	CFHTTPServerRequestRef _discoverRequest;
	CFHTTPServerConnectionRef _connection;
	BOOL _contactsOnly;
	NSString* _sessionID;
	id<SDWormholeConnectionDelegate> _delegate;

}

@property (assign) BOOL contactsOnly;                                      //@synthesize contactsOnly=_contactsOnly - In the implementation block
@property (copy) NSURL * destination;                                      //@synthesize destination=_destination - In the implementation block
@property (copy) NSString * sessionID;                                     //@synthesize sessionID=_sessionID - In the implementation block
@property (__weak) id<SDWormholeConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObservers;
-(void)removeObservers;
-(void)releaseIdleSleepAssertion;
-(void)systemWillSleep:(id)arg1 ;
-(void)legacyModeChanged:(id)arg1 ;
-(void)wirelessPowerChanged:(id)arg1 ;
-(BOOL)contactsOnly;
-(void)setContactsOnly:(BOOL)arg1 ;
-(void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void*)arg3 ;
-(void)setReplyData:(id)arg1 ;
-(void)cancelAndDecline;
-(void)setSpotlightMetadata:(id)arg1 ;
-(double)getTransferRate;
-(void)storeDataValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(void)storeStringValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2 ;
-(void)startPublishingProgress;
-(void)storeArrayValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(void)handleClosedConnection;
-(void)notifyClientForEvent:(long long)arg1 ;
-(void)notifyClient:(long long)arg1 withResults:(id)arg2 ;
-(void)performBlockForAllProgresses:(/*^block*/id)arg1 ;
-(void)handleTerminalCallBack;
-(BOOL)senderInfoAvailable;
-(void)silentlyCancelRequest;
-(void)enqueueResponse:(CFHTTPServerRequestRef)arg1 code:(long long)arg2 body:(CFDataRef)arg3 ;
-(BOOL)senderIsTrusted:(id)arg1 ;
-(void)sendDiscoverResponse:(long long)arg1 includeHashes:(BOOL)arg2 ;
-(void)storeIconValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(void)convertURLStringsToURLs;
-(SFNodeRef)createPersonForAskRequest;
-(BOOL)allowAskRequestFromPerson:(SFNodeRef)arg1 ;
-(BOOL)senderIsMe;
-(void)silentlyCancelRequestOnMainThread;
-(void)sendAskResponse:(long long)arg1 ;
-(void)parseDiscoverRequest;
-(void)handleDiscoverRequest;
-(void)parseAskRequest;
-(void)handleAskRequest;
-(void)handleDiscoverRequestAsync;
-(void)handleAskRequestAsync;
-(id)whereFromInfo;
-(BOOL)startReceivingBody:(CFHTTPServerRequestRef)arg1 error:(id*)arg2 ;
-(void)enqueueBadResponseForRequest:(CFHTTPServerRequestRef)arg1 ;
-(void)makeDestinationDirectory;
-(void)storeRequestValue:(CFHTTPServerRequestRef)arg1 forKey:(CFStringRef)arg2 convertToNumber:(BOOL)arg3 ;
-(BOOL)thereIsEnoughFreeSpace;
-(BOOL)oneHundredContinue:(CFHTTPServerRequestRef)arg1 ;
-(BOOL)startReceivingFile:(CFHTTPServerRequestRef)arg1 error:(id*)arg2 ;
-(void)sendUploadResponse:(long long)arg1 ;
-(long long)getStatusCode:(CFHTTPServerResponseRef)arg1 ;
-(void)storeNumberValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)transferIsOverPrebufferLimit;
-(void)setCombinedFileURLsAndItems:(id)arg1 ;
-(void)didCloseConnection;
-(void)didReceiveError:(CFErrorRef)arg1 ;
-(void)handleReadStreamEvent:(CFReadStreamRef)arg1 event:(unsigned long long)arg2 ;
-(void)didReceiveRequest:(CFHTTPServerRequestRef)arg1 ;
-(void)didSendResponse:(CFHTTPServerResponseRef)arg1 forRequest:(CFHTTPServerRequestRef)arg2 ;
-(void)didFailToSendResponse:(CFHTTPServerResponseRef)arg1 ;
-(void)setProperty:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)setDelegate:(id<SDWormholeConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<SDWormholeConnectionDelegate>)delegate;
-(void)stop;
-(void)start;
-(NSURL *)destination;
-(void)setDestination:(NSURL *)arg1 ;
-(void)schedule;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(BOOL)accept;
-(id)compressionType;
-(void)finishOperation;
-(id)initWithConnection:(CFHTTPServerConnectionRef)arg1 ;
@end


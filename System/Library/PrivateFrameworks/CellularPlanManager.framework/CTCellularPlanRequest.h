/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSArray, NSDictionary, NSMutableData, NSMutableURLRequest, NSURLResponse, NSError, NSURLConnection, NSData, NSString;

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate> {

	int nextConnectionTypeIndex;
	NSArray* _responseCookies;
	NSArray* _requestCookies;
	NSDictionary* _internetSettings;
	NSDictionary* _bootstrapSettings;
	NSMutableData* _receivedData;
	NSMutableURLRequest* _request;
	NSURLResponse* _response;
	NSError* _error;
	dispatch_queue_sRef _queue;
	/*^block*/id _completionBlock;
	NSURLConnection* _connection;

}

@property (nonatomic,retain) NSMutableData * receivedData;               //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) NSData * serializedCookies; 
@property (assign,nonatomic) dispatch_queue_sRef queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completionBlock;                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(id)createSessionRequest;
+(id)plansRequestWithSignIdMap:(id)arg1 renewalIccid:(id)arg2 urls:(id)arg3 ;
+(id)requestHandoffTokenWithSignIdMap:(id)arg1 urls:(id)arg2 ;
+(id)subscriptionDetailsRequestWithIccids:(id)arg1 signIdMap:(id)arg2 urls:(id)arg3 ;
+(id)countryListRequestWithSignIdMap:(id)arg1 urls:(id)arg2 ;
+(id)newInitiatePurchaseWithSessionId:(id)arg1 planId:(id)arg2 ;
+(id)newPurchaseWithSessionId:(id)arg1 receipt:(id)arg2 userId:(id)arg3 userName:(id)arg4 ;
+(id)connectionSettingsForServiceType:(long long)arg1 ;
+(BOOL)isRetriableErrorCode:(long long)arg1 ;
+(void)initialize;
+(void)setRequestUrls:(id)arg1 ;
+(void)setBootstrapConnectionSettings:(id)arg1 ;
+(void)setInternetConnectionSettings:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSMutableURLRequest *)request;
-(NSURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(dispatch_queue_sRef)queue;
-(void)_callback;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
-(NSData *)serializedCookies;
-(void)startRequestWithReplyQueue:(dispatch_queue_sRef)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 internetSettings:(id)arg5 bootstrapSettings:(id)arg6 ;
-(BOOL)_isRetryableError:(id)arg1 ;
-(BOOL)_canTryAnotherConnectionType;
-(id)_connectionSettingsForNextConnectionType;
-(void)_startRequestWithNextConnectionTypeOrFail;
-(id)initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 ;
-(id)initGetWithUrl:(id)arg1 ;
-(id)initPostWithUrl:(id)arg1 ;
-(id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 ;
-(id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 internetSettings:(id)arg3 bootstrapSettings:(id)arg4 ;
-(void)setSerializedCookies:(NSData *)arg1 ;
@end


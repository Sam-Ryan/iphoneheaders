/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSURLSession, NSURLSessionTask;

@interface HLPURLSessionTaskHandlers : NSObject {

	NSMutableArray* _completionHandlers;
	NSURLSession* _session;
	NSURLSessionTask* _sessionTask;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                           //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * sessionTask;                   //@synthesize sessionTask=_sessionTask - In the implementation block
+(id)URLSessionTaskHandlersWithSession:(id)arg1 sessionTask:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSURLSessionTask *)sessionTask;
-(id)initWithSession:(id)arg1 sessionTask:(id)arg2 completionHandler:(id)arg3 ;
-(void)setSessionTask:(NSURLSessionTask *)arg1 ;
@end


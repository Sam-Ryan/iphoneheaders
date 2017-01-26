/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PKWeakReference, PKAuthenticatorEvaluationContext;

@interface PKAuthenticator : NSObject {

	unsigned long long _authenticationIdentifier;
	NSObject*<OS_dispatch_queue> _contextMutationQueue;
	PKWeakReference* _weakDelegate;
	PKAuthenticatorEvaluationContext* _context;
	double _fingerPresentTimeout;

}

@property (assign,nonatomic) id<PKAuthenticatorDelegate> delegate; 
@property (assign,nonatomic) double fingerPresentTimeout;                                //@synthesize fingerPresentTimeout=_fingerPresentTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long authenticationIdentifier; 
@property (nonatomic,readonly) BOOL fingerPresent; 
@property (nonatomic,readonly) BOOL fingerPresentTimeoutRequired; 
@property (nonatomic,readonly) BOOL fingerPresentTimeoutExpired; 
+(id)viewServiceBundleID;
+(unsigned long long)currentStateForPolicy:(long long)arg1 ;
+(void)preheatAuthenticator;
-(void)setDelegate:(id<PKAuthenticatorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKAuthenticatorDelegate>)delegate;
-(id)_context;
-(id)initWithDelegate:(id)arg1 ;
-(void)cancelEvaluation;
-(void)evaluateRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)fingerPresent;
-(BOOL)fingerPresentTimeoutRequired;
-(void)restartEvaluation;
-(void)setFingerPresentTimeout:(double)arg1 preventRestart:(BOOL)arg2 ;
-(unsigned long long)authenticationIdentifier;
-(void)evaluatePolicy:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFingerPresentTimeout:(double)arg1 ;
-(void)fallbackToSystemPasscodeUI;
-(BOOL)_delegateSupportsPasscodePresentation;
-(BOOL)_delegateSupportsPassphrasePresentation;
-(BOOL)fingerPresentTimeoutExpired;
-(void)_contextChanged;
-(id)_swapContext:(id)arg1 ;
-(BOOL)_contextMatchesContext:(id)arg1 ;
-(id)_compareAndSwapWithCompareContext:(id)arg1 replacementContext:(id)arg2 ;
-(double)fingerPresentTimeout;
@end


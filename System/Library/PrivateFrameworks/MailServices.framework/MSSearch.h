/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSXPCService.h>
#import <libobjc.A.dylib/MSDSearchResultsProtocol.h>

@protocol MSSearchDelegate;
@class NSString;

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol> {

	id<MSSearchDelegate> _delegate;

}

@property (assign,nonatomic) id<MSSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUnitTestingResultsArray:(id)arg1 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 delegate:(id)arg5 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 onlyInboxes:(BOOL)arg5 delegate:(id)arg6 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 delegate:(id)arg4 ;
-(void)cancel;
-(void)setDelegate:(id<MSSearchDelegate>)arg1 ;
-(void)dealloc;
-(id<MSSearchDelegate>)delegate;
-(id)_initWithDelegate:(id)arg1 ;
-(void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)foundResults:(id)arg1 error:(id)arg2 ;
-(void)_delegateDidFinishWithError:(id)arg1 ;
-(void)_delegateDidFindResults:(id)arg1 ;
-(BOOL)_unitTestsAreEnabled;
-(id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3 ;
-(void)_generateUnitTestResponsesForResultArray:(id)arg1 ;
@end

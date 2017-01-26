/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchOperation.h>
#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>

@protocol CNCancelable, OS_dispatch_semaphore;
@class NSObject, NSError, CNAutocompleteFetchContext, CNAutocompleteStore, NSString;

@interface MFContactsAutocompleteSearchOperation : MFContactsSearchOperation <CNAutocompleteFetchDelegate> {

	id<CNCancelable> _fetchRequestHandle;
	NSObject*<OS_dispatch_semaphore> _fetchRequestSemaphore;
	NSError* _fetchError;
	BOOL _includeContacts;
	BOOL _includeRecents;
	BOOL _includeSuggestions;
	BOOL _includeServers;
	BOOL _simulateResults;
	CNAutocompleteFetchContext* _fetchContext;
	CNAutocompleteStore* _autocompleteStore;

}

@property (assign,nonatomic) BOOL includeContacts;                                 //@synthesize includeContacts=_includeContacts - In the implementation block
@property (assign,nonatomic) BOOL includeRecents;                                  //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign,nonatomic) BOOL includeSuggestions;                              //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
@property (assign,nonatomic) BOOL includeServers;                                  //@synthesize includeServers=_includeServers - In the implementation block
@property (assign,nonatomic) BOOL simulateResults;                                 //@synthesize simulateResults=_simulateResults - In the implementation block
@property (nonatomic,copy) CNAutocompleteFetchContext * fetchContext;              //@synthesize fetchContext=_fetchContext - In the implementation block
@property (nonatomic,retain) CNAutocompleteStore * autocompleteStore;              //@synthesize autocompleteStore=_autocompleteStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 autocompleteStore:(id)arg6 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)main;
-(void)setAutocompleteStore:(CNAutocompleteStore *)arg1 ;
-(void)setIncludeContacts:(BOOL)arg1 ;
-(void)setIncludeRecents:(BOOL)arg1 ;
-(void)setIncludeServers:(BOOL)arg1 ;
-(void)setIncludeSuggestions:(BOOL)arg1 ;
-(BOOL)simulateResults;
-(id)_simulatedRecipientResults;
-(void)setFetchContext:(CNAutocompleteFetchContext *)arg1 ;
-(CNAutocompleteStore *)autocompleteStore;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)configureForSearchTypes:(unsigned long long)arg1 ;
-(BOOL)includeContacts;
-(BOOL)includeRecents;
-(BOOL)includeSuggestions;
-(BOOL)includeServers;
-(void)setSimulateResults:(BOOL)arg1 ;
-(CNAutocompleteFetchContext *)fetchContext;
@end


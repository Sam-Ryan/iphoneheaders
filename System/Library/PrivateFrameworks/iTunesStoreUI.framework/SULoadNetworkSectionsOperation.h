/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISStoreURLOperation, SUClientInterface, NSString, SUSectionsResponse;

@interface SULoadNetworkSectionsOperation : ISOperation {

	ISStoreURLOperation* _baseOperation;
	SUClientInterface* _clientInterface;
	NSString* _expectedVersionString;
	SUSectionsResponse* _sectionsResponse;

}

@property (retain) ISStoreURLOperation * baseOperation; 
@property (retain) NSString * expectedVersionString; 
@property (readonly) SUSectionsResponse * sectionsResponse; 
-(void)dealloc;
-(void)run;
-(void)_setSectionsResponse:(id)arg1 ;
-(id)initWithURL:(id)arg1 clientInterface:(id)arg2 ;
-(void)setExpectedVersionString:(NSString *)arg1 ;
-(SUSectionsResponse *)sectionsResponse;
-(NSString *)expectedVersionString;
-(BOOL)_loadArtworkForResponse:(id)arg1 ;
-(id)_copyImageWithURL:(id)arg1 scale:(float)arg2 error:(id*)arg3 ;
-(id)_bestItemImageForImages:(id)arg1 withImageKind:(id)arg2 ;
-(id)_copyLoadedItemImage:(id)arg1 error:(id*)arg2 ;
-(ISStoreURLOperation *)baseOperation;
-(void)setBaseOperation:(ISStoreURLOperation *)arg1 ;
@end


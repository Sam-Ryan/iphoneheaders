/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Books/BCPlistProducer.h>

@class NSArray;

@interface BCAddEntriesPlistProducer : BCPlistProducer {

	NSArray* _entries;
	BOOL _replace;

}
-(id)initWithPath:(id)arg1 entries:(id)arg2 ;
-(id)produceData;
-(void)dealloc;
-(void)replace:(BOOL)arg1 ;
-(BOOL)shouldRetry;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {

	int _options;
	NSArray* _components;
	NSArray* _asciiComponents;
	NSData* _wholeSearchStringData;
	NSData* _context;

}
-(BOOL)matches:(id)arg1 ;
-(BOOL)matchesASCIIString:(const char*)arg1 matchType:(int)arg2 ;
-(BOOL)matches:(id)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 ;
-(void)dealloc;
-(BOOL)matchesUTF8String:(const char*)arg1 ;
-(id)initWithSearchString:(id)arg1 options:(int)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3 ;
@end


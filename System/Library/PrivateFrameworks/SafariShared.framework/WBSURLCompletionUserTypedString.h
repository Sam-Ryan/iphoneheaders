/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject {

	NSString* _string;
	const unsigned short* _unichars;
	const char* _chars;
	int _length;
	BOOL _containsAnySpaces;
	BOOL _ownsUnichars;
	BOOL _ownsChars;

}

@property (nonatomic,readonly) NSString * normalizedString;              //@synthesize string=_string - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(NSString *)normalizedString;
@end


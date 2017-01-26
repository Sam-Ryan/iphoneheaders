/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@class NSString;

@interface SLAbsintheSigningSession : NSObject {

	NACContextOpaque_Ref _context;
	NSString* _certURL;
	NSString* _sessionURL;

}
-(void)dealloc;
-(id)_urlEncodedString:(id)arg1 ;
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(BOOL)establish;
-(id)signatureForData:(id)arg1 ;
@end


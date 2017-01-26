/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSURL;

@interface MFMixedMessageFragment : NSObject {

	NSString* _markupString;
	NSData* _markupData;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSURL* _baseURL;

}
-(void)dealloc;
-(id)description;
-(id)mimeType;
-(id)baseURL;
-(id)initWithMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
-(id)markupString;
-(id)markupData;
-(id)encodingName;
@end


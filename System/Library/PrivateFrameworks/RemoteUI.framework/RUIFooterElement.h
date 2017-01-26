/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class NSString, NSURL;

@interface RUIFooterElement : RUIElement {

	NSString* _text;
	NSURL* _linkURL;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSURL * linkURL;              //@synthesize linkURL=_linkURL - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSURL *)linkURL;
-(void)setLinkURL:(NSURL *)arg1 ;
-(void)configureView:(id)arg1 ;
@end


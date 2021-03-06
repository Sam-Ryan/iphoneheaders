/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFComposeTypeFactoryDelegate <NSObject>
@optional
-(void)addSignature:(BOOL)arg1;

@required
-(id)attachments;
-(id)subject;
-(void)setSubject:(id)arg1;
-(id)sendingEmailAddress;
-(id)sendingAccountProxy;
-(id)bodyField;
-(id)toRecipients;
-(id)ccRecipients;
-(id)savedHeaders;
-(void)setCcRecipients:(id)arg1;
-(void)setBccRecipients:(id)arg1;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
-(BOOL)shouldCreateRichTextRepresentation;
-(id)bccRecipients;
-(id)accountProxyGenerator;
-(void)setSavedHeaders:(id)arg1;
-(BOOL)hasAnyHiddenTrailingEmptyQuote;
-(void)setToRecipients:(id)arg1;

@end


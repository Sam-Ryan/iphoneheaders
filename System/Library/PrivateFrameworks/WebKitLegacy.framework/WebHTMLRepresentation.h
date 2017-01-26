/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebDocumentRepresentation.h>
#import <WebKitLegacy/WebDocumentDOM.h>

@class WebHTMLRepresentationPrivate, NSString;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {

	WebHTMLRepresentationPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedMIMETypes;
+(id)supportedNonImageMIMETypes;
+(id)supportedMediaMIMETypes;
+(id)supportedImageMIMETypes;
+(id)unsupportedTextMIMETypes;
-(void)receivedData:(id)arg1 withDataSource:(id)arg2 ;
-(void)receivedError:(id)arg1 withDataSource:(id)arg2 ;
-(void)finishedLoadingWithDataSource:(id)arg1 ;
-(BOOL)canProvideDocumentSource;
-(id)documentSource;
-(void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2 ;
-(BOOL)_isDisplayingWebArchive;
-(id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned long long*)arg3 resultIsInCellAbove:(BOOL*)arg4 ;
-(BOOL)canSaveAsWebArchive;
-(id)elementWithName:(id)arg1 inForm:(id)arg2 ;
-(BOOL)elementDoesAutoComplete:(id)arg1 ;
-(BOOL)elementIsPassword:(id)arg1 ;
-(id)formForElement:(id)arg1 ;
-(id)currentForm;
-(id)controlsInForm:(id)arg1 ;
-(id)searchForLabels:(id)arg1 beforeElement:(id)arg2 ;
-(id)matchLabels:(id)arg1 againstElement:(id)arg2 ;
-(void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)title;
-(id)DOMDocument;
-(void)finalize;
@end


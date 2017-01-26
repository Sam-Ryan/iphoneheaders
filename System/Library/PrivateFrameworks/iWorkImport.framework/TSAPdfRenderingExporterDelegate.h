/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporterDelegate.h>

@class TSARenderingExporter, NSString;

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {

	TSARenderingExporter* mRenderingExporter;
	NSString* mPassphraseOpen;
	NSString* mPassphrasePrintCopy;
	BOOL mRequireOpenPassword;
	BOOL mRequireCopyPassword;
	BOOL mRequirePrintPassword;
	int mRenderingQuality;

}
-(void)setPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setPrintPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setCopyPassphrase:(id)arg1 hint:(id)arg2 ;
-(double)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1 ;
-(void)releaseCGContext:(CGContextRef)arg1 ;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(int)renderingQuality;
-(id)initWithRenderingExporter:(id)arg1 ;
-(void)setRenderingQuality:(int)arg1 ;
-(void)dealloc;
-(void)setup;
-(void)teardown;
@end


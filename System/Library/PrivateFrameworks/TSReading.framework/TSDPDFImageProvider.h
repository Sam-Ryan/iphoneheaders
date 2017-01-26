/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDImageProvider.h>

@interface TSDPDFImageProvider : TSDImageProvider {

	CGPDFDocumentRef mPDFDocument;
	CGSize mNaturalSize;

}
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)p_loadIfNecessary;
-(CGPDFDocumentRef)p_load;
-(long long)pageAngle;
-(void)dealloc;
-(void)flush;
-(BOOL)isValid;
-(CGSize)naturalSize;
-(CGPDFDocumentRef)CGPDFDocument;
-(BOOL)hasFlushableContent;
@end


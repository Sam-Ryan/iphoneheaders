/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUImageDownsamplingUtilities : NSObject
+(id)_uniqueTemporaryDirectory;
+(id)_preferredFileExtensionForContentType:(id)arg1 ;
+(id)_sourceContentType:(id)arg1 ;
+(BOOL)_shouldDownsampleSourceContent:(id)arg1 ;
+(id)_downsampleSourceContentToDisk:(id)arg1 contentUTI:(id)arg2 ;
+(id)_preferredFileDisplayNameForSourceContent:(id)arg1 ;
+(CGImageSourceRef)_newImageSourceWithSourceContent:(id)arg1 ;
+(double)_maxDimensionOfSize:(CGSize)arg1 fittingToArea:(double)arg2 ;
+(CGSize)_sizeFittingArea:(double)arg1 withSize:(CGSize)arg2 ;
@end


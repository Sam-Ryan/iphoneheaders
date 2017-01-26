/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUImage.h>

@class UIImage, TSUUIImageAutoreleasePoolGuard;

@interface OITSUUIImage : OITSUImage {

	UIImage* mUIImage;
	TSUUIImageAutoreleasePoolGuard* mGuard;

}
+(id)imageNamed:(id)arg1 ;
+(void)i_performBlockWithUIImageLock:(/*^block*/id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)UIImage;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(id)p_initWithUIImage:(id)arg1 needsGuard:(BOOL)arg2 ;
@end


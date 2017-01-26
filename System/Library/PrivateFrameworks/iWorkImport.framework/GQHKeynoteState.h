/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHState.h>

@interface GQHKeynoteState : GQHState {

	int mCurrentSlide;
	CGSize mSlideSize;
	int mProgressiveIndex;

}
-(BOOL)shouldMapLinkWithUrl:(CFStringRef)arg1 ;
-(void)setProgressiveIndex:(int)arg1 ;
-(void)incrementCurrentSlide;
-(BOOL)shouldStreamContent;
-(int)progressiveIndex;
-(int)currentSlide;
-(CGSize)slideSize;
-(void)setSlideSize:(CGSize)arg1 ;
@end


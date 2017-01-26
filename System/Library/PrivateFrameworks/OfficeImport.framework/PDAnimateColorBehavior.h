/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {

	BOOL mHasBy;
	double mBy[3];
	BOOL mHasFrom;
	OADColor* mFrom;
	BOOL mHasTo;
	OADColor* mTo;
	BOOL mHasColorSpace;
	int mColorSpace;
	BOOL mHasColorDirection;
	int mDirection;

}
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(BOOL)hasTo;
-(void)setTo:(id)arg1 ;
-(void)setFrom:(id)arg1 ;
-(id)to;
-(BOOL)hasFrom;
-(id)from;
-(double*)by;
-(void)setBy:(double)arg1 ;
-(BOOL)hasBy;
-(BOOL)hasColorSpace;
-(int)colorSpace;
-(void)setColorSpace:(int)arg1 ;
-(BOOL)hasColorDirection;
@end


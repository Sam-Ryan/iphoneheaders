/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject {

	BOOL mIsEscher;
	NSMutableDictionary* mAdjustValues;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(int)type;
-(id)adjustValues;
-(id)equivalentCustomGeometry;
-(BOOL)isEscher;
-(int)adjustValueAtIndex:(unsigned)arg1 ;
-(void)setIsEscher:(BOOL)arg1 ;
-(unsigned long long)adjustValueCount;
-(BOOL)hasAdjustValueAtIndex:(unsigned)arg1 ;
-(void)setAdjustValue:(int)arg1 atIndex:(unsigned)arg2 ;
@end


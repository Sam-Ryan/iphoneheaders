/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/MFPBrush.h>

@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {

	OITSUColor* mColor;

}
-(void)dealloc;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(void)fillPath:(id)arg1 evenOddRule:(BOOL)arg2 ;
@end


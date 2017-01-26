/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSSStyle;

@interface TSCHStyleAndPropertyPair : NSObject <NSCopying> {

	TSSStyle* mStyle;
	int mProperty;

}
+(id)pairWithStyle:(id)arg1 property:(int)arg2 ;
-(id)initWithStyle:(id)arg1 property:(int)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)property;
@end


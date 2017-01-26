/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <Foundation/NSString.h>

@interface PLUUIDString : NSString {

	unsigned char _uuid[16];
	char _uuidString[37];

}
+(id)UUIDString;
-(const char*)UTF8String;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)init;
-(unsigned long long)length;
-(id)initWithUUID:(unsigned char)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)UUIDData;
-(id)initWithUUIDData:(id)arg1 ;
-(SCD_Struct_PL2)UUIDBytes;
-(id)initWithCFUUIDBytes:(SCD_Struct_PL2)arg1 ;
@end


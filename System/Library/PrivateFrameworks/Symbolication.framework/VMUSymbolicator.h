/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUSymbolicator : NSObject {

	CSTypeRef _symbolicator;

}
+(id)symbolicatorForTask:(unsigned)arg1 ;
+(id)symbolicatorForPid:(int)arg1 ;
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 ;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
-(id)symbolForAddress:(unsigned long long)arg1 ;
@end


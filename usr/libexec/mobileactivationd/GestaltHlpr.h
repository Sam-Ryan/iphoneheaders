/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:25 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/mobileactivationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <mobileactivationd/mobileactivationd-Structs.h>
@interface GestaltHlpr : NSObject
+(id)getSharedInstance;
-(id)copyAnswer:(CFStringRef)arg1 ;
-(void)updateRecertInfo:(id)arg1 storebag_recert:(BOOL)arg2 errors:(id*)arg3 ;
-(id)copyDeviceIDInfo:(id*)arg1 ;
-(id)copyDeviceInfo:(id*)arg1 ;
-(id)copyBasebandRequestInfo:(id*)arg1 ;
-(void)addAGestaltKey:(CFStringRef)arg1 toDictionary:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(BOOL)getBoolAnswer:(CFStringRef)arg1 ;
@end


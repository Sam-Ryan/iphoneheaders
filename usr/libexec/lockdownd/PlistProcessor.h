/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:25 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/lockdownd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PlistProcessor : NSObject
+(id)sharedPlistProcessor;
-(void)scanPlistsAtPath:(id)arg1 execBlock:(/*^block*/id)arg2 ;
-(id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2 ;
-(BOOL)verifyPlist:(id)arg1 forMountPoint:(id)arg2 ;
@end


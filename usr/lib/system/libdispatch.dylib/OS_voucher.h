/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:10:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/system/libdispatch.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libdispatch.dylib/OS_object.h>
#import <libobjc.A.dylib/OS_voucher.h>

@protocol OS_voucher <NSObject>
@end


@class NSString;

@interface OS_voucher : OS_object <OS_voucher>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(void)_xref_dispose;
-(void)_dispose;
-(id)init;
-(NSString *)debugDescription;
@end

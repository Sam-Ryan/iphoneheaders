/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFLock : NSLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)lock;
-(void)unlock;
-(BOOL)isLockedByMe;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionRequestedReplies : NSObject {

	CFDictionaryRef _replyTable;
	int _lock;

}
-(void)addSequence:(unsigned long long)arg1 withProgress:(id)arg2 cleanupBlock:(/*^block*/id)arg3 ;
-(BOOL)removeSequence:(unsigned long long)arg1 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(void)finalize;
@end


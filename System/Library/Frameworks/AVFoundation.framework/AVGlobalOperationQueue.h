/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSArray;

@interface AVGlobalOperationQueue : NSObject {

	NSOperationQueue* _operationQueue;

}

@property (copy,readonly) NSArray * unfinishedOperations; 
+(id)defaultQueue;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSArray *)unfinishedOperations;
-(void)enqueueOperation:(id)arg1 ;
@end


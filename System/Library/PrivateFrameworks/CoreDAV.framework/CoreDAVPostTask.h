/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@interface CoreDAVPostTask : CoreDAVPostOrPutTask

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4 ;
-(id)httpMethod;
@end


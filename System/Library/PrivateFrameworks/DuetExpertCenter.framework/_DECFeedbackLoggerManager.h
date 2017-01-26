/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DECFeedbackLogger.h>

@class NSArray, NSString;

@interface _DECFeedbackLoggerManager : NSObject <_DECFeedbackLogger> {

	NSArray* _loggers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)_createLoggers;
-(void)logForExpert:(id)arg1 feedback:(id)arg2 category:(unsigned long long)arg3 consumer:(unsigned long long)arg4 ;
@end


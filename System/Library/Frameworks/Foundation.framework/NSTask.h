/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSArray, NSDictionary;

@interface NSTask : NSObject

@property (copy) NSString * launchPath; 
@property (copy) NSArray * arguments; 
@property (copy) NSDictionary * environment; 
@property (copy) NSString * currentDirectoryPath; 
@property (retain) id standardInput; 
@property (retain) id standardOutput; 
@property (retain) id standardError; 
@property (readonly) int processIdentifier; 
@property (getter=isRunning,readonly) BOOL running; 
@property (readonly) int terminationStatus; 
@property (readonly) long long terminationReason; 
@property (copy) id terminationHandler; 
@property (assign) long long qualityOfService; 
+(id)currentTaskDictionary;
+(id)launchedTaskWithDictionary:(id)arg1 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSString *)currentDirectoryPath;
-(long long)qualityOfService;
-(void)setArguments:(NSArray *)arg1 ;
-(int)terminationStatus;
-(long long)terminationReason;
-(void)launch;
-(void)setCurrentDirectoryPath:(NSString *)arg1 ;
-(void)setLaunchPath:(NSString *)arg1 ;
-(void)interrupt;
-(long long)suspendCount;
-(NSString *)launchPath;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(id)init;
-(NSDictionary *)environment;
-(BOOL)suspend;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)resume;
-(BOOL)isRunning;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)setTerminationHandler:(id)arg1 ;
-(int)processIdentifier;
-(id)terminationHandler;
-(NSArray *)arguments;
-(void)terminate;
@end


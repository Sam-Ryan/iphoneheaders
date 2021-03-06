/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ML3DatabaseValidationClient : NSObject {

	NSMutableDictionary* _validatableDatabases;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedClient;
-(id)init;
-(BOOL)validateDatabaseForLibrary:(id)arg1 ;
-(BOOL)_validateDatabaseForPath:(id)arg1 usingLibrary:(id)arg2 ;
-(id)_validatableDatabaseForPath:(id)arg1 ;
-(BOOL)validateDatabaseAtPath:(id)arg1 ;
-(BOOL)validateDatabaseForConnection:(id)arg1 ;
-(BOOL)isValidatingDatabaseForPath:(id)arg1 ;
@end


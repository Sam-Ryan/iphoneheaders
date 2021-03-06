/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
@class NSString, NSArray;

@interface _SSBServiceStatus : NSObject {

	ServiceStatus* _serviceStatus;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) int processIdentifier; 
@property (nonatomic,copy,readonly) NSArray * activeTransactions; 
@property (nonatomic,readonly) unsigned long long databaseUpdaterState; 
@property (nonatomic,readonly) unsigned long long connectionCount; 
-(NSString *)name;
-(int)processIdentifier;
-(unsigned long long)connectionCount;
-(NSArray *)activeTransactions;
-(id)initWithServiceStatus:(ServiceStatus*)arg1 ;
-(unsigned long long)databaseUpdaterState;
-(int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
@end


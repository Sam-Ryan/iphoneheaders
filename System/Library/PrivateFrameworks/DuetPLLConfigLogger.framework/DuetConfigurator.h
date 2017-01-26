/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetPLLConfigLogger/DuetPLLConfigLogger-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>

@class NSBundle, NSMutableDictionary, NSMutableArray, NSUserDefaults;

@interface DuetConfigurator : NSObject <DuetLoggerProtocol> {

	NSBundle* bundle;
	NSMutableDictionary* dictOfConfigurations;
	NSMutableDictionary* appBlackMap;
	NSMutableArray* appWhiteListArray;
	NSUserDefaults* sbDomain;
	NSUserDefaults* bkbdDDomain;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * appBlackMap; 
@property (nonatomic,retain,readonly) NSMutableArray * appWhiteListArray; 
+(id)sharedInstance;
-(id)init;
-(void)loadBundleConfigurations;
-(id)getNSNumberFor:(id)arg1 ;
-(void)loadConfigurations:(id)arg1 ;
-(void)updateSpringBoardConfiguration:(id)arg1 ;
-(long long)getInt64For:(id)arg1 ;
-(NSMutableArray *)appWhiteListArray;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)reloadBundleFromDisk;
-(double)getDoubleFor:(id)arg1 ;
-(NSMutableDictionary *)appBlackMap;
@end


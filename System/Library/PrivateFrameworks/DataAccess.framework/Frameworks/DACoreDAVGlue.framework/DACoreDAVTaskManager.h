/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DATaskManager.h>
#import <libobjc.A.dylib/CoreDAVTaskManager.h>

@class NSRunLoop, NSMutableSet, NSString;

@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager> {

	NSMutableSet* _applicationsShowingActivity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
-(void)dealloc;
-(void)submitIndependentCoreDAVTask:(id)arg1 ;
-(void)coreDAVTaskDidFinish:(id)arg1 ;
-(void)coreDAVTaskEndModal:(id)arg1 ;
-(void)coreDAVTaskRequestModal:(id)arg1 ;
-(void)_updateSpinner:(BOOL)arg1 ;
-(NSRunLoop *)workRunLoop;
-(void)setWorkRunLoop:(NSRunLoop *)arg1 ;
-(void)taskManagerDidAddTask:(id)arg1 ;
-(void)taskManagerWillRemoveTask:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)submitQueuedCoreDAVTask:(id)arg1 ;
@end


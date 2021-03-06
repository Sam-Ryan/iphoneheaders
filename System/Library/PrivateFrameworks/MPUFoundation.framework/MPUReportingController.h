/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface MPUReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _childReportingControllers;
	MPUReportingController* _parentReportingController;

}

@property (nonatomic,copy,readonly) NSArray * childReportingControllers; 
@property (assign,nonatomic,__weak) MPUReportingController * parentReportingController; 
-(id)init;
-(void)_recordReportingEvents:(id)arg1 ;
-(void)recordReportingEvents:(id)arg1 ;
-(void)setParentReportingController:(MPUReportingController *)arg1 ;
-(MPUReportingController *)parentReportingController;
-(NSArray *)childReportingControllers;
-(void)addChildReportingController:(id)arg1 ;
-(void)removeChildReportingController:(id)arg1 ;
@end


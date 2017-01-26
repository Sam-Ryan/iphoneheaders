/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CDD, NSMutableArray, NSObject;

@interface CDDAdmissionCheckQueue : NSObject {

	CDD* cdd;
	NSMutableArray* _queuePriorities;
	NSMutableArray* _queueValues;
	NSMutableArray* _queueHashes;
	NSMutableArray* _queueTimeStamps;
	NSObject*<OS_dispatch_queue> _dQueue;

}
-(id)initWithCDDinstance:(id)arg1 ;
-(id)listAllValuesWithTimeStampGreaterThan:(double)arg1 ;
-(BOOL)containsValuesWithTimeStampGreaterThan:(id)arg1 atPriority:(id)arg2 timestamp:(double)arg3 ;
-(void)queueDeniedValues:(id)arg1 atPriority:(id)arg2 allowUnique:(BOOL)arg3 ;
-(void)deleteValues:(id)arg1 atPriority:(id)arg2 ;
-(BOOL)containsValuesWithTimeStampGreaterThan:(double)arg1 ;
-(void)saveState;
-(void)restoreState;
@end


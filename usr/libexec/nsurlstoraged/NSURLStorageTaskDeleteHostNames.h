/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/nsurlstoraged
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nsurlstoraged/NSURLStorageTask.h>

@class NSString, NSArray;

@interface NSURLStorageTaskDeleteHostNames : NSURLStorageTask {

	NSString* _partition;
	NSArray* _hostNames;

}
-(id)initWithHostNames:(id)arg1 optionalPartition:(id)arg2 andTaskManager:(id)arg3 ;
-(void)run;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface PFCoalescerActivityToken : NSObject {

	NSObject*<OS_dispatch_group> _group;

}

@property (retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
-(void)dealloc;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(void)endActivity;
-(id)initWithDispatchGroup:(id)arg1 ;
@end


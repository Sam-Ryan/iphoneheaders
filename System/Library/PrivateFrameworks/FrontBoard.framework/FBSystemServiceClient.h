/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBProcess;


@protocol FBSystemServiceClient <NSObject>
@property (nonatomic,readonly) int pid; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,retain,readonly) FBProcess * process; 
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,retain) id<FBSystemServiceFacilityClient> facilityClient; 
@required
-(BOOL)isSuspended;
-(NSObject*<OS_xpc_object>)connection;
-(int)pid;
-(FBProcess *)process;
-(id<FBSystemServiceFacilityClient>)facilityClient;
-(void)setFacilityClient:(id)arg1;

@end


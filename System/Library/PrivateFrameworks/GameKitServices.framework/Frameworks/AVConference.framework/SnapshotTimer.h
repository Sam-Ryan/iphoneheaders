/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SnapshotTimer : NSObject {

	BOOL taskIsComplete;

}

@property (assign,nonatomic) BOOL taskIsComplete; 
+(void)takeSnapshotForTask:(id)arg1 ;
-(id)init;
-(void)checkinWithTimeout:(double)arg1 forTask:(id)arg2 ;
-(void)checkout;
-(BOOL)taskIsComplete;
-(void)setTaskIsComplete:(BOOL)arg1 ;
@end


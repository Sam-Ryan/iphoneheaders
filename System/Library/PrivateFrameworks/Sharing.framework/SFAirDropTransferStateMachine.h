/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFStateMachine.h>

@interface SFAirDropTransferStateMachine : SFStateMachine {

	BOOL _restoring;

}

@property (assign,nonatomic) BOOL restoring;              //@synthesize restoring=_restoring - In the implementation block
-(id)init;
-(void)setRestoring:(BOOL)arg1 ;
-(BOOL)restoring;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
@end


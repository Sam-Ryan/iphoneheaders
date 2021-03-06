/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GKStateMachineDelegate;
@class NSString, NSDictionary;

@interface _GKStateMachine : NSObject {

	int _lock;
	NSString* _currentState;
	NSDictionary* _validTransitions;
	id<_GKStateMachineDelegate> _delegate;
	BOOL _shouldLogStateTransitions;

}

@property (retain) NSString * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (assign) id<_GKStateMachineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(void)setDelegate:(id<_GKStateMachineDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_GKStateMachineDelegate>)delegate;
-(NSString *)currentState;
-(void)setCurrentState:(NSString *)arg1 ;
-(BOOL)_setCurrentState:(id)arg1 ;
-(BOOL)shouldLogStateTransitions;
-(id)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(NSDictionary *)validTransitions;
-(BOOL)applyState:(id)arg1 ;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)setValidTransitions:(NSDictionary *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreIRLearningSession.h>

@class CoreRCManagerClient;

@interface CoreIRLearningSessionClient : CoreIRLearningSession {

	CoreRCManagerClient* _manager;

}

@property (assign,nonatomic) CoreRCManagerClient * manager;              //@synthesize manager=_manager - In the implementation block
-(CoreRCManagerClient *)manager;
-(BOOL)startLearningCommand:(unsigned long long)arg1 ;
-(void)endLearning;
-(void)setManager:(CoreRCManagerClient *)arg1 ;
@end


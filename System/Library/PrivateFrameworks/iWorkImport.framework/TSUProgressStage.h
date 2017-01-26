/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUProgressContext;

@interface TSUProgressStage : NSObject {

	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	double m_startInParent;
	double m_nextSubStageParentSize;
	TSUProgressStage* m_parentStage;
	TSUProgressContext* m_context;

}
-(void)dealloc;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(void)end;
-(id)initRootStageInContext:(id)arg1 ;
-(id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3 ;
-(double)nextSubStageParentSize;
-(void)setNextSubStageParentSize:(double)arg1 ;
-(id)parentStage;
-(void)advanceProgress:(double)arg1 ;
-(void)setProgressPercentage:(double)arg1 ;
-(double)currentPosition;
-(double)overallProgress;
@end


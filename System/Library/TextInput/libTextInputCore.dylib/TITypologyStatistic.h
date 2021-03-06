/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TITypologyStatistic : NSObject

@property (nonatomic,readonly) NSDictionary * structuredReport; 
+(id)statistic;
-(void)visitRecordHitTest:(id)arg1 ;
-(void)visitRecordSkipHitTest:(id)arg1 ;
-(void)visitRecordPhraseBoundaryAdjustment:(id)arg1 ;
-(void)visitRecordReplacements:(id)arg1 ;
-(void)visitRecordRefinements:(id)arg1 ;
-(void)visitRecordAutocorrections:(id)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)finalizeComputation;
-(void)visitRecordCandidateResultSet:(id)arg1 ;
-(void)prepareForComputation;
-(void)visitTypologyRecord:(id)arg1 ;
-(void)visitRecordSync:(id)arg1 ;
-(void)visitTypologyRecords:(id)arg1 ;
-(void)visitRecordAcceptedCandidate:(id)arg1 ;
-(void)visitRecordLastAcceptedCandidateCorrected:(id)arg1 ;
-(NSDictionary *)structuredReport;
-(void)visitRecordSetOriginalInput:(id)arg1 ;
-(void)visitRecordTextAccepted:(id)arg1 ;
-(void)visitRecordCandidateRejected:(id)arg1 ;
@end


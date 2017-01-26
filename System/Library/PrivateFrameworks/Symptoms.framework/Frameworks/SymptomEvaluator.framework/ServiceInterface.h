/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ServiceInterface
@required
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4;
-(void)identifierForUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 reply:(/*^block*/id)arg5;
-(void)setOption:(id)arg1 inScopes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 inScopes:(id)arg3 reply:(/*^block*/id)arg4;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5;
-(void)unsubscribeToNOIs:(id)arg1;
-(void)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setUsageOption:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resetUsageFor:(id)arg1 nameKind:(id)arg2 reply:(/*^block*/id)arg3;

@end


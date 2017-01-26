/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol SyndromeHandlerProtocol;
@class NSMutableArray, NSString;

@interface SimpleSyndromeHandler : NSObject <ConfigurableObjectProtocol> {

	double lastReportTime;
	id<SyndromeHandlerProtocol> _nextStage;
	double _lastReportTime;
	NSMutableArray* _resetSources;
	unsigned _dampeningInterval;
	unsigned _dampeningStart;
	unsigned _dampeningIncrement;
	unsigned _dampeningMax;
	NSString* _syndromeName;
	const char* _syndromeUTF8Name;

}

@property (nonatomic,readonly) NSString * syndromeName;                 //@synthesize syndromeName=_syndromeName - In the implementation block
@property (assign,nonatomic) const char* syndromeUTF8Name;              //@synthesize syndromeUTF8Name=_syndromeUTF8Name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithName:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
+(void)setDefaultNextStage:(id)arg1 ;
-(NSString *)description;
-(void)_reset:(id)arg1 ;
-(BOOL)_setName:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)didReceiveSyndrome:(id)arg1 ;
-(NSString *)syndromeName;
-(const char*)syndromeUTF8Name;
-(void)setSyndromeUTF8Name:(const char*)arg1 ;
@end


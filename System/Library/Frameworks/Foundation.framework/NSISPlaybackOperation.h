/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSISVariableDelegate.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate> {

	NSMutableDictionary* oldIdentsToNewVariables;
	NSMutableSet* variablesToIntegralize;
	NSMutableSet* userObservableVariables;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)unwrapVariable:(id)arg1 ;
-(id)unwrapLinearExpression:(id)arg1 ;
-(void)playbackOneAction:(id)arg1 onEngine:(id)arg2 ;
-(double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)firstItem;
-(id)secondItem;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
@end


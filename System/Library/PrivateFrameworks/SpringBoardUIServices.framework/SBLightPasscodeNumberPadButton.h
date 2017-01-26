/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPadLightStyleButton.h>
#import <libobjc.A.dylib/SBUIPasscodeNumberPadButton.h>

@class NSString;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultSize;
+(UIEdgeInsets)paddingOutsideRing;
+(double)_numberPadButtonOuterCircleDiameter;
-(id)initForCharacter:(unsigned)arg1 ;
-(id)stringCharacter;
-(int)characterType;
@end


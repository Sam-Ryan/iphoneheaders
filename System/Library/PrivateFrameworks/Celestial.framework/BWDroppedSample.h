/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString;

@interface BWDroppedSample : NSObject {

	NSString* _reason;
	SCD_Struct_BW2 _pts;

}

@property (readonly) NSString * reason; 
@property (readonly) SCD_Struct_BW2 pts; 
+(id)newDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW2)arg2 ;
-(void)dealloc;
-(NSString *)reason;
-(SCD_Struct_BW2)pts;
-(id)_initDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW2)arg2 ;
@end


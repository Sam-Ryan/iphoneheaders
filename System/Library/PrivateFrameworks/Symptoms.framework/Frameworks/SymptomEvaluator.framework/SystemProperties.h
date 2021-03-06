/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SystemProperties : NSObject {

	BOOL _lowEndHardware;
	BOOL _internalBuild;
	NSString* _buildVersion;

}

@property (readonly) BOOL lowEndHardware;                  //@synthesize lowEndHardware=_lowEndHardware - In the implementation block
@property (readonly) BOOL internalBuild;                   //@synthesize internalBuild=_internalBuild - In the implementation block
@property (readonly) NSString * buildVersion;              //@synthesize buildVersion=_buildVersion - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)description;
-(NSString *)buildVersion;
-(BOOL)internalBuild;
-(BOOL)lowEndHardware;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface TRDeviceSetupAction : NSObject {

	NSString* _actionType;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NSString * actionType;                  //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)actionWithData:(id)arg1 error:(id*)arg2 supportsLegacy:(BOOL)arg3 ;
+(id)actionWithActionType:(id)arg1 parameters:(id)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)init;
-(id)description;
-(NSDictionary *)parameters;
-(id)propertyListRepresentation;
-(NSString *)actionType;
-(id)_initWithActionType:(id)arg1 parameters:(id)arg2 ;
@end


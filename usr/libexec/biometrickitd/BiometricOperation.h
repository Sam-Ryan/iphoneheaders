/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/biometrickitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, BiometricKitXPCExportedObject;

@interface BiometricOperation : NSObject {

	int _operationType;
	int _operationStatus;
	long long _operationPriority;
	NSDictionary* _params;
	BiometricKitXPCExportedObject* _clientObject;

}

@property (assign,nonatomic) int operationType;                                         //@synthesize operationType=_operationType - In the implementation block
@property (assign,nonatomic) long long operationPriority;                               //@synthesize operationPriority=_operationPriority - In the implementation block
@property (nonatomic,retain) NSDictionary * params;                                     //@synthesize params=_params - In the implementation block
@property (nonatomic,retain) BiometricKitXPCExportedObject * clientObject;              //@synthesize clientObject=_clientObject - In the implementation block
@property (assign,nonatomic) int operationStatus;                                       //@synthesize operationStatus=_operationStatus - In the implementation block
-(void)setParams:(NSDictionary *)arg1 ;
-(BiometricKitXPCExportedObject *)clientObject;
-(void)setClientObject:(BiometricKitXPCExportedObject *)arg1 ;
-(int)operationStatus;
-(void)setOperationStatus:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setOperationType:(int)arg1 ;
-(int)operationType;
-(NSDictionary *)params;
-(long long)operationPriority;
-(void)setOperationPriority:(long long)arg1 ;
@end


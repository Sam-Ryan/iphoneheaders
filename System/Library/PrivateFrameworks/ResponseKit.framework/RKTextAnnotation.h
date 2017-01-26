/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@interface RKTextAnnotation : NSObject {

	BOOL _machineGenerated;
	unsigned long long _type;
	NSRange _range;

}

@property (assign) NSRange range;                        //@synthesize range=_range - In the implementation block
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign) BOOL machineGenerated;                //@synthesize machineGenerated=_machineGenerated - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 andType:(unsigned long long)arg2 machineGenerated:(BOOL)arg3 ;
-(BOOL)machineGenerated;
-(void)setMachineGenerated:(BOOL)arg1 ;
@end


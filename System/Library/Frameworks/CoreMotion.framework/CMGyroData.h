/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMGyroData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM3 rotationRate; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRotationRate:(SCD_Struct_CM1)arg1 andTimestamp:(double)arg2 ;
-(SCD_Struct_CM3)rotationRate;
@end


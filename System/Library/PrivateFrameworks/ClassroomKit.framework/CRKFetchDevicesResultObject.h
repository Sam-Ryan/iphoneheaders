/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchDevicesResultObject : CATTaskResultObject {

	NSArray* _connectedDevices;

}

@property (nonatomic,copy) NSArray * connectedDevices;              //@synthesize connectedDevices=_connectedDevices - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)connectedDevices;
-(void)setConnectedDevices:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CoreRCBusDelegate;
@class CoreRCManager, NSUUID, NSMutableSet, NSSet;

@interface CoreRCBus : NSObject <NSCopying, NSSecureCoding> {

	id<CoreRCBusDelegate> _delegate;
	CoreRCManager* _manager;
	unsigned _assertionID;
	NSUUID* _uniqueID;
	NSMutableSet* _devicesInternal;

}

@property (nonatomic,readonly) NSSet * devices; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue; 
@property (nonatomic,readonly) NSUUID * uniqueID;                                     //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL allowHibernation; 
@property (nonatomic,readonly) NSMutableSet * devicesInternal;                        //@synthesize devicesInternal=_devicesInternal - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)manager;
-(void)addDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)didRemoveDevice:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSUUID *)uniqueID;
-(id)mergeDevice:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)propertyForKey:(id)arg1 error:(id*)arg2 ;
-(void)removeDevice:(id)arg1 ;
-(void)willAddToManager:(id)arg1 ;
-(void)didAddDevice:(id)arg1 ;
-(BOOL)setAllowHibernation:(BOOL)arg1 error:(id*)arg2 ;
-(void)willRemoveDevice:(id)arg1 ;
-(id)initWithBus:(id)arg1 ;
-(void)didUpdateProperties:(id)arg1 ;
-(id)mergeProperties;
-(id)deviceOnBusEquivalentTo:(id)arg1 ;
-(void)notifyDelegateDeviceUpdated:(id)arg1 ;
-(void)didAddToManager:(id)arg1 ;
-(void)willRemoveFromManager:(id)arg1 ;
-(void)didRemoveFromManager:(id)arg1 ;
-(void)removeAllDevices;
-(void)mergePropertiesFromBus:(id)arg1 ;
-(NSMutableSet *)devicesInternal;
-(int)_allowSleep;
-(void)willAddDevice:(id)arg1 ;
-(void)notifyDelegateDeviceAdded:(id)arg1 ;
-(void)notifyDelegateDeviceRemoved:(id)arg1 ;
-(void)notifyDelegateAllDevicesRemoved:(id)arg1 ;
-(int)_preventSleep;
-(void)replaceDevice:(id)arg1 withDevice:(id)arg2 ;
-(BOOL)allowHibernation;
-(NSSet *)devices;
-(void)setManager:(id)arg1 ;
@end


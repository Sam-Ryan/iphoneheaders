/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKPeripheralAvailabilityManager_iOS : NSObject {

	IOHIDManagerRef stylusHidManager;
	unsigned long long _currentAvailability;

}

@property (assign) unsigned long long currentAvailability;              //@synthesize currentAvailability=_currentAvailability - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stopMonitoringForPeripheralConnection;
-(void)postConnectionStatusNotification;
-(void)startMonitoringForPeripheralConnection;
-(unsigned long long)currentAvailability;
-(void)setCurrentAvailability:(unsigned long long)arg1 ;
-(void)teardown;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapSnapshotCreatorRequester.h>

@class NSString;

@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester> {

	/*^block*/id handler;

}

@property (nonatomic,copy) id handler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotRequesterWitHandler:(/*^block*/id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(id)arg2 attributionString:(id)arg3 context:(id)arg4 ;
@end


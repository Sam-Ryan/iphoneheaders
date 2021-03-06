/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncSessionObserverInterface.h>

@protocol PSYSyncSessionObserverInterface;
@class NSString;

@interface PSYSyncSessionObserverExportedObject : NSObject <PSYSyncSessionObserverInterface> {

	id<PSYSyncSessionObserverInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYSyncSessionObserverInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PSYSyncSessionObserverInterface>)arg1 ;
-(id<PSYSyncSessionObserverInterface>)delegate;
-(oneway void)syncSessionWillStart:(id)arg1 ;
-(oneway void)updateSyncSession:(id)arg1 ;
-(oneway void)invalidateSyncSession:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDNodeBrowserDelegate.h>

@protocol OS_xpc_object, SDNetworkBrowserDelegate;
@class NSString, NSObject;

@interface SDNetworkBrowser : NSObject <SDNodeBrowserDelegate> {

	SFNodeRef _rootNode;
	long long _mode;
	CFDictionaryRef _nodeBrowsers;
	NSString* _kind;
	NSString* _bundleID;
	NSString* _objectKey;
	NSObject*<OS_xpc_object> _boostMessage;
	NSObject*<OS_xpc_object> _connection;
	id<SDNetworkBrowserDelegate> _delegate;

}

@property (assign) long long mode; 
@property (copy,readonly) NSString * kind;                             //@synthesize kind=_kind - In the implementation block
@property (copy) NSString * bundleID;                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * objectKey;                                 //@synthesize objectKey=_objectKey - In the implementation block
@property (retain) NSObject*<OS_xpc_object> boostMessage;              //@synthesize boostMessage=_boostMessage - In the implementation block
@property (retain) NSObject*<OS_xpc_object> connection;                //@synthesize connection=_connection - In the implementation block
@property (__weak) id<SDNetworkBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObjectKey:(NSString *)arg1 ;
-(id)childrenForNode:(SFNodeRef)arg1 ;
-(void)nodeBrowser:(id)arg1 nodesChangedForParent:(SFNodeRef)arg2 protocol:(id)arg3 error:(int)arg4 ;
-(id)initWithKind:(id)arg1 rootNode:(SFNodeRef)arg2 ;
-(int)openNode:(SFNodeRef)arg1 forProtocol:(id)arg2 flags:(unsigned long long)arg3 ;
-(SFNodeRef)copyRootNode;
-(id)sidebarChildren;
-(int)closeNode:(SFNodeRef)arg1 ;
-(NSString *)objectKey;
-(NSObject*<OS_xpc_object>)boostMessage;
-(void)setBoostMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setDelegate:(id<SDNetworkBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id<SDNetworkBrowserDelegate>)delegate;
-(void)invalidate;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(NSString *)kind;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(int)addNode:(SFNodeRef)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(int)removeNode:(SFNodeRef)arg1 ;
@end

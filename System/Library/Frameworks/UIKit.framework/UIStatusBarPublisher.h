/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {

	CFMachPortRef _machPort;
	int _styleOverrides;
	NSMutableSet* _statusBarItems;

}
-(void)dealloc;
-(int)addStyleOverrides:(int)arg1 ;
-(int)removeStyleOverrides:(int)arg1 ;
-(void)addStatusBarItem:(int)arg1 ;
-(void)removeStatusBarItem:(int)arg1 ;
-(unsigned)publisherPort;
-(id)initWithCFMachPort:(CFMachPortRef)arg1 ;
-(id)statusBarItems;
-(int)styleOverrides;
@end


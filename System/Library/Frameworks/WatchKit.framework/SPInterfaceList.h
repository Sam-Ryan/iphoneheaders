/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/SPInterfaceObject.h>

@protocol SPInterfaceController;
@class NSArray, NSDictionary;

@interface SPInterfaceList : SPInterfaceObject {

	NSArray* _rowControllers;
	NSDictionary* _rowDescriptions;
	id<SPInterfaceController> _controller;
	NSArray* _rowControllerProperties;

}

@property (nonatomic,copy) NSArray * rowControllers;                                   //@synthesize rowControllers=_rowControllers - In the implementation block
@property (nonatomic,readonly) long long numberOfRows; 
@property (nonatomic,copy) NSDictionary * rowDescriptions;                             //@synthesize rowDescriptions=_rowDescriptions - In the implementation block
@property (assign,nonatomic,__weak) id<SPInterfaceController> controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSArray * rowControllerProperties;                        //@synthesize rowControllerProperties=_rowControllerProperties - In the implementation block
-(long long)numberOfRows;
-(id<SPInterfaceController>)controller;
-(void)setController:(id<SPInterfaceController>)arg1 ;
-(void)_setupWithDescription:(id)arg1 forController:(id)arg2 ;
-(id)rowControllerAtIndex:(long long)arg1 ;
-(void)setRowDescriptions:(NSDictionary *)arg1 ;
-(void)setRowTypes:(id)arg1 ;
-(NSDictionary *)rowDescriptions;
-(void)setRowControllers:(NSArray *)arg1 ;
-(void)setRowControllerProperties:(NSArray *)arg1 ;
-(NSArray *)rowControllers;
-(void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2 ;
-(NSArray *)rowControllerProperties;
@end


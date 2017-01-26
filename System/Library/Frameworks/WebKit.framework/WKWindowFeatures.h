/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSNumber;

@interface WKWindowFeatures : NSObject {

	RetainPtr<NSNumber>* _menuBarVisibility;
	RetainPtr<NSNumber>* _statusBarVisibility;
	RetainPtr<NSNumber>* _toolbarsVisibility;
	RetainPtr<NSNumber>* _allowsResizing;
	RetainPtr<NSNumber>* _x;
	RetainPtr<NSNumber>* _y;
	RetainPtr<NSNumber>* _width;
	RetainPtr<NSNumber>* _height;

}

@property (nonatomic,readonly) NSNumber * menuBarVisibility; 
@property (nonatomic,readonly) NSNumber * statusBarVisibility; 
@property (nonatomic,readonly) NSNumber * toolbarsVisibility; 
@property (nonatomic,readonly) NSNumber * allowsResizing; 
@property (nonatomic,readonly) NSNumber * x; 
@property (nonatomic,readonly) NSNumber * y; 
@property (nonatomic,readonly) NSNumber * width; 
@property (nonatomic,readonly) NSNumber * height; 
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)x;
-(NSNumber *)y;
-(id)_initWithWindowFeatures:(const WindowFeatures*)arg1 ;
-(NSNumber *)menuBarVisibility;
-(NSNumber *)statusBarVisibility;
-(NSNumber *)toolbarsVisibility;
-(NSNumber *)allowsResizing;
@end


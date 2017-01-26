/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSStackFrameInfo : NSObject {

	unsigned long long _address;
	NSString* _functionName;
	NSString* _className;
	NSString* _executablePath;
	NSString* _realFunctionName;

}

@property (nonatomic,readonly) unsigned long long address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,retain,readonly) NSString * functionName;                //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain,readonly) NSString * executableName; 
@property (nonatomic,retain,readonly) NSString * executablePath;              //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,retain,readonly) NSString * className;                   //@synthesize className=_className - In the implementation block
-(NSString *)executableName;
-(id)initWithReturnAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)executablePath;
-(NSString *)className;
-(NSString *)functionName;
-(unsigned long long)address;
@end

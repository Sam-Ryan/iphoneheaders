/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MTLLibrary <NSObject>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * functionNames; 
@required
-(NSArray *)functionNames;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(id)newFunctionWithName:(id)arg1;
-(id<MTLDevice>)device;

@end


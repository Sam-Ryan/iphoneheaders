/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOOperation.h>

@interface TSKCOAbstractOperation : NSObject <TSKCOOperation> {

	BOOL mNoop;

}

@property (nonatomic,readonly) BOOL isNoop; 
+(id)_classRegistry;
+(void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2 ;
+(id)newObjectForUnarchiver:(id)arg1 message:(const Message*)arg2 ;
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(BOOL)isNoop;
-(id)initWithNoop:(BOOL)arg1 ;
-(void)dealloc;
@end


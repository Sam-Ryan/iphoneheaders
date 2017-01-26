/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {

	NSURL* _baseDirectoryURL;

}
+(id)baseDirectoryURL;
+(id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2 ;
+(Class)managedTemporaryDirectoryClass;
+(id)sharedManager;
-(id)_readDirectories;
-(void)_clearDirectories:(id)arg1 ;
-(id)newDirectoryWithFilename:(id)arg1 ;
-(id)init;
@end


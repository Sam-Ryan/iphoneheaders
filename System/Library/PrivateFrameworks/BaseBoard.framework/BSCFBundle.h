/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSCFBundle : NSObject {

	CFBundleRef _cfBundle;

}
-(id)_pathsForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(CFBundleRef)cfBundle;
-(void)dealloc;
-(id)description;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)infoDictionary;
-(id)bundleIdentifier;
-(id)localizedInfoDictionary;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(id)executablePath;
-(id)bundlePath;
-(id)initWithURL:(id)arg1 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)initWithPath:(id)arg1 ;
@end


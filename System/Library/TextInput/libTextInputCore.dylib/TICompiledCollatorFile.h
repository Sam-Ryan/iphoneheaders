/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class NSString;

@interface TICompiledCollatorFile : NSObject {

	int m_descriptor;
	char* m_mappedFile;
	long long m_length;
	NSString* m_path;

}
+(id)sharedCollatorFile;
+(UCollatorRef)createCollatorWithType:(int)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 error:(unsigned*)arg2 ;
-(UCollatorRef)createCollatorWithType:(int)arg1 ;
@end
